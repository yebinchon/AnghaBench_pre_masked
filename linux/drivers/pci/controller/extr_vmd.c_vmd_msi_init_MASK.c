
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vmd_irq {unsigned int virq; int irq; int node; } ;
struct vmd_dev {int dev; } ;
struct msi_domain_info {int chip; } ;
struct msi_desc {int dummy; } ;
struct irq_domain {int dummy; } ;
struct TYPE_4__ {struct msi_desc* desc; } ;
typedef TYPE_1__ msi_alloc_info_t ;
typedef int irq_hw_number_t ;
struct TYPE_5__ {int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 unsigned int FUNC_1 (struct vmd_dev*,int ) ;
 int FUNC_2 (struct irq_domain*,unsigned int,unsigned int,int ,struct vmd_irq*,int ,struct vmd_dev*,int *) ;
 struct vmd_irq* FUNC_3 (int,int ) ;
 TYPE_3__* FUNC_4 (struct msi_desc*) ;
 unsigned int FUNC_5 (int ,unsigned int) ;
 struct vmd_dev* FUNC_6 (int ) ;
 int FUNC_7 (struct vmd_dev*,struct msi_desc*) ;

__attribute__((used)) static int FUNC_8(struct irq_domain *VAR_3, struct msi_domain_info *VAR_4,
   unsigned int VAR_5, irq_hw_number_t VAR_6,
   msi_alloc_info_t *VAR_7)
{
 struct msi_desc *VAR_8 = VAR_7->desc;
 struct vmd_dev *VAR_9 = FUNC_6(FUNC_4(VAR_8)->bus);
 struct vmd_irq *VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_1);
 unsigned int VAR_11, VAR_12;

 if (!VAR_10)
  return -VAR_0;

 FUNC_0(&VAR_10->node);
 VAR_10->irq = FUNC_7(VAR_9, VAR_8);
 VAR_10->virq = VAR_5;
 VAR_11 = FUNC_1(VAR_9, VAR_10->irq);
 VAR_12 = FUNC_5(VAR_9->dev, VAR_11);

 FUNC_2(VAR_3, VAR_5, VAR_12, VAR_4->chip, VAR_10,
       VAR_2, VAR_9, ((void*)0));
 return 0;
}
