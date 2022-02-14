
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct lbs_private {int disassoc_reason; struct net_device* mesh_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct lbs_private*,int ) ;
 struct lbs_private* FUNC_1 (struct wiphy*) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_1, struct net_device *VAR_2,
 u16 VAR_3)
{
 struct lbs_private *VAR_4 = FUNC_1(VAR_1);

 if (VAR_2 == VAR_4->mesh_dev)
  return -VAR_0;


 VAR_4->disassoc_reason = VAR_3;

 return FUNC_0(VAR_4, VAR_3);
}
