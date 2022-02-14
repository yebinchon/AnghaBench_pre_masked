
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int aer_cap; } ;
typedef int pci_ers_result_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,char*) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int ) ;

__attribute__((used)) static pci_ers_result_t FUNC_4(struct pci_dev *VAR_5)
{
 u32 VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_7 = VAR_5->aer_cap;


 FUNC_2(VAR_5, VAR_7 + VAR_0, &VAR_6);
 VAR_6 &= ~VAR_4;
 FUNC_3(VAR_5, VAR_7 + VAR_0, VAR_6);

 VAR_8 = FUNC_0(VAR_5);
 FUNC_1(VAR_5, "Root Port link has been reset\n");


 FUNC_2(VAR_5, VAR_7 + VAR_1, &VAR_6);
 FUNC_3(VAR_5, VAR_7 + VAR_1, VAR_6);


 FUNC_2(VAR_5, VAR_7 + VAR_0, &VAR_6);
 VAR_6 |= VAR_4;
 FUNC_3(VAR_5, VAR_7 + VAR_0, VAR_6);

 return VAR_8 ? VAR_2 : VAR_3;
}
