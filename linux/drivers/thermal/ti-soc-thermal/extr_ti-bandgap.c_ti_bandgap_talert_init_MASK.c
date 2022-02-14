
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_bandgap {scalar_t__ irq; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct platform_device*,int ) ;
 int FUNC_2 (int,int *,int ,int,char*,struct ti_bandgap*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct ti_bandgap *VAR_3,
      struct platform_device *VAR_4)
{
 int VAR_5;

 VAR_3->irq = FUNC_1(VAR_4, 0);
 if (VAR_3->irq < 0) {
  FUNC_0(&VAR_4->dev, "get_irq failed\n");
  return VAR_3->irq;
 }
 VAR_5 = FUNC_2(VAR_3->irq, ((void*)0),
       VAR_2,
       VAR_1 | VAR_0,
       "talert", VAR_3);
 if (VAR_5) {
  FUNC_0(&VAR_4->dev, "Request threaded irq failed.\n");
  return VAR_5;
 }

 return 0;
}
