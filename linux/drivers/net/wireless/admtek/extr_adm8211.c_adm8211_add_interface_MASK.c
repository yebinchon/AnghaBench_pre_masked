
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int type; scalar_t__ addr; } ;
struct ieee80211_hw {struct adm8211_priv* priv; } ;
struct adm8211_priv {scalar_t__ mode; } ;
typedef int __le32 ;
typedef int __le16 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_4,
     struct ieee80211_vif *VAR_5)
{
 struct adm8211_priv *VAR_6 = VAR_4->priv;
 if (VAR_6->mode != VAR_1)
  return -VAR_0;

 switch (VAR_5->type) {
 case 128:
  VAR_6->mode = VAR_5->type;
  break;
 default:
  return -VAR_0;
 }

 FUNC_1();

 FUNC_0(VAR_2, FUNC_5(*(__le32 *)VAR_5->addr));
 FUNC_0(VAR_3, FUNC_4(*(__le16 *)(VAR_5->addr + 4)));

 FUNC_3(VAR_4);

 FUNC_2();

 return 0;
}
