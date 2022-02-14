
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_mqprio_qopt {int num_tc; int hw; } ;
struct net_device {int dummy; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,int ) ;

int FUNC_1(struct net_device *VAR_3, enum tc_setup_type VAR_4,
       void *VAR_5)
{
 struct tc_mqprio_qopt *VAR_6 = VAR_5;

 if (VAR_4 != VAR_2)
  return -VAR_0;

 VAR_6->hw = VAR_1;

 return FUNC_0(VAR_3, VAR_6->num_tc);
}
