
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_app {int dummy; } ;
struct net_device {int dummy; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 int VAR_0 ;

 int FUNC_0 (struct net_device*,void*) ;

int FUNC_1(struct nfp_app *VAR_1, struct net_device *VAR_2,
   enum tc_setup_type VAR_3, void *VAR_4)
{
 switch (VAR_3) {
 case 128:
  return FUNC_0(VAR_2, VAR_4);
 default:
  return -VAR_0;
 }
}
