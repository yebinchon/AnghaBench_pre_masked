
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fst_card_info {scalar_t__ family; scalar_t__ pci_conf; int device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void
FUNC_2(struct fst_card_info *VAR_4)
{



 if (VAR_4->family == VAR_3) {
         FUNC_1(VAR_4->device);
  FUNC_0(0x00020441, VAR_4->pci_conf + VAR_0);
  FUNC_0(0x00020441, VAR_4->pci_conf + VAR_1);
  FUNC_0(0x0, VAR_4->pci_conf + VAR_2);
 }
}
