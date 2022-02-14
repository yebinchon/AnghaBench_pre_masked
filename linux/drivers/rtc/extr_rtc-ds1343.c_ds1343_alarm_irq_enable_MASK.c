
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds1343_priv {scalar_t__ irq; int mutex; int irqen; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ds1343_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, unsigned int VAR_3)
{
 struct ds1343_priv *VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = 0;

 if (VAR_4->irq <= 0)
  return -VAR_0;

 FUNC_2(&VAR_4->mutex);

 if (VAR_3)
  VAR_4->irqen |= VAR_1;
 else
  VAR_4->irqen &= ~VAR_1;

 VAR_5 = FUNC_1(VAR_2);

 FUNC_3(&VAR_4->mutex);

 return VAR_5;
}
