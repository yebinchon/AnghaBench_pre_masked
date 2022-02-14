
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_pci {int irq_enabled; int * irq_mask; } ;
struct rtw_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtw_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct rtw_dev *VAR_3,
         struct rtw_pci *VAR_4)
{
 FUNC_0(VAR_3, VAR_0, VAR_4->irq_mask[0]);
 FUNC_0(VAR_3, VAR_1, VAR_4->irq_mask[1]);
 FUNC_0(VAR_3, VAR_2, VAR_4->irq_mask[3]);
 VAR_4->irq_enabled = 1;
}
