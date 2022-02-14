
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmnet_priv {struct net_device* real_dev; } ;
struct rmnet_port {int * bridge_ep; int rmnet_mode; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct rmnet_priv* FUNC_1 (struct net_device*) ;
 struct rmnet_port* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,struct rmnet_port*) ;

int FUNC_4(struct net_device *VAR_1,
       struct net_device *VAR_2)
{
 struct rmnet_priv *VAR_3 = FUNC_1(VAR_1);
 struct net_device *VAR_4 = VAR_3->real_dev;
 struct rmnet_port *VAR_5, *VAR_6;

 VAR_5 = FUNC_2(VAR_4);
 VAR_5->rmnet_mode = VAR_0;
 VAR_5->bridge_ep = ((void*)0);

 VAR_6 = FUNC_2(VAR_2);
 FUNC_3(VAR_2, VAR_6);

 FUNC_0(VAR_2, "removed from rmnet as slave\n");
 return 0;
}
