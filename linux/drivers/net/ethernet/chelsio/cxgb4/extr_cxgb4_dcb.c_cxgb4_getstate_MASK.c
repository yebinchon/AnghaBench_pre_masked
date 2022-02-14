
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int enabled; } ;
struct port_info {TYPE_1__ dcb; } ;
struct net_device {int dummy; } ;


 struct port_info* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u8 FUNC_1(struct net_device *VAR_0)
{
 struct port_info *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->dcb.enabled;
}
