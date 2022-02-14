
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcoe_fcf_device {int dev_loss_tmo; scalar_t__ state; int dev_loss_work; int * priv; } ;
struct fcoe_ctlr_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fcoe_ctlr_device*,int *,int) ;
 struct fcoe_ctlr_device* FUNC_1 (struct fcoe_fcf_device*) ;

void FUNC_2(struct fcoe_fcf_device *VAR_3)
{
 struct fcoe_ctlr_device *VAR_4 = FUNC_1(VAR_3);
 int VAR_5 = VAR_3->dev_loss_tmo;

 if (VAR_3->state != VAR_0)
  return;

 VAR_3->state = VAR_1;






 VAR_3->priv = ((void*)0);

 FUNC_0(VAR_4, &VAR_3->dev_loss_work,
        VAR_5 * VAR_2);
}
