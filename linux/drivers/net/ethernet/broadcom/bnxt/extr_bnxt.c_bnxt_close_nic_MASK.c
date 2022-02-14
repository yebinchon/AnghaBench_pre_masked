
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt {int dev; scalar_t__ sriov_cfg; int sriov_cfg_wait; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnxt*,int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int,int ) ;

int FUNC_5(struct bnxt *VAR_3, bool VAR_4, bool VAR_5)
{
 int VAR_6 = 0;

 if (FUNC_3(VAR_2, &VAR_3->state)) {







  FUNC_1(VAR_3->dev, "FW reset in progress during close, FW reset will be aborted\n");
  FUNC_2(VAR_1, &VAR_3->state);
 }
 FUNC_0(VAR_3, VAR_4, VAR_5);
 return VAR_6;
}
