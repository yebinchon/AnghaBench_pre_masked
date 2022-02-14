
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct bt878 {int dev; } ;


 struct bt878* VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct pci_dev*) ;

__attribute__((used)) static struct bt878 *FUNC_1(unsigned int VAR_2,
      struct pci_dev* VAR_3)
{
 unsigned int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if (FUNC_0(VAR_0[VAR_4].dev, VAR_3))
   return &VAR_0[VAR_4];
 return ((void*)0);
}
