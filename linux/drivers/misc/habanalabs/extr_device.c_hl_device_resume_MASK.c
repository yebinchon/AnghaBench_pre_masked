
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hl_device {int disabled; int pdev; int dev; int in_reset; TYPE_1__* asic_funcs; } ;
struct TYPE_2__ {int (* resume ) (struct hl_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct hl_device*,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct hl_device*) ;

int FUNC_10(struct hl_device *VAR_1)
{
 int VAR_2;

 FUNC_8(VAR_1->pdev, VAR_0);
 FUNC_6(VAR_1->pdev);
 VAR_2 = FUNC_5(VAR_1->pdev);
 if (VAR_2) {
  FUNC_1(VAR_1->dev,
   "Failed to enable PCI device in resume\n");
  return VAR_2;
 }

 FUNC_7(VAR_1->pdev);

 VAR_2 = VAR_1->asic_funcs->resume(VAR_1);
 if (VAR_2) {
  FUNC_1(VAR_1->dev, "Failed to resume device after suspend\n");
  goto disable_device;
 }


 VAR_1->disabled = 0;
 FUNC_0(&VAR_1->in_reset, 0);

 VAR_2 = FUNC_2(VAR_1, 1, 0);
 if (VAR_2) {
  FUNC_1(VAR_1->dev, "Failed to reset device during resume\n");
  goto disable_device;
 }

 return 0;

disable_device:
 FUNC_3(VAR_1->pdev);
 FUNC_4(VAR_1->pdev);

 return VAR_2;
}
