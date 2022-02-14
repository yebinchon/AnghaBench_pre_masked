
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_wcnss {int dummy; } ;
struct platform_device {int dev; } ;
typedef int irq_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int *,char*,char const*) ;
 int FUNC_2 (int *,int,int *,int ,int,char*,struct qcom_wcnss*) ;
 int FUNC_3 (struct platform_device*,char const*) ;

__attribute__((used)) static int FUNC_4(struct qcom_wcnss *VAR_2,
        struct platform_device *VAR_3,
        const char *VAR_4,
        bool VAR_5,
        irq_handler_t VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_3(VAR_3, VAR_4);
 if (VAR_7 < 0 && VAR_5) {
  FUNC_0(&VAR_3->dev, "no %s IRQ defined, ignoring\n", VAR_4);
  return 0;
 } else if (VAR_7 < 0) {
  FUNC_1(&VAR_3->dev, "no %s IRQ defined\n", VAR_4);
  return VAR_7;
 }

 VAR_7 = FUNC_2(&VAR_3->dev, VAR_7,
     ((void*)0), VAR_6,
     VAR_1 | VAR_0,
     "wcnss", VAR_2);
 if (VAR_7)
  FUNC_1(&VAR_3->dev, "request %s IRQ failed\n", VAR_4);

 return VAR_7;
}
