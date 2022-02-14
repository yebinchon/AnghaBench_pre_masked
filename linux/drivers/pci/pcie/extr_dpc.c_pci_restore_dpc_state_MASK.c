
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int * data; } ;
struct pci_cap_saved_state {TYPE_1__ cap; } ;
struct dpc_dev {scalar_t__ cap_pos; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct pci_cap_saved_state* FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int ) ;
 struct dpc_dev* FUNC_3 (struct pci_dev*) ;

void FUNC_4(struct pci_dev *VAR_2)
{
 struct dpc_dev *VAR_3;
 struct pci_cap_saved_state *VAR_4;
 u16 *VAR_5;

 if (!FUNC_1(VAR_2))
  return;

 VAR_3 = FUNC_3(VAR_2);
 if (!VAR_3)
  return;

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 if (!VAR_4)
  return;

 VAR_5 = (u16 *)&VAR_4->cap.data[0];
 FUNC_2(VAR_2, VAR_3->cap_pos + VAR_0, *VAR_5);
}
