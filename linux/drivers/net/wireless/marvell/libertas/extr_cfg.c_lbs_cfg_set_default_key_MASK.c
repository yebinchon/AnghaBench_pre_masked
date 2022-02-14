
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct lbs_private {scalar_t__ wep_tx_key; struct net_device* mesh_dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (struct lbs_private*) ;
 struct lbs_private* FUNC_2 (struct wiphy*) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_1,
       struct net_device *VAR_2,
       u8 VAR_3, bool VAR_4,
       bool VAR_5)
{
 struct lbs_private *VAR_6 = FUNC_2(VAR_1);

 if (VAR_2 == VAR_6->mesh_dev)
  return -VAR_0;

 if (VAR_3 != VAR_6->wep_tx_key) {
  FUNC_0("set_default_key: to %d\n", VAR_3);
  VAR_6->wep_tx_key = VAR_3;
  FUNC_1(VAR_6);
 }

 return 0;
}
