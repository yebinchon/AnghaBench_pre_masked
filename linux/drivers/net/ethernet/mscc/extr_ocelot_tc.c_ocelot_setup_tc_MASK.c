
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocelot_port {int dummy; } ;
struct net_device {int dummy; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 int VAR_0 ;

 struct ocelot_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ocelot_port*,void*) ;

int FUNC_2(struct net_device *VAR_1, enum tc_setup_type VAR_2,
      void *VAR_3)
{
 struct ocelot_port *VAR_4 = FUNC_0(VAR_1);

 switch (VAR_2) {
 case 128:
  return FUNC_1(VAR_4, VAR_3);
 default:
  return -VAR_0;
 }
 return 0;
}
