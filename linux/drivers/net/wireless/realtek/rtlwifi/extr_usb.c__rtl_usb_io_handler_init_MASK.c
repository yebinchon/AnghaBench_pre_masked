
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int writen_sync; int read32_sync; int read16_sync; int read8_sync; int write32_async; int write16_async; int write8_async; int bb_mutex; struct device* dev; } ;
struct rtl_priv {TYPE_1__ io; } ;
struct ieee80211_hw {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_7,
         struct ieee80211_hw *VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_1(VAR_8);

 VAR_9->io.dev = VAR_7;
 FUNC_0(&VAR_9->io.bb_mutex);
 VAR_9->io.write8_async = VAR_5;
 VAR_9->io.write16_async = VAR_3;
 VAR_9->io.write32_async = VAR_4;
 VAR_9->io.read8_sync = VAR_2;
 VAR_9->io.read16_sync = VAR_0;
 VAR_9->io.read32_sync = VAR_1;
 VAR_9->io.writen_sync = VAR_6;
}
