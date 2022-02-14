
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpio_priv {int io; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 struct dpio_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_0, void *VAR_1)
{
 struct device *VAR_2 = (struct device *)VAR_1;
 struct dpio_priv *VAR_3 = FUNC_0(VAR_2);

 return FUNC_1(VAR_3->io);
}
