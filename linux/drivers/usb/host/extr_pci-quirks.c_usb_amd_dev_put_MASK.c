
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ probe_count; scalar_t__ need_pll_quirk; scalar_t__ isoc_reqs; int sb_type; scalar_t__ nb_type; struct pci_dev* smbus_dev; struct pci_dev* nb_dev; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(void)
{
 struct pci_dev *VAR_2, *VAR_3;
 unsigned long VAR_4;

 FUNC_2(&VAR_1, VAR_4);

 VAR_0.probe_count--;
 if (VAR_0.probe_count > 0) {
  FUNC_3(&VAR_1, VAR_4);
  return;
 }


 VAR_2 = VAR_0.nb_dev;
 VAR_3 = VAR_0.smbus_dev;

 VAR_0.nb_dev = ((void*)0);
 VAR_0.smbus_dev = ((void*)0);
 VAR_0.nb_type = 0;
 FUNC_0(&VAR_0.sb_type, 0, sizeof(VAR_0.sb_type));
 VAR_0.isoc_reqs = 0;
 VAR_0.need_pll_quirk = 0;

 FUNC_3(&VAR_1, VAR_4);

 FUNC_1(VAR_2);
 FUNC_1(VAR_3);
}
