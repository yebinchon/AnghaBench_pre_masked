
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_obj_port_mdb {int addr; } ;
struct net_device {int dummy; } ;
struct ethsw_port_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct ethsw_port_priv*,int ) ;
 int FUNC_2 (struct net_device*,char*,int) ;
 struct ethsw_port_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1,
   const struct switchdev_obj_port_mdb *VAR_2)
{
 struct ethsw_port_priv *VAR_3 = FUNC_3(VAR_1);
 int VAR_4;

 if (!FUNC_4(VAR_1, 0, VAR_2->addr))
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_3, VAR_2->addr);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2->addr);
 if (VAR_4) {
  FUNC_2(VAR_1, "dev_mc_del err %d\n", VAR_4);
  return VAR_4;
 }

 return VAR_4;
}
