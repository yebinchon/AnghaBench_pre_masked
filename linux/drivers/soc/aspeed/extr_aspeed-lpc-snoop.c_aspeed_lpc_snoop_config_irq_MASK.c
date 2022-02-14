
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct aspeed_lpc_snoop {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct device*,int ,int ,int ,int ,struct aspeed_lpc_snoop*) ;
 int FUNC_2 (struct platform_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct aspeed_lpc_snoop *VAR_4,
           struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 int VAR_7;

 VAR_4->irq = FUNC_2(VAR_5, 0);
 if (!VAR_4->irq)
  return -VAR_1;

 VAR_7 = FUNC_1(VAR_6, VAR_4->irq,
         VAR_3, VAR_2,
         VAR_0, VAR_4);
 if (VAR_7 < 0) {
  FUNC_0(VAR_6, "Unable to request IRQ %d\n", VAR_4->irq);
  VAR_4->irq = 0;
  return VAR_7;
 }

 return 0;
}
