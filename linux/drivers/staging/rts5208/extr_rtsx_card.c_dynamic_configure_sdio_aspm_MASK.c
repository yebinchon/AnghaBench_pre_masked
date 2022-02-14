
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_chip {scalar_t__ sdio_counter; int sdio_idle; int sdio_aspm; int* aspm_level; int sdio_raw_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int ,int*,int) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*,int,int*) ;
 int FUNC_5 (struct rtsx_chip*,int ,int,int) ;

void FUNC_6(struct rtsx_chip *VAR_2)
{
 u8 VAR_3[12], VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 12; VAR_5++)
  FUNC_4(VAR_2, 0xFF08 + VAR_5, &VAR_3[VAR_5]);
 FUNC_4(VAR_2, 0xFF25, &VAR_4);
 if ((FUNC_1(VAR_3, VAR_2->sdio_raw_data, 12) != 0) || (VAR_4 & 0x03)) {
  VAR_2->sdio_counter = 0;
  VAR_2->sdio_idle = 0;
 } else {
  if (!VAR_2->sdio_idle) {
   VAR_2->sdio_counter++;
   if (VAR_2->sdio_counter >= VAR_1) {
    VAR_2->sdio_counter = 0;
    VAR_2->sdio_idle = 1;
   }
  }
 }
 FUNC_2(VAR_2->sdio_raw_data, VAR_3, 12);

 if (VAR_2->sdio_idle) {
  if (!VAR_2->sdio_aspm) {
   FUNC_0(FUNC_3(VAR_2), "SDIO enter ASPM!\n");
   FUNC_5(VAR_2, VAR_0, 0xFC,
         0x30 | (VAR_2->aspm_level[1] << 2));
   VAR_2->sdio_aspm = 1;
  }
 } else {
  if (VAR_2->sdio_aspm) {
   FUNC_0(FUNC_3(VAR_2), "SDIO exit ASPM!\n");
   FUNC_5(VAR_2, VAR_0, 0xFC, 0x30);
   VAR_2->sdio_aspm = 0;
  }
 }
}
