
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 int VAR_0 ;


 int FUNC_0 (struct net_device*,void*) ;
 int FUNC_1 (struct net_device*,void*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, enum tc_setup_type VAR_2,
        void *VAR_3)
{
 switch (VAR_2) {
 case 129:
  return FUNC_0(VAR_1, VAR_3);

 case 128:
  return FUNC_1(VAR_1, VAR_3);

 default:
  return -VAR_0;
 }
}
