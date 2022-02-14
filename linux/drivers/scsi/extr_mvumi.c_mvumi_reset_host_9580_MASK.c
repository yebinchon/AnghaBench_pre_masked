
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mvumi_hba {TYPE_2__* pdev; TYPE_1__* regs; int fw_state; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int reset_request; int reset_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct mvumi_hba*) ;
 int FUNC_5 (struct mvumi_hba*) ;
 int FUNC_6 (struct mvumi_hba*) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_9(struct mvumi_hba *VAR_2)
{
 VAR_2->fw_state = VAR_1;

 FUNC_1(0, VAR_2->regs->reset_enable);
 FUNC_1(0xf, VAR_2->regs->reset_request);

 FUNC_1(0x10, VAR_2->regs->reset_enable);
 FUNC_1(0x10, VAR_2->regs->reset_request);
 FUNC_2(100);
 FUNC_7(VAR_2->pdev);

 if (FUNC_8(VAR_2->pdev)) {
  FUNC_0(&VAR_2->pdev->dev, "enable device failed\n");
  return VAR_0;
 }
 if (FUNC_3(VAR_2->pdev)) {
  FUNC_0(&VAR_2->pdev->dev, "set master failed\n");
  return VAR_0;
 }
 FUNC_4(VAR_2);
 if (FUNC_5(VAR_2) == VAR_0)
  return VAR_0;

 return FUNC_6(VAR_2);
}
