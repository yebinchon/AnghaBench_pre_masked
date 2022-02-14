
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct setopmode_parm {scalar_t__ mode; } ;
struct mlme_ext_info {int state; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct adapter*,int ,int *) ;

u8 FUNC_2(struct adapter *VAR_11, u8 *VAR_12)
{
 u8 VAR_13;
 struct mlme_ext_priv *VAR_14 = &VAR_11->mlmeextpriv;
 struct mlme_ext_info *VAR_15 = &VAR_14->mlmext_info;
 struct setopmode_parm *VAR_16 = (struct setopmode_parm *)VAR_12;

 if (VAR_16->mode == VAR_2) {
  VAR_15->state = VAR_5;
  VAR_13 = VAR_8;
 } else if (VAR_16->mode == VAR_4) {
  VAR_15->state &= ~(FUNC_0(0)|FUNC_0(1));
  VAR_15->state |= VAR_6;
  VAR_13 = VAR_10;
 } else if (VAR_16->mode == VAR_3) {
  VAR_13 = VAR_7;
 } else {
  VAR_13 = VAR_9;
 }

 FUNC_1(VAR_11, VAR_1, (u8 *)(&VAR_13));


 return VAR_0;
}
