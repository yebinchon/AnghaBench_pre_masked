
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bnxt_ulp_ops {int dummy; } ;
struct bnxt_ulp {int ulp_ops; void* handle; int ref_count; } ;
struct bnxt_en_dev {struct bnxt_ulp* ulp_tbl; struct net_device* net; } ;
struct bnxt {unsigned int cp_nr_rings; int state; int dev; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;
 unsigned int FUNC_2 (struct bnxt*) ;
 int FUNC_3 (struct bnxt*,int ) ;
 int FUNC_4 (int ,char*,int) ;
 struct bnxt* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,struct bnxt_ulp_ops*) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct bnxt_en_dev *VAR_7, int VAR_8,
        struct bnxt_ulp_ops *VAR_9, void *VAR_10)
{
 struct net_device *VAR_11 = VAR_7->net;
 struct bnxt *VAR_12 = FUNC_5(VAR_11);
 struct bnxt_ulp *VAR_13;

 FUNC_0();
 if (VAR_8 >= VAR_0)
  return -VAR_5;

 VAR_13 = &VAR_7->ulp_tbl[VAR_8];
 if (FUNC_6(VAR_13->ulp_ops)) {
  FUNC_4(VAR_12->dev, "ulp id %d already registered\n", VAR_8);
  return -VAR_4;
 }
 if (VAR_8 == VAR_2) {
  unsigned int VAR_14;

  VAR_14 = FUNC_2(VAR_12);
  if (VAR_14 <= VAR_1 ||
      VAR_12->cp_nr_rings == VAR_14)
   return -VAR_6;
 }

 FUNC_1(&VAR_13->ref_count, 0);
 VAR_13->handle = VAR_10;
 FUNC_7(VAR_13->ulp_ops, VAR_9);

 if (VAR_8 == VAR_2) {
  if (FUNC_8(VAR_3, &VAR_12->state))
   FUNC_3(VAR_12, 0);
 }

 return 0;
}
