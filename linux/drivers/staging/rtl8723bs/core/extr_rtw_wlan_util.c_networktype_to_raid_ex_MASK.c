
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sta_info {int wireless_mode; int ra_mask; int bw_mode; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (struct adapter*,int ,scalar_t__*) ;

u8 FUNC_3(struct adapter *VAR_13, struct sta_info *VAR_14)
{
 u8 VAR_15, VAR_16, VAR_17 = VAR_11;

 FUNC_2(VAR_13, VAR_1, (u8 *)(&VAR_16));

 if (VAR_16 == VAR_11) {
  VAR_17 = VAR_11;
 } else if (FUNC_1(VAR_14->wireless_mode)) {
  if (VAR_14->ra_mask & 0xffc00000)
   VAR_17 = VAR_12;
 } else if (FUNC_0(VAR_14->wireless_mode)) {
  if (VAR_14->ra_mask & 0xfff00000)
   VAR_17 = VAR_12;
 }

 switch (VAR_14->wireless_mode) {
 case 135:
  VAR_15 = VAR_2;
  break;
 case 137:
 case 131:
  VAR_15 = VAR_8;
  break;
 case 134:
  VAR_15 = VAR_3;
  break;
 case 129:
 case 128:
 case 136:
 case 130:
  if (VAR_17 == VAR_12)
   VAR_15 = VAR_10;
  else
   VAR_15 = VAR_9;
  break;
 case 132:
 case 133:
  if (VAR_14->bw_mode == VAR_0) {
   if (VAR_17 == VAR_12)
    VAR_15 = VAR_5;
   else
    VAR_15 = VAR_4;
  } else {
   if (VAR_17 == VAR_12)
    VAR_15 = VAR_7;
   else
    VAR_15 = VAR_6;
  }
  break;
 default:
  VAR_15 = VAR_7;
  break;
 }
 return VAR_15;
}
