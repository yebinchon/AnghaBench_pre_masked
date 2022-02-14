
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int current_state; int enable_cnt; TYPE_1__* resource; scalar_t__ pm_cap; } ;
struct TYPE_2__ {unsigned long flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pci_dev*,int) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,scalar_t__,int*) ;
 struct pci_dev* FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_5, unsigned long VAR_6)
{
 struct pci_dev *VAR_7;
 int VAR_8;
 int VAR_9, VAR_10 = 0;







 if (VAR_5->pm_cap) {
  u16 VAR_11;
  FUNC_4(VAR_5, VAR_5->pm_cap + VAR_2, &VAR_11);
  VAR_5->current_state = (VAR_11 & VAR_3);
 }

 if (FUNC_1(&VAR_5->enable_cnt) > 1)
  return 0;

 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7)
  FUNC_3(VAR_7);


 for (VAR_9 = 0; VAR_9 <= VAR_4; VAR_9++)
  if (VAR_5->resource[VAR_9].flags & VAR_6)
   VAR_10 |= (1 << VAR_9);
 for (VAR_9 = VAR_1; VAR_9 < VAR_0; VAR_9++)
  if (VAR_5->resource[VAR_9].flags & VAR_6)
   VAR_10 |= (1 << VAR_9);

 VAR_8 = FUNC_2(VAR_5, VAR_10);
 if (VAR_8 < 0)
  FUNC_0(&VAR_5->enable_cnt);
 return VAR_8;
}
