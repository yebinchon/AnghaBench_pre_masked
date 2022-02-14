
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mantis_pci {struct mantis_hwconfig* hwconfig; } ;
struct mantis_hwconfig {int bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*,...) ;
 int FUNC_1 (struct mantis_pci*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mantis_pci *VAR_3)
{
 struct mantis_hwconfig *VAR_4 = VAR_3->hwconfig;
 int VAR_5, VAR_6 = 0, VAR_7 = 0;


 FUNC_0(VAR_0, 1, "UART Reading ...");
 for (VAR_5 = 0; VAR_5 < (VAR_4->bytes + 1); VAR_5++) {
  int VAR_8 = FUNC_2(VAR_2);

  FUNC_0(VAR_0, 0, " <%02x>", VAR_8);

  VAR_6 = (VAR_6 << 8) | (VAR_8 & 0x3f);
  VAR_7 |= VAR_8;

  if (VAR_8 & (1 << 7))
   FUNC_0(VAR_1, 1, "UART framing error");

  if (VAR_8 & (1 << 6))
   FUNC_0(VAR_1, 1, "UART parity error");
 }
 FUNC_0(VAR_0, 0, "\n");

 if ((VAR_7 & 0xC0) == 0)
  FUNC_1(VAR_3, VAR_6);
}
