
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfg80211_wowlan {int dummy; } ;
struct ath6kl {TYPE_1__* hif_ops; } ;
struct TYPE_2__ {int (* suspend ) (struct ath6kl*,struct cfg80211_wowlan*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ath6kl*,struct cfg80211_wowlan*) ;

__attribute__((used)) static inline int FUNC_2(struct ath6kl *VAR_1,
         struct cfg80211_wowlan *VAR_2)
{
 FUNC_0(VAR_0, "hif suspend\n");

 return VAR_1->hif_ops->suspend(VAR_1, VAR_2);
}
