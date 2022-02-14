
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int irq_work; int hw; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct wl1251 *VAR_4;

 FUNC_1(VAR_0, "IRQ");

 VAR_4 = VAR_3;

 FUNC_0(VAR_4->hw, &VAR_4->irq_work);

 return VAR_1;
}
