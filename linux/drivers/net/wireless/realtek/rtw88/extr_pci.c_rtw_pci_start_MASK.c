
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_pci {int irq_lock; } ;
struct rtw_dev {scalar_t__ priv; } ;


 int FUNC_0 (struct rtw_dev*,struct rtw_pci*) ;
 int FUNC_1 (struct rtw_dev*,struct rtw_pci*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct rtw_dev *VAR_0)
{
 struct rtw_pci *VAR_1 = (struct rtw_pci *)VAR_0->priv;
 unsigned long VAR_2;

 FUNC_0(VAR_0, VAR_1);

 FUNC_2(&VAR_1->irq_lock, VAR_2);
 FUNC_1(VAR_0, VAR_1);
 FUNC_3(&VAR_1->irq_lock, VAR_2);

 return 0;
}
