
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct hisi_pmu {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int ,int,int ,struct hisi_pmu*) ;
 int VAR_2 ;
 int FUNC_3 (struct platform_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct hisi_pmu *VAR_3,
     struct platform_device *VAR_4)
{
 int VAR_5, VAR_6;


 VAR_5 = FUNC_3(VAR_4, 0);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_6 = FUNC_2(&VAR_4->dev, VAR_5, VAR_2,
          VAR_0 | VAR_1,
          FUNC_1(&VAR_4->dev), VAR_3);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_4->dev,
   "Fail to request IRQ:%d ret:%d\n", VAR_5, VAR_6);
  return VAR_6;
 }

 VAR_3->irq = VAR_5;

 return 0;
}
