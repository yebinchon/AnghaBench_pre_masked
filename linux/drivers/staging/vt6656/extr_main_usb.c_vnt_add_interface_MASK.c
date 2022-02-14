
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {int op_mode; struct ieee80211_vif* vif; } ;
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
 int FUNC_0 (struct vnt_private*,int ,int ) ;
 int FUNC_1 (struct vnt_private*,int ,int ) ;
 int FUNC_2 (struct vnt_private*,int ,int ) ;
 int FUNC_3 (struct vnt_private*) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_8, struct ieee80211_vif *VAR_9)
{
 struct vnt_private *VAR_10 = VAR_8->priv;

 VAR_10->vif = VAR_9;

 switch (VAR_9->type) {
 case 128:
  break;
 case 130:
  FUNC_0(VAR_10, VAR_6, VAR_7);

  FUNC_1(VAR_10, VAR_5, VAR_1);

  break;
 case 129:
  FUNC_0(VAR_10, VAR_6, VAR_7);

  FUNC_1(VAR_10, VAR_5, VAR_2);

  break;
 default:
  return -VAR_0;
 }

 VAR_10->op_mode = VAR_9->type;

 FUNC_3(VAR_10);


 FUNC_2(VAR_10, VAR_4, VAR_3);

 return 0;
}
