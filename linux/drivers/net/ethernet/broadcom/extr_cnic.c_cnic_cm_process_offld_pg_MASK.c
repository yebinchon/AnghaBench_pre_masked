
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct l4_kcq {size_t pg_host_opaque; scalar_t__ op_code; scalar_t__ status; int pg_cid; } ;
struct cnic_sock {int flags; int pg_cid; } ;
struct cnic_local {struct cnic_sock* csk_tbl; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct cnic_sock*) ;
 int FUNC_2 (struct cnic_local*,struct cnic_sock*,int ) ;
 int FUNC_3 (struct cnic_sock*) ;
 int FUNC_4 (struct cnic_sock*) ;
 int FUNC_5 (struct cnic_sock*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct cnic_dev *VAR_5, struct l4_kcq *VAR_6)
{
 struct cnic_local *VAR_7 = VAR_5->cnic_priv;
 u32 VAR_8 = VAR_6->pg_host_opaque;
 u8 VAR_9 = VAR_6->op_code;
 struct cnic_sock *VAR_10 = &VAR_7->csk_tbl[VAR_8];

 FUNC_4(VAR_10);
 if (!FUNC_3(VAR_10))
  goto done;

 if (VAR_9 == VAR_2) {
  FUNC_0(VAR_3, &VAR_10->flags);
  goto done;
 }

 if (VAR_6->status == VAR_0) {
  FUNC_0(VAR_3, &VAR_10->flags);
  FUNC_2(VAR_7, VAR_10,
          VAR_1);
  goto done;
 }

 VAR_10->pg_cid = VAR_6->pg_cid;
 FUNC_6(VAR_4, &VAR_10->flags);
 FUNC_1(VAR_10);

done:
 FUNC_5(VAR_10);
}
