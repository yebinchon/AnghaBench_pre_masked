
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dev; TYPE_1__* bus; } ;
struct TYPE_2__ {struct pci_dev* self; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*,char*,char*) ;
 int FUNC_2 (struct pci_dev*,int) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;
 int FUNC_4 (struct pci_dev*,int ,int*) ;

void FUNC_5(struct pci_dev *VAR_5)
{
 struct pci_dev *VAR_6 = VAR_5->bus->self;
 u16 VAR_7, VAR_8 = 0;

 FUNC_4(VAR_5, VAR_1, &VAR_7);
 VAR_7 &= VAR_2;
 if (VAR_6) {
  FUNC_4(VAR_6, VAR_1,
       &VAR_8);
  VAR_8 &= VAR_2;
 }

 if (!VAR_7 && (!VAR_6 || !VAR_8)) {

  return;
 }

 FUNC_1(&VAR_5->dev, "disabling ASPM %s %s\n",
   (VAR_7 & VAR_3) ? "L0s" : "",
   (VAR_7 & VAR_4) ? "L1" : "");

 if (FUNC_0(VAR_0)) {
  int VAR_9;

  VAR_9 = FUNC_2(VAR_5, VAR_7);
  if (!VAR_9)
   return;
 }




 FUNC_3(VAR_5, VAR_1, VAR_7);
 if (VAR_6)
  FUNC_3(VAR_6, VAR_1,
        VAR_7);
}
