
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int ari_enabled; TYPE_1__* bus; scalar_t__ devfn; } ;
struct TYPE_2__ {struct pci_dev* self; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct pci_dev*,int ,int ) ;
 int FUNC_3 (struct pci_dev*,int ,int*) ;
 int FUNC_4 (struct pci_dev*,int ,int ) ;

void FUNC_5(struct pci_dev *VAR_6)
{
 u32 VAR_7;
 struct pci_dev *VAR_8;

 if (VAR_5 || !FUNC_1(VAR_6) || VAR_6->devfn)
  return;

 VAR_8 = VAR_6->bus->self;
 if (!VAR_8)
  return;

 FUNC_3(VAR_8, VAR_0, &VAR_7);
 if (!(VAR_7 & VAR_1))
  return;

 if (FUNC_0(VAR_6, VAR_4)) {
  FUNC_4(VAR_8, VAR_2,
      VAR_3);
  VAR_8->ari_enabled = 1;
 } else {
  FUNC_2(VAR_8, VAR_2,
        VAR_3);
  VAR_8->ari_enabled = 0;
 }
}
