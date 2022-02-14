
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cobalt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct cobalt *VAR_3)
{
 u32 VAR_4 = FUNC_3(VAR_0);
 u32 VAR_5 = FUNC_3(VAR_1);
 u32 VAR_6;

 FUNC_1("Omnitek DMA capability: ID 0x%02x Version 0x%02x Next 0x%x Size 0x%x\n",
      VAR_4 & 0xff, (VAR_4 >> 8) & 0xff,
      (VAR_4 >> 16) & 0xffff, (VAR_5 >> 24) & 0xff);

 switch ((VAR_5 >> 8) & 0x3) {
 case 0:
  FUNC_1("Omnitek DMA: 32 bits PCIe and Local\n");
  break;
 case 1:
  FUNC_1("Omnitek DMA: 64 bits PCIe, 32 bits Local\n");
  break;
 case 3:
  FUNC_1("Omnitek DMA: 64 bits PCIe and Local\n");
  break;
 }

 for (VAR_6 = 0; VAR_6 < (VAR_5 & 0xf); VAR_6++) {
  u32 VAR_7 = FUNC_3(FUNC_0(VAR_6));

  FUNC_1("Omnitek DMA channel #%d: %s %s\n", VAR_6,
       VAR_7 & VAR_2 ? "FIFO" : "MEMORY",
       FUNC_2(VAR_7));
 }
}
