
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netcp_intf {int dummy; } ;
struct net_device {int dummy; } ;
struct gbe_intf {int slave; int gbe_dev; } ;


 int FUNC_0 (int ,int ,struct net_device*) ;
 struct gbe_intf* FUNC_1 (int *,struct netcp_intf*) ;
 struct netcp_intf* FUNC_2 (struct net_device*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct netcp_intf *VAR_2 = FUNC_2(VAR_1);
 struct gbe_intf *VAR_3;

 VAR_3 = FUNC_1(&VAR_0, VAR_2);
 if (!VAR_3)
  return;

 FUNC_0(VAR_3->gbe_dev, VAR_3->slave,
          VAR_1);
}
