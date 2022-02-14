
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*,char*,char const*,unsigned int,unsigned int) ;
 int FUNC_1 (struct pci_dev*,unsigned int,unsigned int*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0, const char *VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 u32 VAR_4;
 u32 VAR_5, VAR_6, VAR_7;

 FUNC_1(VAR_0, VAR_2, &VAR_4);
 if ((VAR_4 & VAR_3) != VAR_3)
  return;
 VAR_7 = VAR_4 & 0xffff0000;
 VAR_5 = (VAR_4 & 0x3f) << 16;
 VAR_6 = 128 << 16;
 for (;;) {
  unsigned VAR_8 = VAR_6 >> 1;
  if ((VAR_8 & VAR_5) == VAR_8)
   break;
  VAR_6 = VAR_8;
 }





 VAR_7 &= -VAR_6;
 FUNC_0(VAR_0, "%s MMIO at %04x-%04x\n", VAR_1, VAR_7, VAR_7 + VAR_6 - 1);
}
