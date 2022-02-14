
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parisc_device {int dev; } ;
struct gsc_fixup_struct {void (* choose_irq ) (struct parisc_device*,void*) ;void* ctrl; } ;


 int FUNC_0 (int *,struct gsc_fixup_struct*,int ) ;
 int VAR_0 ;

void FUNC_1(struct parisc_device *VAR_1, void *VAR_2,
   void (*VAR_3)(struct parisc_device *, void *))
{
 struct gsc_fixup_struct VAR_4 = {
  .choose_irq = VAR_3,
  .ctrl = VAR_2,
 };

 FUNC_0(&VAR_1->dev, &VAR_4, VAR_0);
}
