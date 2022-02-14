
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dsps_glue {int vbus_irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int,int *,int ,int ,char*,struct dsps_glue*) ;
 int VAR_2 ;
 int FUNC_2 (struct platform_device*,char*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_3,
     struct dsps_glue *VAR_4)
{
 int VAR_5;

 VAR_4->vbus_irq = FUNC_2(VAR_3, "vbus");
 if (VAR_4->vbus_irq == -VAR_0)
  return -VAR_0;

 if (VAR_4->vbus_irq <= 0) {
  VAR_4->vbus_irq = 0;
  return 0;
 }

 VAR_5 = FUNC_1(VAR_4->dev, VAR_4->vbus_irq,
       ((void*)0), VAR_2,
       VAR_1,
       "vbus", VAR_4);
 if (VAR_5) {
  VAR_4->vbus_irq = 0;
  return VAR_5;
 }
 FUNC_0(VAR_4->dev, "VBUS irq %i configured\n", VAR_4->vbus_irq);

 return 0;
}
