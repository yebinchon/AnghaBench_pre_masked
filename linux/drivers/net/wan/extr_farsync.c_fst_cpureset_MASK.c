
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fst_card_info {scalar_t__ family; scalar_t__ pci_conf; int device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ,unsigned char*) ;
 scalar_t__ FUNC_5 (int ,int ,unsigned char) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static inline void
FUNC_7(struct fst_card_info *VAR_5)
{
 unsigned char VAR_6;
 unsigned int VAR_7;

 if (VAR_5->family == VAR_3) {
  if (FUNC_4
      (VAR_5->device, VAR_4, &VAR_6)) {
   FUNC_0(VAR_2,
       "Error in reading interrupt line register\n");
  }




  FUNC_3(0x440f, VAR_5->pci_conf + VAR_1 + 2);
  FUNC_3(0x040f, VAR_5->pci_conf + VAR_1 + 2);



  FUNC_6(10, 20);
  FUNC_3(0x240f, VAR_5->pci_conf + VAR_1 + 2);



  FUNC_6(10, 20);
  FUNC_3(0x040f, VAR_5->pci_conf + VAR_1 + 2);

  if (FUNC_5
      (VAR_5->device, VAR_4, VAR_6)) {
   FUNC_0(VAR_2,
       "Error in writing interrupt line register\n");
  }

 } else {
  VAR_7 = FUNC_1(VAR_5->pci_conf + VAR_0);

  FUNC_2(VAR_7 | 0x40000000, VAR_5->pci_conf + VAR_0);
  FUNC_2(VAR_7 & ~0x40000000, VAR_5->pci_conf + VAR_0);
 }
}
