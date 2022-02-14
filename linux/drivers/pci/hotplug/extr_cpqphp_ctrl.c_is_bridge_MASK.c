
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_func {int* config_space; } ;



__attribute__((used)) static int FUNC_0(struct pci_func *VAR_0)
{

 if (((VAR_0->config_space[0x03] >> 16) & 0xFF) == 0x01)
  return 1;
 else
  return 0;
}
