
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sta_priv {int dummy; } ;
struct sta_info {int mac_id; } ;
struct set_stakey_parm {int algorithm; int key; int addr; int id; } ;
struct mlme_ext_info {int state; int enc_algo; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {struct sta_priv stapriv; struct mlme_ext_priv mlmeextpriv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct adapter*,int ) ;
 struct sta_info* FUNC_4 (struct sta_priv*,int ) ;
 int FUNC_5 (struct adapter*,int,int,int ,int ) ;

u8 FUNC_6(struct adapter *VAR_7, u8 *VAR_8)
{
 u16 VAR_9 = 0;
 u8 VAR_10;
 struct mlme_ext_priv *VAR_11 = &VAR_7->mlmeextpriv;
 struct mlme_ext_info *VAR_12 = &VAR_11->mlmext_info;
 struct set_stakey_parm *VAR_13 = (struct set_stakey_parm *)VAR_8;
 VAR_10 = 4;

 FUNC_2(VAR_6, "set pairwise key to hw: alg:%d(WEP40-1 WEP104-5 TKIP-2 AES-4) camid:%d\n",
        VAR_13->algorithm, VAR_10);
 if ((VAR_12->state & 0x03) == VAR_4) {
  struct sta_info *VAR_14;
  struct sta_priv *VAR_15 = &VAR_7->stapriv;

  if (VAR_13->algorithm == VAR_5) {
   FUNC_3(VAR_7, VAR_13->id);
   return VAR_2;
  }

  VAR_14 = FUNC_4(VAR_15, VAR_13->addr);
  if (VAR_14) {
   VAR_9 = FUNC_0(15) | ((VAR_13->algorithm) << 2);

   FUNC_1("r871x_set_stakey_hdl(): enc_algorithm=%d\n", VAR_13->algorithm);

   if ((VAR_14->mac_id < 1) || (VAR_14->mac_id > (VAR_3-4))) {
    FUNC_1("r871x_set_stakey_hdl():set_stakey failed, mac_id(aid)=%d\n", VAR_14->mac_id);
    return VAR_0;
   }

   VAR_10 = VAR_14->mac_id + 3;

   FUNC_1("Write CAM, mac_addr =%pM, cam_entry=%d\n",
    VAR_13->addr, VAR_10);

   FUNC_5(VAR_7, VAR_10, VAR_9, VAR_13->addr, VAR_13->key);

   return VAR_2;
  } else {
   FUNC_1("r871x_set_stakey_hdl(): sta has been free\n");
   return VAR_0;
  }
 }



 if (VAR_13->algorithm == VAR_5) {
  FUNC_3(VAR_7, VAR_13->id);
  return VAR_1;
 }
 VAR_9 = FUNC_0(15) | ((VAR_13->algorithm) << 2);
 FUNC_5(VAR_7, VAR_10, VAR_9, VAR_13->addr, VAR_13->key);
 VAR_12->enc_algo = VAR_13->algorithm;
 return VAR_1;
}
