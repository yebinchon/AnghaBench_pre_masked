
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {int op_mode; } ;
struct ieee80211_vif {int type; } ;
struct ieee80211_hw {struct vnt_private* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct vnt_private*,int ,int ) ;
 int FUNC_1 (struct vnt_private*,int ,int ) ;
 int FUNC_2 (struct vnt_private*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_10,
     struct ieee80211_vif *VAR_11)
{
 struct vnt_private *VAR_12 = VAR_10->priv;

 switch (VAR_11->type) {
 case 128:
  break;
 case 130:
  FUNC_0(VAR_12, VAR_5, VAR_8);
  FUNC_0(VAR_12, VAR_6, VAR_9);
  FUNC_0(VAR_12, VAR_4, VAR_0);
  break;
 case 129:
  FUNC_0(VAR_12, VAR_5, VAR_8);
  FUNC_0(VAR_12, VAR_6, VAR_9);
  FUNC_0(VAR_12, VAR_4, VAR_1);
  break;
 default:
  break;
 }

 FUNC_2(VAR_12);

 VAR_12->op_mode = VAR_7;


 FUNC_1(VAR_12, VAR_3, VAR_2);
}
