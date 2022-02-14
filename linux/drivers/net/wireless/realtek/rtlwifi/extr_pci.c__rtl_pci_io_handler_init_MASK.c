
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int read32_sync; int read16_sync; int read8_sync; int write32_async; int write16_async; int write8_async; struct device* dev; } ;
struct rtl_priv {TYPE_1__ io; } ;
struct ieee80211_hw {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_6,
         struct ieee80211_hw *VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_0(VAR_7);

 VAR_8->io.dev = VAR_6;

 VAR_8->io.write8_async = VAR_5;
 VAR_8->io.write16_async = VAR_3;
 VAR_8->io.write32_async = VAR_4;

 VAR_8->io.read8_sync = VAR_2;
 VAR_8->io.read16_sync = VAR_0;
 VAR_8->io.read32_sync = VAR_1;
}
