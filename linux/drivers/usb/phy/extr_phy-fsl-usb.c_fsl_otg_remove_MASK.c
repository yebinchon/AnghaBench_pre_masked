
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct fsl_usb2_platform_data {int (* exit ) (struct platform_device*) ;} ;
struct TYPE_5__ {TYPE_2__* otg; } ;
struct TYPE_6__ {TYPE_1__ phy; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fsl_usb2_platform_data* FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (void*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 struct fsl_usb2_platform_data *VAR_5 = FUNC_0(&VAR_4->dev);

 FUNC_7(&VAR_2->phy);
 FUNC_1(VAR_2->irq, VAR_2);

 FUNC_3((void *)VAR_3);

 FUNC_2();
 FUNC_4(VAR_2->phy.otg);
 FUNC_4(VAR_2);

 FUNC_6(VAR_0, VAR_1);

 if (VAR_5->exit)
  VAR_5->exit(VAR_4);

 return 0;
}
