
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct mlme_ext_info {scalar_t__ preamble_mode; scalar_t__ slotTime; } ;
struct mlme_ext_priv {int cur_wireless_mode; struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct adapter*,int ,scalar_t__*) ;

void FUNC_1(struct adapter *VAR_13, u16 VAR_14)
{
 struct mlme_ext_priv *VAR_15 = &VAR_13->mlmeextpriv;
 struct mlme_ext_info *VAR_16 = &VAR_15->mlmext_info;
 bool VAR_17;




 if (VAR_14 & VAR_11) {
  if (VAR_16->preamble_mode != VAR_4) {
   VAR_17 = 1;
   VAR_16->preamble_mode = VAR_4;
   FUNC_0(VAR_13, VAR_0, (u8 *)&VAR_17);
  }
 } else {
  if (VAR_16->preamble_mode != VAR_3) {
   VAR_17 = 0;
   VAR_16->preamble_mode = VAR_3;
   FUNC_0(VAR_13, VAR_0, (u8 *)&VAR_17);
  }
 }

 if (VAR_14 & VAR_10) {

  VAR_16->slotTime = VAR_2;
 } else {
  if (VAR_15->cur_wireless_mode & (VAR_7 | VAR_8)) {
   if (VAR_14 & VAR_12) {
    if (VAR_16->slotTime != VAR_5)
     VAR_16->slotTime = VAR_5;
   } else {
    if (VAR_16->slotTime != VAR_2)
     VAR_16->slotTime = VAR_2;
   }
  } else if (VAR_15->cur_wireless_mode & (VAR_6 | VAR_9)) {
   VAR_16->slotTime = VAR_5;
  } else {

   VAR_16->slotTime = VAR_2;
  }
 }

 FUNC_0(VAR_13, VAR_1, &VAR_16->slotTime);
}
