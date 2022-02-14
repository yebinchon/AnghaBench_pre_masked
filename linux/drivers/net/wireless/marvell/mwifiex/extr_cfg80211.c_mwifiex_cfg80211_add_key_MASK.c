
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct mwifiex_wep_key {int key_index; int key_length; int key_material; } ;
struct TYPE_2__ {int wep_enabled; } ;
struct mwifiex_private {int adapter; TYPE_1__ sec_info; struct mwifiex_wep_key* wep_key; } ;
struct key_params {scalar_t__ cipher; int key_len; int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mwifiex_private*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct mwifiex_wep_key*,int ,int) ;
 int FUNC_3 (int ,int ,char*) ;
 struct mwifiex_private* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct mwifiex_private*,struct key_params*,int ,int ,int,int const*,int ) ;

__attribute__((used)) static int
FUNC_6(struct wiphy *VAR_5, struct net_device *VAR_6,
    u8 VAR_7, bool VAR_8, const u8 *VAR_9,
    struct key_params *VAR_10)
{
 struct mwifiex_private *VAR_11 = FUNC_4(VAR_6);
 struct mwifiex_wep_key *VAR_12;
 static const u8 VAR_13[] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
 const u8 *VAR_14 = VAR_8 ? VAR_9 : VAR_13;

 if (FUNC_0(VAR_11) == VAR_2 &&
     (VAR_10->cipher == VAR_4 ||
      VAR_10->cipher == VAR_3)) {
  if (VAR_10->key && VAR_10->key_len) {
   VAR_12 = &VAR_11->wep_key[VAR_7];
   FUNC_2(VAR_12, 0, sizeof(struct mwifiex_wep_key));
   FUNC_1(VAR_12->key_material, VAR_10->key,
          VAR_10->key_len);
   VAR_12->key_index = VAR_7;
   VAR_12->key_length = VAR_10->key_len;
   VAR_11->sec_info.wep_enabled = 1;
  }
  return 0;
 }

 if (FUNC_5(VAR_11, VAR_10, VAR_10->key, VAR_10->key_len,
          VAR_7, VAR_14, 0)) {
  FUNC_3(VAR_11->adapter, VAR_1, "crypto keys added\n");
  return -VAR_0;
 }

 return 0;
}
