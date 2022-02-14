
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_pci {int* irq_mask; int irq_lock; } ;
struct rtw_dev {scalar_t__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct rtw_dev*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct rtw_dev *VAR_10)
{
 struct rtw_pci *VAR_11 = (struct rtw_pci *)VAR_10->priv;
 int VAR_12 = 0;

 VAR_11->irq_mask[0] = VAR_4 |
         VAR_5 |
         VAR_2 |
         VAR_1 |
         VAR_8 |
         VAR_9 |
         VAR_6 |
         VAR_0 |
         0;
 VAR_11->irq_mask[1] = VAR_7 |
         0;
 VAR_11->irq_mask[3] = VAR_3 |
         0;
 FUNC_1(&VAR_11->irq_lock);
 VAR_12 = FUNC_0(VAR_10);

 return VAR_12;
}
