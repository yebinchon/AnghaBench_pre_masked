
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct vif_params {int dummy; } ;
struct ath6kl {scalar_t__ num_vif; scalar_t__ vif_max; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int VAR_0 ;
 int VAR_1 ;
 struct wireless_dev* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 struct wireless_dev* FUNC_2 (struct ath6kl*,char const*,unsigned char,int,int ,int ) ;
 int FUNC_3 (struct ath6kl*,int,int *,int *) ;
 struct ath6kl* FUNC_4 (struct wiphy*) ;

__attribute__((used)) static struct wireless_dev *FUNC_5(struct wiphy *VAR_2,
            const char *VAR_3,
            unsigned char VAR_4,
            enum nl80211_iftype VAR_5,
            struct vif_params *VAR_6)
{
 struct ath6kl *VAR_7 = FUNC_4(VAR_2);
 struct wireless_dev *VAR_8;
 u8 VAR_9, VAR_10;

 if (VAR_7->num_vif == VAR_7->vif_max) {
  FUNC_1("Reached maximum number of supported vif\n");
  return FUNC_0(-VAR_0);
 }

 if (!FUNC_3(VAR_7, VAR_5, &VAR_9, &VAR_10)) {
  FUNC_1("Not a supported interface type\n");
  return FUNC_0(-VAR_0);
 }

 VAR_8 = FUNC_2(VAR_7, VAR_3, VAR_4, VAR_5, VAR_9, VAR_10);
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 VAR_7->num_vif++;

 return VAR_8;
}
