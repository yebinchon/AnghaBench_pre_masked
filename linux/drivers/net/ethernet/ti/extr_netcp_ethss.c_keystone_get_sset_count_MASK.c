
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netcp_intf {int dummy; } ;
struct net_device {int dummy; } ;
struct gbe_priv {int num_et_stats; } ;
struct gbe_intf {struct gbe_priv* gbe_dev; } ;


 int VAR_0 ;


 struct gbe_intf* FUNC_0 (struct netcp_intf*) ;
 struct netcp_intf* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, int VAR_2)
{
 struct netcp_intf *VAR_3 = FUNC_1(VAR_1);
 struct gbe_intf *VAR_4;
 struct gbe_priv *VAR_5;

 VAR_4 = FUNC_0(VAR_3);
 if (!VAR_4)
  return -VAR_0;
 VAR_5 = VAR_4->gbe_dev;

 switch (VAR_2) {
 case 128:
  return 0;
 case 129:
  return VAR_5->num_et_stats;
 default:
  return -VAR_0;
 }
}
