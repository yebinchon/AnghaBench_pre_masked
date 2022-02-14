
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbtf_private {int mac_control; int radioon; int capability; } ;
struct ieee80211_hw {struct lbtf_private* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct lbtf_private*) ;
 int FUNC_3 (struct lbtf_private*) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_5)
{
 struct lbtf_private *VAR_6 = VAR_5->priv;

 FUNC_0(VAR_2);

 VAR_6->capability = VAR_4;
 VAR_6->radioon = VAR_3;
 VAR_6->mac_control = VAR_0 | VAR_1;
 FUNC_2(VAR_6);
 FUNC_3(VAR_6);

 FUNC_1(VAR_2);
 return 0;
}
