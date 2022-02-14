
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u16 ;
struct mlme_ext_info {scalar_t__ preamble_mode; void* slotTime; } ;
struct mlme_ext_priv {int cur_wireless_mode; struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct adapter*,int ,void**) ;

void FUNC_1(struct adapter *VAR_14, u16 VAR_15)
{
 struct mlme_ext_priv *VAR_16 = &VAR_14->mlmeextpriv;
 struct mlme_ext_info *VAR_17 = &(VAR_16->mlmext_info);
 bool VAR_18;




 {
  if (VAR_15 & VAR_12) {

   if (VAR_17->preamble_mode != VAR_4) {
    VAR_18 = 1;
    VAR_17->preamble_mode = VAR_4;
    FUNC_0(VAR_14, VAR_0, (u8 *)&VAR_18);
   }
  } else {

   if (VAR_17->preamble_mode != VAR_3) {
    VAR_18 = 0;
    VAR_17->preamble_mode = VAR_3;
    FUNC_0(VAR_14, VAR_0, (u8 *)&VAR_18);
   }
  }
 }

 if (VAR_15 & VAR_11)

  VAR_17->slotTime = VAR_2;
 else {

  if (VAR_16->cur_wireless_mode & (VAR_9 | VAR_6 | VAR_10 | VAR_7))
   VAR_17->slotTime = VAR_5;
  else if (VAR_16->cur_wireless_mode & (VAR_8)) {
   if ((VAR_15 & VAR_13) )

    VAR_17->slotTime = VAR_5;
   else

    VAR_17->slotTime = VAR_2;
  } else

   VAR_17->slotTime = VAR_2;
 }

 FUNC_0(VAR_14, VAR_1, &VAR_17->slotTime);
}
