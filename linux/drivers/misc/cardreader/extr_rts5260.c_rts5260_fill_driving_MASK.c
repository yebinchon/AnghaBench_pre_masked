
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtsx_pcr {scalar_t__ sd30_drive_sel_3v3; scalar_t__ sd30_drive_sel_1v8; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtsx_pcr*,int ,int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct rtsx_pcr *VAR_3, u8 VAR_4)
{
 u8 VAR_5[6][3] = {
  {0x94, 0x94, 0x94},
  {0x11, 0x11, 0x18},
  {0x55, 0x55, 0x5C},
  {0x94, 0x94, 0x94},
  {0x94, 0x94, 0x94},
  {0xFF, 0xFF, 0xFF},
 };
 u8 VAR_6[6][3] = {
  {0x9A, 0x89, 0x89},
  {0xC4, 0xC4, 0xC4},
  {0x3C, 0x3C, 0x3C},
  {0x9B, 0x99, 0x99},
  {0x9A, 0x89, 0x89},
  {0xFE, 0xFE, 0xFE},
 };
 u8 (*VAR_7)[3], VAR_8;

 if (VAR_4 == VAR_0) {
  VAR_7 = VAR_5;
  VAR_8 = VAR_3->sd30_drive_sel_3v3;
 } else {
  VAR_7 = VAR_6;
  VAR_8 = VAR_3->sd30_drive_sel_1v8;
 }

 FUNC_0(VAR_3, VAR_1,
    0xFF, VAR_7[VAR_8][0]);

 FUNC_0(VAR_3, VAR_2,
    0xFF, VAR_7[VAR_8][1]);

 FUNC_0(VAR_3, VAR_2,
    0xFF, VAR_7[VAR_8][2]);
}
