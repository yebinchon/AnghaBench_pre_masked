
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int revision; } ;
struct hnae3_ae_dev {int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_2,
        struct hnae3_ae_dev *VAR_3)
{
 if (VAR_2->revision >= 0x21) {
  FUNC_0(VAR_3->flag, VAR_0, 1);
  FUNC_0(VAR_3->flag, VAR_1, 1);
 }
}
