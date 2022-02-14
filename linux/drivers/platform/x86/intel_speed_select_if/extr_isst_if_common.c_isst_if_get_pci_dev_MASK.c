
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int* bus_info; } ;


 int FUNC_0 (int,int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 struct pci_dev* FUNC_2 (int ,int,int ) ;

struct pci_dev *FUNC_3(int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_3 < 0 || VAR_3 > 1 || VAR_2 < 0 || VAR_2 >= VAR_1 ||
     VAR_2 >= FUNC_1())
  return ((void*)0);

 VAR_6 = VAR_0[VAR_2].bus_info[VAR_3];
 if (VAR_6 < 0)
  return ((void*)0);

 return FUNC_2(0, VAR_6, FUNC_0(VAR_4, VAR_5));
}
