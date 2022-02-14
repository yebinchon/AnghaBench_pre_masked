
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct cobalt {int * bar1; int * bar0; } ;


 int FUNC_0 (struct pci_dev*,int *) ;

__attribute__((used)) static void FUNC_1(struct cobalt *VAR_0, struct pci_dev *VAR_1)
{
 if (VAR_0->bar0) {
  FUNC_0(VAR_1, VAR_0->bar0);
  VAR_0->bar0 = ((void*)0);
 }
 if (VAR_0->bar1) {
  FUNC_0(VAR_1, VAR_0->bar1);
  VAR_0->bar1 = ((void*)0);
 }
}
