
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_pci_info {scalar_t__ base; } ;


 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static unsigned long
FUNC_1(struct map_pci_info *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2 = VAR_1 & 0x00400000;





 if (VAR_2) {
  FUNC_0(0x00000008, VAR_0->base + 0x1558);
  FUNC_0(0x00000000, VAR_0->base + 0x1550);
 } else {
  FUNC_0(0x00000007, VAR_0->base + 0x1558);
  FUNC_0(0x00800000, VAR_0->base + 0x1550);
  VAR_1 += 0x00800000;
 }

 return VAR_1;
}
