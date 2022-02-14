
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hva_dev {int irq_err; int irq_its; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct device* FUNC_1 (struct hva_dev*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;

void FUNC_4(struct hva_dev *VAR_0)
{
 struct device *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_0->irq_its);
 FUNC_0(VAR_0->irq_err);

 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
}
