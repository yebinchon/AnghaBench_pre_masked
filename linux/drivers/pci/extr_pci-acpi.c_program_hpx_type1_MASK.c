
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct hpx_type1 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,char*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_1, struct hpx_type1 *VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return;

 VAR_3 = FUNC_0(VAR_1, VAR_0);
 if (!VAR_3)
  return;

 FUNC_1(VAR_1, "PCI-X settings not supported\n");
}
