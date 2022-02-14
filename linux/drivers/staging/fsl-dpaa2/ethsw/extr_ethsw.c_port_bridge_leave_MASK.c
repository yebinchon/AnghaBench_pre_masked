
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethsw_port_priv {int * bridge_dev; } ;


 int FUNC_0 (struct ethsw_port_priv*,int ) ;
 struct ethsw_port_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0)
{
 struct ethsw_port_priv *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;


 VAR_2 = FUNC_0(VAR_1, 0);
 if (!VAR_2)
  VAR_1->bridge_dev = ((void*)0);

 return VAR_2;
}
