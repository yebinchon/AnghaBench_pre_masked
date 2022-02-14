
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {int port_id; } ;
struct net_device {int dummy; } ;
struct adapter {int flags; int pdev_dev; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct net_device*,void*) ;
 int FUNC_1 (struct net_device*,void*) ;
 int FUNC_2 (int ,char*,int ) ;
 struct adapter* FUNC_3 (struct net_device*) ;
 struct port_info* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,void*) ;

__attribute__((used)) static int FUNC_6(enum tc_setup_type VAR_3, void *VAR_4,
      void *VAR_5)
{
 struct net_device *VAR_6 = VAR_5;
 struct port_info *VAR_7 = FUNC_4(VAR_6);
 struct adapter *VAR_8 = FUNC_3(VAR_6);

 if (!(VAR_8->flags & VAR_0)) {
  FUNC_2(VAR_8->pdev_dev,
   "Failed to setup tc on port %d. Link Down?\n",
   VAR_7->port_id);
  return -VAR_1;
 }

 if (!FUNC_5(VAR_6, VAR_4))
  return -VAR_2;

 switch (VAR_3) {
 case 128:
  return FUNC_0(VAR_6, VAR_4);
 case 129:
  return FUNC_1(VAR_6, VAR_4);
 default:
  return -VAR_2;
 }
}
