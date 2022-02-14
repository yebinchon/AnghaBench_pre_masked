
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cdns3 {TYPE_1__* otg_regs; int dev; } ;
struct TYPE_2__ {int state; int cmd; int sts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int,int,int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int *) ;

int FUNC_5(struct cdns3 *VAR_8, int VAR_9)
{
 int VAR_10, VAR_11;
 u32 VAR_12 = VAR_5;


 if (VAR_9) {
  FUNC_4(VAR_1 | VAR_12, &VAR_8->otg_regs->cmd);

  FUNC_0(VAR_8->dev, "Waiting till Device mode is turned on\n");

  VAR_10 = FUNC_2(&VAR_8->otg_regs->sts, VAR_11,
      VAR_11 & VAR_7,
      1, 100000);
  if (VAR_10) {
   FUNC_1(VAR_8->dev, "timeout waiting for dev_ready\n");
   return VAR_10;
  }
 } else {




  FUNC_3(20, 30);
  FUNC_4(VAR_3 | VAR_0 |
         VAR_2 | VAR_4,
         &VAR_8->otg_regs->cmd);

  FUNC_2(&VAR_8->otg_regs->state, VAR_11,
       !(VAR_11 & VAR_6),
       1, 2000000);
 }

 return 0;
}
