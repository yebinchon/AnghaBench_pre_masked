
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct rtw_dm_info {scalar_t__ min_rssi; int damping; scalar_t__ damping_rssi; int igi_bitmap; scalar_t__ damping_cnt; int * fa_history; scalar_t__* igi_history; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_0(struct rtw_dm_info *VAR_2)
{
 u16 VAR_3 = VAR_1;
 u16 VAR_4 = VAR_0;
 u16 *VAR_5;
 u8 *VAR_6;
 u8 VAR_7;
 u8 VAR_8;
 u8 VAR_9;
 u8 VAR_10;
 bool VAR_11 = 0;

 VAR_8 = VAR_2->min_rssi;
 if (VAR_2->damping) {
  VAR_7 = VAR_2->damping_rssi;
  VAR_9 = VAR_8 > VAR_7 ? VAR_8 - VAR_7 :
       VAR_7 - VAR_8;
  if (VAR_9 > 3 || VAR_2->damping_cnt++ > 20) {
   VAR_2->damping = 0;
   return 0;
  }

  return 1;
 }

 VAR_6 = VAR_2->igi_history;
 VAR_5 = VAR_2->fa_history;
 VAR_10 = VAR_2->igi_bitmap & 0xf;
 switch (VAR_10) {
 case 5:

  if (VAR_6[0] > VAR_6[1] &&
      VAR_6[2] > VAR_6[3] &&
      VAR_6[0] - VAR_6[1] >= 2 &&
      VAR_6[2] - VAR_6[3] >= 2 &&
      VAR_5[0] > VAR_4 && VAR_5[1] < VAR_3 &&
      VAR_5[2] > VAR_4 && VAR_5[3] < VAR_3)
   VAR_11 = 1;
  break;
 case 9:

  if (VAR_6[0] > VAR_6[1] &&
      VAR_6[3] > VAR_6[2] &&
      VAR_6[0] - VAR_6[1] >= 4 &&
      VAR_6[3] - VAR_6[2] >= 2 &&
      VAR_5[0] > VAR_4 && VAR_5[1] < VAR_3 &&
      VAR_5[2] < VAR_3 && VAR_5[3] > VAR_4)
   VAR_11 = 1;
  break;
 default:
  return 0;
 }

 if (VAR_11) {
  VAR_2->damping = 1;
  VAR_2->damping_cnt = 0;
  VAR_2->damping_rssi = VAR_8;
 }

 return VAR_11;
}
