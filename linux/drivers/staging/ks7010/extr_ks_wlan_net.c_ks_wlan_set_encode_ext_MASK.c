
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
union iwreq_data {TYPE_1__ encoding; } ;
struct TYPE_7__ {int * sa_data; } ;
struct wpa_key {int key_len; int ext_flags; int alg; int * rx_mic_key; int * tx_mic_key; int * key_val; TYPE_2__ addr; int * rx_seq; } ;
struct net_device {int dummy; } ;
struct TYPE_10__ {int txkey; int key_mgmt_suite; struct wpa_key* key; } ;
struct TYPE_9__ {int privacy_invoked; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; TYPE_5__ wpa; TYPE_4__ reg; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_8__ {int * sa_data; } ;
struct iw_encode_ext {int ext_flags; int alg; int key_len; int * key; TYPE_3__ addr; int * rx_seq; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned int VAR_10 ;
 scalar_t__ VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct ks_wlan_private*,scalar_t__) ;
 int FUNC_2 (int *,int *,int) ;
 struct ks_wlan_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_15,
      struct iw_request_info *VAR_16,
      union iwreq_data *VAR_17, char *VAR_18)
{
 struct ks_wlan_private *VAR_19 = FUNC_3(VAR_15);
 struct iw_encode_ext *VAR_20;
 int VAR_21 = VAR_17->encoding.flags & VAR_5;
 unsigned int VAR_22 = 0;
 struct wpa_key *VAR_23;

 VAR_20 = (struct iw_encode_ext *)VAR_18;
 if (!VAR_20)
  return -VAR_0;

 if (VAR_19->sleep_mode == VAR_7)
  return -VAR_1;


 if (VAR_21 < 1 || VAR_21 > 4)
  return -VAR_0;
 VAR_21--;
 VAR_23 = &VAR_19->wpa.key[VAR_21];

 if (VAR_17->encoding.flags & VAR_2)
  VAR_23->key_len = 0;

 VAR_23->ext_flags = VAR_20->ext_flags;
 if (VAR_20->ext_flags & VAR_4) {
  VAR_19->wpa.txkey = VAR_21;
  VAR_22 |= VAR_12;
 } else if (VAR_20->ext_flags & VAR_3) {
  FUNC_2(&VAR_23->rx_seq[0], &VAR_20->rx_seq[0], VAR_6);
 }

 FUNC_0(&VAR_23->addr.sa_data[0], &VAR_20->addr.sa_data[0]);

 switch (VAR_20->alg) {
 case 130:
  if (VAR_19->reg.privacy_invoked) {
   VAR_19->reg.privacy_invoked = 0x00;
   VAR_22 |= VAR_10;
  }
  VAR_23->key_len = 0;

  break;
 case 128:
 case 131:
  if (!VAR_19->reg.privacy_invoked) {
   VAR_19->reg.privacy_invoked = 0x01;
   VAR_22 |= VAR_10;
  }
  if (VAR_20->key_len) {
   FUNC_2(&VAR_23->key_val[0], &VAR_20->key[0], VAR_20->key_len);
   VAR_23->key_len = VAR_20->key_len;
   VAR_22 |= (VAR_13 << VAR_21);
  }
  break;
 case 129:
  if (!VAR_19->reg.privacy_invoked) {
   VAR_19->reg.privacy_invoked = 0x01;
   VAR_22 |= VAR_10;
  }
  if (VAR_20->key_len == 32) {
   FUNC_2(&VAR_23->key_val[0], &VAR_20->key[0], VAR_20->key_len - 16);
   VAR_23->key_len = VAR_20->key_len - 16;
   if (VAR_19->wpa.key_mgmt_suite == 4) {
    FUNC_2(&VAR_23->tx_mic_key[0], &VAR_20->key[16], 8);
    FUNC_2(&VAR_23->rx_mic_key[0], &VAR_20->key[16], 8);
   } else {
    FUNC_2(&VAR_23->tx_mic_key[0], &VAR_20->key[16], 8);
    FUNC_2(&VAR_23->rx_mic_key[0], &VAR_20->key[24], 8);
   }
   VAR_22 |= (VAR_13 << VAR_21);
  }
  break;
 default:
  return -VAR_0;
 }
 VAR_23->alg = VAR_20->alg;

 if (VAR_22) {
  if (VAR_22 & VAR_12)
   FUNC_1(VAR_19, VAR_9);
  if (VAR_22 & VAR_14)
   FUNC_1(VAR_19, VAR_8 + VAR_21);
  if (VAR_22 & VAR_10)
   FUNC_1(VAR_19, VAR_11);
 }

 return 0;
}
