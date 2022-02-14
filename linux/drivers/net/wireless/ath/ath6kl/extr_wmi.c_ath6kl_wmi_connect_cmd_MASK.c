
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
typedef int u16 ;
struct wmi_connect_cmd {int ssid_len; int nw_type; int dot11_auth_mode; int auth_mode; int prwise_crypto_type; int grp_crypto_type; int bssid; void* nw_subtype; int ctrl_flags; int ch; void* grp_crypto_len; void* prwise_crypto_len; int ssid; } ;
struct wmi {int traffic_class; } ;
struct sk_buff {scalar_t__ data; } ;
typedef enum network_type { ____Placeholder_network_type } network_type ;
typedef enum dot11_auth_mode { ____Placeholder_dot11_auth_mode } dot11_auth_mode ;
typedef enum auth_mode { ____Placeholder_auth_mode } auth_mode ;
typedef enum ath6kl_crypto_type { ____Placeholder_ath6kl_crypto_type } ath6kl_crypto_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,void**,int ,int ,int,int,int,int,int,int) ;
 int FUNC_1 (int ,int *,char*,void**,int) ;
 int FUNC_2 (struct wmi*,void*,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,void**,int) ;

int FUNC_7(struct wmi *VAR_7, u8 VAR_8,
      enum network_type VAR_9,
      enum dot11_auth_mode VAR_10,
      enum auth_mode VAR_11,
      enum ath6kl_crypto_type VAR_12,
      u8 VAR_13,
      enum ath6kl_crypto_type VAR_14,
      u8 VAR_15, int VAR_16, u8 *VAR_17,
      u8 *VAR_18, u16 VAR_19, u32 VAR_20,
      u8 VAR_21)
{
 struct sk_buff *VAR_22;
 struct wmi_connect_cmd *VAR_23;
 int VAR_24;

 FUNC_0(VAR_0,
     "wmi connect bssid %pM freq %d flags 0x%x ssid_len %d "
     "type %d dot11_auth %d auth %d pairwise %d group %d\n",
     VAR_18, VAR_19, VAR_20, VAR_16, VAR_9,
     VAR_10, VAR_11, VAR_12, VAR_14);
 FUNC_1(VAR_0, ((void*)0), "ssid ", VAR_17, VAR_16);

 VAR_7->traffic_class = 100;

 if ((VAR_12 == VAR_4) && (VAR_14 != VAR_4))
  return -VAR_1;

 if ((VAR_12 != VAR_4) && (VAR_14 == VAR_4))
  return -VAR_1;

 VAR_22 = FUNC_3(sizeof(struct wmi_connect_cmd));
 if (!VAR_22)
  return -VAR_2;

 VAR_23 = (struct wmi_connect_cmd *) VAR_22->data;

 if (VAR_16)
  FUNC_6(VAR_23->ssid, VAR_17, VAR_16);

 VAR_23->ssid_len = VAR_16;
 VAR_23->nw_type = VAR_9;
 VAR_23->dot11_auth_mode = VAR_10;
 VAR_23->auth_mode = VAR_11;
 VAR_23->prwise_crypto_type = VAR_12;
 VAR_23->prwise_crypto_len = VAR_13;
 VAR_23->grp_crypto_type = VAR_14;
 VAR_23->grp_crypto_len = VAR_15;
 VAR_23->ch = FUNC_4(VAR_19);
 VAR_23->ctrl_flags = FUNC_5(VAR_20);
 VAR_23->nw_subtype = VAR_21;

 if (VAR_18 != ((void*)0))
  FUNC_6(VAR_23->bssid, VAR_18, VAR_3);

 VAR_24 = FUNC_2(VAR_7, VAR_8, VAR_22, VAR_6,
      VAR_5);

 return VAR_24;
}
