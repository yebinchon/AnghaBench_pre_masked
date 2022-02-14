
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdio_func {TYPE_2__* card; } ;
struct cfg80211_wowlan {int dummy; } ;
struct ath6kl_sdio {struct sdio_func* func; } ;
struct ath6kl {scalar_t__ suspend_mode; scalar_t__ wow_suspend_mode; } ;
typedef int mmc_pm_flag_t ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {int pm_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct ath6kl*,int ,struct cfg80211_wowlan*) ;
 int FUNC_1 (char*,int) ;
 struct ath6kl_sdio* FUNC_2 (struct ath6kl*) ;
 int FUNC_3 (struct ath6kl*) ;
 int FUNC_4 (struct sdio_func*) ;
 int FUNC_5 (struct sdio_func*,int) ;

__attribute__((used)) static int FUNC_6(struct ath6kl *VAR_9, struct cfg80211_wowlan *VAR_10)
{
 struct ath6kl_sdio *VAR_11 = FUNC_2(VAR_9);
 struct sdio_func *VAR_12 = VAR_11->func;
 mmc_pm_flag_t VAR_13;
 bool VAR_14 = 0;
 int VAR_15;

 if (VAR_9->suspend_mode == VAR_8 ||
     (!VAR_9->suspend_mode && VAR_10)) {
  VAR_15 = FUNC_3(VAR_9);
  if (VAR_15)
   goto cut_pwr;

  VAR_15 = FUNC_0(VAR_9, VAR_2, VAR_10);
  if (VAR_15 && VAR_15 != -VAR_3)
   FUNC_1("wow suspend failed: %d\n", VAR_15);

  if (VAR_15 &&
      (!VAR_9->wow_suspend_mode ||
       VAR_9->wow_suspend_mode == VAR_7))
   VAR_14 = 1;
  else if (VAR_15 &&
    VAR_9->wow_suspend_mode == VAR_6)
   goto cut_pwr;
  if (!VAR_15)
   return 0;
 }

 if (VAR_9->suspend_mode == VAR_7 ||
     !VAR_9->suspend_mode || VAR_14) {
  VAR_13 = FUNC_4(VAR_12);
  if (!(VAR_13 & VAR_4))
   goto cut_pwr;

  VAR_15 = FUNC_5(VAR_12, VAR_4);
  if (VAR_15)
   goto cut_pwr;







  if ((VAR_13 & VAR_5)) {
   VAR_15 = FUNC_5(VAR_12,
      VAR_5);
   if (VAR_15)
    goto cut_pwr;
  }

  VAR_15 = FUNC_0(VAR_9, VAR_1,
           ((void*)0));
  if (VAR_15)
   goto cut_pwr;

  return 0;
 }

cut_pwr:
 if (VAR_12->card && VAR_12->card->host)
  VAR_12->card->host->pm_flags &= ~VAR_4;

 return FUNC_0(VAR_9, VAR_0, ((void*)0));
}
