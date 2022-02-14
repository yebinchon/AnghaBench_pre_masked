
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {int op_mode; int PortOffset; struct ieee80211_vif* vif; } ;
struct ieee80211_vif {int type; } ;
struct ieee80211_hw {struct vnt_private* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;



 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct ieee80211_hw *VAR_6, struct ieee80211_vif *VAR_7)
{
 struct vnt_private *VAR_8 = VAR_6->priv;

 VAR_8->vif = VAR_7;

 switch (VAR_7->type) {
 case 128:
  break;
 case 130:
  FUNC_0(VAR_8->PortOffset, VAR_4, VAR_5);

  FUNC_1(VAR_8->PortOffset, VAR_3, VAR_1);

  break;
 case 129:
  FUNC_0(VAR_8->PortOffset, VAR_4, VAR_5);

  FUNC_1(VAR_8->PortOffset, VAR_3, VAR_2);

  break;
 default:
  return -VAR_0;
 }

 VAR_8->op_mode = VAR_7->type;

 return 0;
}
