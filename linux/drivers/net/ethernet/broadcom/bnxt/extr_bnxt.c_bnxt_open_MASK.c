
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bnxt_pf_info {int active_vfs; } ;
struct bnxt {struct bnxt_pf_info pf; int state; int dev; } ;


 scalar_t__ FUNC_0 (struct bnxt*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bnxt*,int,int) ;
 int FUNC_2 (struct bnxt*,int*,int) ;
 int FUNC_3 (struct bnxt*) ;
 int FUNC_4 (struct bnxt*,int) ;
 int FUNC_5 (int ,char*) ;
 struct bnxt* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_3)
{
 struct bnxt *VAR_4 = FUNC_6(VAR_3);
 int VAR_5;

 if (FUNC_8(VAR_0, &VAR_4->state)) {
  FUNC_5(VAR_4->dev, "A previous firmware reset did not complete, aborting\n");
  return -VAR_2;
 }

 VAR_5 = FUNC_4(VAR_4, 1);
 if (VAR_5)
  return VAR_5;
 VAR_5 = FUNC_1(VAR_4, 1, 1);
 if (VAR_5) {
  FUNC_4(VAR_4, 0);
 } else {
  if (FUNC_7(VAR_1, &VAR_4->state) &&
      FUNC_0(VAR_4)) {
   struct bnxt_pf_info *VAR_6 = &VAR_4->pf;
   int VAR_7 = VAR_6->active_vfs;

   if (VAR_7)
    FUNC_2(VAR_4, &VAR_7, 1);
  }
  FUNC_3(VAR_4);
 }

 return VAR_5;
}
