
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {int op_mode; int PortOffset; } ;
struct ieee80211_vif {int type; } ;
struct ieee80211_hw {struct vnt_private* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_8,
     struct ieee80211_vif *VAR_9)
{
 struct vnt_private *VAR_10 = VAR_8->priv;

 switch (VAR_9->type) {
 case 128:
  break;
 case 130:
  FUNC_0(VAR_10->PortOffset, VAR_3, VAR_6);
  FUNC_0(VAR_10->PortOffset,
          VAR_4, VAR_7);
  FUNC_0(VAR_10->PortOffset, VAR_2, VAR_0);
  break;
 case 129:
  FUNC_0(VAR_10->PortOffset, VAR_3, VAR_6);
  FUNC_0(VAR_10->PortOffset,
          VAR_4, VAR_7);
  FUNC_0(VAR_10->PortOffset, VAR_2, VAR_1);
  break;
 default:
  break;
 }

 VAR_10->op_mode = VAR_5;
}
