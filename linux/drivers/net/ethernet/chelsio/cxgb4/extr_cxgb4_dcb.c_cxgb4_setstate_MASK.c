
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ state; int enabled; } ;
struct port_info {TYPE_1__ dcb; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct port_info* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u8 FUNC_1(struct net_device *VAR_2, u8 VAR_3)
{
 struct port_info *VAR_4 = FUNC_0(VAR_2);


 if (VAR_4->dcb.state == VAR_1) {
  VAR_4->dcb.enabled = VAR_3;
  return 0;
 }



 if (VAR_3 != (VAR_4->dcb.state == VAR_0))
  return 1;

 return 0;
}
