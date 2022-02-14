
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct switchdev_trans {int dummy; } ;
struct net_device {int dummy; } ;
struct ethsw_port_priv {int dummy; } ;


 int FUNC_0 (struct ethsw_port_priv*,int ) ;
 struct ethsw_port_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct switchdev_trans*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0,
       struct switchdev_trans *VAR_1,
       u8 VAR_2)
{
 struct ethsw_port_priv *VAR_3 = FUNC_1(VAR_0);

 if (FUNC_2(VAR_1))
  return 0;

 return FUNC_0(VAR_3, VAR_2);
}
