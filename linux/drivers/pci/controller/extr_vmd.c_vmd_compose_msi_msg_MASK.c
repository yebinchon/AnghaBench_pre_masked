
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmd_irq_list {int dummy; } ;
struct vmd_irq {struct vmd_irq_list* irq; } ;
struct vmd_dev {int dummy; } ;
struct msi_msg {int address_lo; scalar_t__ data; int address_hi; } ;
struct irq_data {struct vmd_irq* chip_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vmd_dev*,struct vmd_irq_list*) ;
 struct vmd_dev* FUNC_2 (struct irq_data*) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_2, struct msi_msg *VAR_3)
{
 struct vmd_irq *VAR_4 = VAR_2->chip_data;
 struct vmd_irq_list *VAR_5 = VAR_4->irq;
 struct vmd_dev *VAR_6 = FUNC_2(VAR_2);

 VAR_3->address_hi = VAR_0;
 VAR_3->address_lo = VAR_1 |
     FUNC_0(FUNC_1(VAR_6, VAR_5));
 VAR_3->data = 0;
}
