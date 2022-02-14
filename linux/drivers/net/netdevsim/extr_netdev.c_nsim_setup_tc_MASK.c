
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdevsim {int dummy; } ;
struct net_device {int dummy; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 int VAR_0 ;

 int FUNC_0 (void*,int *,int ,struct netdevsim*,struct netdevsim*,int) ;
 struct netdevsim* FUNC_1 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_3, enum tc_setup_type VAR_4, void *VAR_5)
{
 struct netdevsim *VAR_6 = FUNC_1(VAR_3);

 switch (VAR_4) {
 case 128:
  return FUNC_0(VAR_5,
        &VAR_1,
        VAR_2,
        VAR_6, VAR_6, 1);
 default:
  return -VAR_0;
 }
}
