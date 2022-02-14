
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ieee80211_key_conf {int dummy; } ;
struct ath10k_vif {scalar_t__ nohwcrypt; struct ath10k* ar; } ;
struct ath10k {int install_key_done; int conf_mutex; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k_vif*,struct ieee80211_key_conf*,int,int const*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned long FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(struct ath10k_vif *VAR_2,
         struct ieee80211_key_conf *VAR_3,
         enum set_key_cmd VAR_4,
         const u8 *VAR_5, u32 VAR_6)
{
 struct ath10k *VAR_7 = VAR_2->ar;
 int VAR_8;
 unsigned long VAR_9;

 FUNC_1(&VAR_7->conf_mutex);

 FUNC_2(&VAR_7->install_key_done);

 if (VAR_2->nohwcrypt)
  return 1;

 VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_9 = FUNC_3(&VAR_7->install_key_done, 3 * VAR_1);
 if (VAR_9 == 0)
  return -VAR_0;

 return 0;
}
