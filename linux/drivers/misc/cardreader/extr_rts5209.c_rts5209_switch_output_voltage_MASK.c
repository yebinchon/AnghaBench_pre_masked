
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtsx_pcr {int sd30_drive_sel_1v8; int sd30_drive_sel_3v3; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtsx_pcr*,int,int) ;
 int FUNC_1 (struct rtsx_pcr*,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct rtsx_pcr *VAR_4, u8 VAR_5)
{
 int VAR_6;

 if (VAR_5 == VAR_2) {
  VAR_6 = FUNC_1(VAR_4,
    VAR_3, 0x07, VAR_4->sd30_drive_sel_3v3);
  if (VAR_6 < 0)
   return VAR_6;
  VAR_6 = FUNC_0(VAR_4, 0x08, 0x4FC0 | 0x24);
  if (VAR_6 < 0)
   return VAR_6;
 } else if (VAR_5 == VAR_1) {
  VAR_6 = FUNC_1(VAR_4,
    VAR_3, 0x07, VAR_4->sd30_drive_sel_1v8);
  if (VAR_6 < 0)
   return VAR_6;
  VAR_6 = FUNC_0(VAR_4, 0x08, 0x4C40 | 0x24);
  if (VAR_6 < 0)
   return VAR_6;
 } else {
  return -VAR_0;
 }

 return 0;
}
