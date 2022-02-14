
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (struct pci_dev*,int ,int,scalar_t__,char*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_7)
{
 u8 VAR_8;

 FUNC_0(VAR_7, VAR_4, &VAR_8);
 if (VAR_8 & VAR_0)
  FUNC_1(VAR_7, VAR_5, 128, VAR_6,
     "ICH6 ACPI/GPIO/TCO");

 FUNC_0(VAR_7, VAR_2, &VAR_8);
 if (VAR_8 & VAR_3)
  FUNC_1(VAR_7, VAR_1, 64, VAR_6+1,
    "ICH6 GPIO");
}
