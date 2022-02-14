
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtsx_pcr {scalar_t__ sd30_drive_sel_3v3; scalar_t__ sd30_drive_sel_1v8; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct rtsx_pcr*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct rtsx_pcr *VAR_10, u8 VAR_11,
  int VAR_12, int VAR_13)
{
 u8 VAR_14, VAR_15;
 int VAR_16;

 VAR_14 = (VAR_4 << VAR_12) | VAR_3;
 if (VAR_11 == VAR_8) {
  VAR_16 = FUNC_0(VAR_10,
    VAR_9, 0x07, VAR_10->sd30_drive_sel_3v3);
  if (VAR_16 < 0)
   return VAR_16;
  VAR_15 = (VAR_0 << VAR_12) | VAR_2;
 } else if (VAR_11 == VAR_7) {
  VAR_16 = FUNC_0(VAR_10,
    VAR_9, 0x07, VAR_10->sd30_drive_sel_1v8);
  if (VAR_16 < 0)
   return VAR_16;
  VAR_15 = (VAR_13 << VAR_12) | VAR_1;
 } else {
  return -VAR_5;
 }

 return FUNC_0(VAR_10, VAR_6, VAR_14, VAR_15);
}
