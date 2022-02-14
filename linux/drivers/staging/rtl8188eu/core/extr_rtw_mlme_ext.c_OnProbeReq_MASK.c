
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint ;
typedef int u8 ;
struct TYPE_5__ {int ssid_length; scalar_t__ ssid; } ;
struct wlan_bssid_ex {TYPE_2__ ssid; } ;
struct recv_frame {TYPE_1__* pkt; } ;
struct TYPE_6__ {scalar_t__ join_res; } ;
struct mlme_priv {TYPE_3__ cur_network; } ;
struct mlme_ext_info {scalar_t__ hidden_ssid_mode; struct wlan_bssid_ex network; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; struct mlme_priv mlmepriv; } ;
struct TYPE_4__ {int len; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ FUNC_0 (struct mlme_priv*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct adapter*,int ) ;
 scalar_t__ FUNC_3 (void*,void*,int ) ;
 unsigned char* FUNC_4 (int *,int ,unsigned int*,int) ;

__attribute__((used)) static unsigned int FUNC_5(struct adapter *VAR_8,
          struct recv_frame *VAR_9)
{
 unsigned int VAR_10;
 unsigned char *VAR_11;
 struct mlme_priv *VAR_12 = &VAR_8->mlmepriv;
 struct mlme_ext_priv *VAR_13 = &VAR_8->mlmeextpriv;
 struct mlme_ext_info *VAR_14 = &VAR_13->mlmext_info;
 struct wlan_bssid_ex *VAR_15 = &VAR_14->network;
 u8 *VAR_16 = VAR_9->pkt->data;
 uint VAR_17 = VAR_9->pkt->len;

 if (FUNC_0(VAR_12, VAR_2))
  return VAR_7;

 if (!FUNC_0(VAR_12, VAR_4) &&
     !FUNC_0(VAR_12, VAR_0|VAR_1))
  return VAR_7;

 VAR_11 = FUNC_4(VAR_16 + VAR_3 + VAR_5, VAR_6, &VAR_10,
   VAR_17 - VAR_3 - VAR_5);


 if (VAR_11) {
  if ((VAR_10 != 0 && FUNC_3((void *)(VAR_11+2), (void *)VAR_15->ssid.ssid, VAR_15->ssid.ssid_length)) ||
      (VAR_10 == 0 && VAR_14->hidden_ssid_mode))
   return VAR_7;

  if (FUNC_0(VAR_12, VAR_4) &&
      VAR_12->cur_network.join_res)
   FUNC_2(VAR_8, FUNC_1(VAR_16));
 }
 return VAR_7;
}
