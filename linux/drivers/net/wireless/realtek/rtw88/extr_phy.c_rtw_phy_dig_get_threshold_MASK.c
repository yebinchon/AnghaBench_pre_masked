
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct rtw_dm_info {scalar_t__ min_rssi; scalar_t__ pre_min_rssi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct rtw_dm_info *VAR_6,
          u16 *VAR_7, u8 *VAR_8, bool VAR_9)
{
 u8 VAR_10, VAR_11;

 VAR_10 = VAR_6->min_rssi;
 VAR_11 = VAR_6->pre_min_rssi;
 VAR_8[0] = 4;
 VAR_8[1] = 3;
 VAR_8[2] = 2;

 if (VAR_9) {
  VAR_7[0] = VAR_3;
  VAR_7[1] = VAR_4;
  VAR_7[2] = VAR_5;
  if (VAR_11 > VAR_10) {
   VAR_8[0] = 6;
   VAR_8[1] = 4;
   VAR_8[2] = 2;
  }
 } else {
  VAR_7[0] = VAR_0;
  VAR_7[1] = VAR_1;
  VAR_7[2] = VAR_2;
 }
}
