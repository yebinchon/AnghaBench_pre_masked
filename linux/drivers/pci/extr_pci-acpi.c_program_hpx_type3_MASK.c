
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct hpx_type3 {int dummy; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,struct hpx_type3*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0, struct hpx_type3 *VAR_1)
{
 if (!VAR_1)
  return;

 if (!FUNC_0(VAR_0))
  return;

 FUNC_1(VAR_0, VAR_1);
}
