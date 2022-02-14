
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct pci_dev {int io_window; scalar_t__ vendor; int device; int pref_window; int pref_64_window; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (struct pci_dev*,int ,scalar_t__*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_6)
{
 u16 VAR_7;
 u32 VAR_8, VAR_9;

 FUNC_1(VAR_6, VAR_0, &VAR_7);
 if (!VAR_7) {
  FUNC_3(VAR_6, VAR_0, 0xe0f0);
  FUNC_1(VAR_6, VAR_0, &VAR_7);
  FUNC_3(VAR_6, VAR_0, 0x0);
 }
 if (VAR_7)
  VAR_6->io_window = 1;






 if (VAR_6->vendor == VAR_5 && VAR_6->device == 0x0001)
  return;

 FUNC_0(VAR_6, VAR_2, &VAR_8);
 if (!VAR_8) {
  FUNC_2(VAR_6, VAR_2,
            0xffe0fff0);
  FUNC_0(VAR_6, VAR_2, &VAR_8);
  FUNC_2(VAR_6, VAR_2, 0x0);
 }
 if (!VAR_8)
  return;

 VAR_6->pref_window = 1;

 if ((VAR_8 & VAR_4) == VAR_3) {






  FUNC_0(VAR_6, VAR_1, &VAR_8);
  FUNC_2(VAR_6, VAR_1,
           0xffffffff);
  FUNC_0(VAR_6, VAR_1, &VAR_9);
  FUNC_2(VAR_6, VAR_1, VAR_8);
  if (VAR_9)
   VAR_6->pref_64_window = 1;
 }
}
