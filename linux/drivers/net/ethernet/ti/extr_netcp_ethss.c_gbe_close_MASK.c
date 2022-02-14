
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netcp_intf {int dummy; } ;
struct net_device {int dummy; } ;
struct gbe_priv {int dummy; } ;
struct gbe_intf {TYPE_1__* slave; struct gbe_priv* gbe_dev; } ;
struct TYPE_2__ {int open; int link_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct gbe_intf*) ;
 int VAR_4 ;
 int FUNC_2 (struct gbe_priv*) ;
 int FUNC_3 (struct netcp_intf*,int ,int ,struct gbe_intf*) ;
 int FUNC_4 (struct netcp_intf*,int ,int ,struct gbe_intf*) ;
 struct netcp_intf* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(void *VAR_5, struct net_device *VAR_6)
{
 struct gbe_intf *VAR_7 = VAR_5;
 struct netcp_intf *VAR_8 = FUNC_5(VAR_6);
 struct gbe_priv *VAR_9 = VAR_7->gbe_dev;

 FUNC_2(VAR_9);

 FUNC_1(VAR_7);

 FUNC_3(VAR_8, VAR_0, VAR_3, VAR_7);
 FUNC_4(VAR_8, VAR_1, VAR_4, VAR_7);

 VAR_7->slave->open = 0;
 FUNC_0(&VAR_7->slave->link_state, VAR_2);
 return 0;
}
