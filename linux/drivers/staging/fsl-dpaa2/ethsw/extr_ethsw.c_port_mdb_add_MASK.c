
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_trans {int dummy; } ;
struct switchdev_obj_port_mdb {int addr; } ;
struct net_device {int dummy; } ;
struct ethsw_port_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct ethsw_port_priv*,int ) ;
 int FUNC_2 (struct ethsw_port_priv*,int ) ;
 int FUNC_3 (struct net_device*,char*,int) ;
 struct ethsw_port_priv* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*,int ,int ) ;
 scalar_t__ FUNC_6 (struct switchdev_trans*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1,
   const struct switchdev_obj_port_mdb *VAR_2,
   struct switchdev_trans *VAR_3)
{
 struct ethsw_port_priv *VAR_4 = FUNC_4(VAR_1);
 int VAR_5;

 if (FUNC_6(VAR_3))
  return 0;


 if (FUNC_5(VAR_1, 0, VAR_2->addr))
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_4, VAR_2->addr);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2->addr);
 if (VAR_5) {
  FUNC_3(VAR_1, "dev_mc_add err %d\n", VAR_5);
  FUNC_2(VAR_4, VAR_2->addr);
 }

 return VAR_5;
}
