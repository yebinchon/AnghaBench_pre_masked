
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rmnet_priv {struct net_device* real_dev; } ;
struct rmnet_port {int dummy; } ;
struct rmnet_endpoint {int hlnode; } ;
struct net_device {int dummy; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct rmnet_endpoint*) ;
 struct rmnet_priv* FUNC_2 (struct net_device*) ;
 struct rmnet_endpoint* FUNC_3 (struct rmnet_port*,int ) ;
 struct rmnet_port* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,struct rmnet_port*) ;
 int FUNC_7 (struct net_device*,struct rmnet_port*) ;
 int FUNC_8 (int ,struct rmnet_port*,struct rmnet_endpoint*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*,struct list_head*) ;

__attribute__((used)) static void FUNC_11(struct net_device *VAR_0, struct list_head *VAR_1)
{
 struct rmnet_priv *VAR_2 = FUNC_2(VAR_0);
 struct net_device *VAR_3;
 struct rmnet_endpoint *VAR_4;
 struct rmnet_port *VAR_5;
 u8 VAR_6;

 VAR_3 = VAR_2->real_dev;

 if (!VAR_3 || !FUNC_5(VAR_3))
  return;

 VAR_5 = FUNC_4(VAR_3);

 VAR_6 = FUNC_9(VAR_0);

 VAR_4 = FUNC_3(VAR_5, VAR_6);
 if (VAR_4) {
  FUNC_0(&VAR_4->hlnode);
  FUNC_6(VAR_0, VAR_5);
  FUNC_8(VAR_6, VAR_5, VAR_4);
  FUNC_1(VAR_4);
 }
 FUNC_7(VAR_3, VAR_5);

 FUNC_10(VAR_0, VAR_1);
}
