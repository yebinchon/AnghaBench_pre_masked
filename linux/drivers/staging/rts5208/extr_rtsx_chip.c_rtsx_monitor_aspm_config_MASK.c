
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct rtsx_chip {int* aspm_level; int aspm_l0s_l1_en; int aspm_enabled; scalar_t__ sdio_aspm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtsx_chip*) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*,int,int,scalar_t__*) ;
 int FUNC_5 (struct rtsx_chip*,int ,int*) ;
 int FUNC_6 (struct rtsx_chip*,int ,int,int) ;

__attribute__((used)) static void FUNC_7(struct rtsx_chip *VAR_2)
{
 bool VAR_3, VAR_4;
 u32 VAR_5 = 0;
 u8 VAR_6 = 0, VAR_7 = 0;

 VAR_4 = 0;
 VAR_3 = 0;
 FUNC_5(VAR_2, VAR_1, &VAR_6);
 if (VAR_2->aspm_level[0] != VAR_6) {
  VAR_3 = 1;
  VAR_2->aspm_level[0] = VAR_6;
 }
 if (FUNC_0(VAR_2) && !FUNC_1(VAR_2)) {
  FUNC_4(VAR_2, 1, 0xC0, &VAR_5);
  VAR_7 = (u8)VAR_5;
  if (VAR_2->aspm_level[1] != VAR_7) {
   VAR_3 = 1;
   VAR_2->aspm_level[1] = VAR_7;
  }

  if ((VAR_6 & 0x03) && (VAR_7 & 0x03))
   VAR_4 = 1;

 } else {
  if (VAR_6 & 0x03)
   VAR_4 = 1;
 }

 if (VAR_3) {
  if (VAR_4)
   VAR_2->aspm_l0s_l1_en = 0x03;

  FUNC_2(FUNC_3(VAR_2), "aspm_level[0] = 0x%02x, aspm_level[1] = 0x%02x\n",
   VAR_2->aspm_level[0], VAR_2->aspm_level[1]);

  if (VAR_2->aspm_l0s_l1_en) {
   VAR_2->aspm_enabled = 1;
  } else {
   VAR_2->aspm_enabled = 0;
   VAR_2->sdio_aspm = 0;
  }
  FUNC_6(VAR_2, VAR_0, 0xFF,
        0x30 | VAR_2->aspm_level[0] |
        (VAR_2->aspm_level[1] << 2));
 }
}
