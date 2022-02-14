
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_pci {int irq_lock; int irq_enabled; } ;
struct rtw_dev {scalar_t__ priv; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct rtw_dev*,struct rtw_pci*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct rtw_dev *VAR_3 = VAR_2;
 struct rtw_pci *VAR_4 = (struct rtw_pci *)VAR_3->priv;

 FUNC_1(&VAR_4->irq_lock);
 if (!VAR_4->irq_enabled)
  goto out;
 FUNC_0(VAR_3, VAR_4);
out:
 FUNC_2(&VAR_4->irq_lock);

 return VAR_0;
}
