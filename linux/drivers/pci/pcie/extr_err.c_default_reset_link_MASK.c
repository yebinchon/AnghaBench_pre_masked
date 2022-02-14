
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (int ,struct pci_dev*,char*) ;

__attribute__((used)) static pci_ers_result_t FUNC_2(struct pci_dev *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 FUNC_1(VAR_0, VAR_3, "downstream link has been reset\n");
 return VAR_4 ? VAR_1 : VAR_2;
}
