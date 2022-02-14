
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct cnic_local {size_t max_cid_space; struct cnic_context* ctx_tbl; } ;
struct cnic_dev {int netdev; struct cnic_local* cnic_priv; } ;
struct cnic_context {int cid; int ctx_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct cnic_dev *VAR_2, u32 VAR_3)
{
 struct cnic_local *VAR_4 = VAR_2->cnic_priv;
 u32 VAR_5;

 for (VAR_5 = VAR_3; VAR_5 < VAR_4->max_cid_space; VAR_5++) {
  struct cnic_context *VAR_6 = &VAR_4->ctx_tbl[VAR_5];
  int VAR_7;

  while (FUNC_2(VAR_0, &VAR_6->ctx_flags))
   FUNC_0(10);

  for (VAR_7 = 0; VAR_7 < 5; VAR_7++) {
   if (!FUNC_2(VAR_1, &VAR_6->ctx_flags))
    break;
   FUNC_0(20);
  }

  if (FUNC_2(VAR_1, &VAR_6->ctx_flags))
   FUNC_1(VAR_2->netdev, "CID %x not deleted\n",
       VAR_6->cid);
 }
}
