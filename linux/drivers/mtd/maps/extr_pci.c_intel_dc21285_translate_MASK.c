
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_pci_info {int dummy; } ;



__attribute__((used)) static unsigned long
FUNC_0(struct map_pci_info *VAR_0, unsigned long VAR_1)
{
 return VAR_1 & 0x00ffffc0 ? VAR_1 : (VAR_1 ^ (1 << 5));
}
