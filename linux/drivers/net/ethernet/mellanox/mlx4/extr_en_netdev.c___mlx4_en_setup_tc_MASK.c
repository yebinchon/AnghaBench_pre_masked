
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_mqprio_qopt {scalar_t__ num_tc; int hw; } ;
struct net_device {int dummy; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_5, enum tc_setup_type VAR_6,
         void *VAR_7)
{
 struct tc_mqprio_qopt *VAR_8 = VAR_7;

 if (VAR_6 != VAR_4)
  return -VAR_1;

 if (VAR_8->num_tc && VAR_8->num_tc != VAR_2)
  return -VAR_0;

 VAR_8->hw = VAR_3;

 return FUNC_0(VAR_5, VAR_8->num_tc);
}
