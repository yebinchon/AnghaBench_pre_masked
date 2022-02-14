
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtsx_pcr {scalar_t__ sd30_drive_sel_3v3; scalar_t__ sd30_drive_sel_1v8; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtsx_pcr*,int ,int ,int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct rtsx_pcr *VAR_5, u8 VAR_6)
{
 u8 VAR_7[4][3] = {
  {0x11, 0x11, 0x18},
  {0x55, 0x55, 0x5C},
  {0xFF, 0xFF, 0xFF},
  {0x96, 0x96, 0x96},
 };
 u8 VAR_8[4][3] = {
  {0xC4, 0xC4, 0xC4},
  {0x3C, 0x3C, 0x3C},
  {0xFE, 0xFE, 0xFE},
  {0xB3, 0xB3, 0xB3},
 };
 u8 (*VAR_9)[3], VAR_10;

 if (VAR_6 == VAR_0) {
  VAR_9 = VAR_7;
  VAR_10 = VAR_5->sd30_drive_sel_3v3;
 } else {
  VAR_9 = VAR_8;
  VAR_10 = VAR_5->sd30_drive_sel_1v8;
 }

 FUNC_0(VAR_5, VAR_4, VAR_1,
   0xFF, VAR_9[VAR_10][0]);
 FUNC_0(VAR_5, VAR_4, VAR_2,
   0xFF, VAR_9[VAR_10][1]);
 FUNC_0(VAR_5, VAR_4, VAR_3,
   0xFF, VAR_9[VAR_10][2]);
}
