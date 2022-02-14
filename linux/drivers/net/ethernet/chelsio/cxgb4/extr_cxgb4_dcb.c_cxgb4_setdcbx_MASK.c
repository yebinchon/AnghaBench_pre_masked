
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int supported; int state; } ;
struct port_info {TYPE_1__ dcb; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct port_info* FUNC_1 (struct net_device*) ;

__attribute__((used)) static u8 FUNC_2(struct net_device *VAR_2, u8 VAR_3)
{
 struct port_info *VAR_4 = FUNC_1(VAR_2);



 if ((VAR_3 & (VAR_0 | VAR_1))
     != VAR_3)
  return 1;



 if (!FUNC_0(VAR_4->dcb.state))
  return 1;






 if (VAR_3 != VAR_4->dcb.supported)
  return 1;

 VAR_4->dcb.supported = VAR_3;
 return 0;
}
