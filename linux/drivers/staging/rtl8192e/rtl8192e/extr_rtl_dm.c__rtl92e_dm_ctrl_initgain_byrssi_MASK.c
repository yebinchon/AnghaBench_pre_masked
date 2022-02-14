
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int dig_enable_flag; scalar_t__ dig_algorithm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_3)
{

 if (VAR_2.dig_enable_flag == 0)
  return;

 if (VAR_2.dig_algorithm == VAR_0)
  FUNC_1(VAR_3);
 else if (VAR_2.dig_algorithm == VAR_1)
  FUNC_0(VAR_3);
 else
  return;
}
