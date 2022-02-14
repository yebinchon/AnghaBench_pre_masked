
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rmnet_priv {int mux_id; } ;
struct net_device {int dummy; } ;


 struct rmnet_priv* FUNC_0 (struct net_device*) ;

u8 FUNC_1(struct net_device *VAR_0)
{
 struct rmnet_priv *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 return VAR_1->mux_id;
}
