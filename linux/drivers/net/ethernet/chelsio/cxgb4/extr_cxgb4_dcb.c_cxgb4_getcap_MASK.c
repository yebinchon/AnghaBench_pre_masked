
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int supported; } ;
struct port_info {TYPE_1__ dcb; } ;
struct net_device {int dummy; } ;
 struct port_info* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u8 FUNC_1(struct net_device *VAR_0, int VAR_1, u8 *VAR_2)
{
 struct port_info *VAR_3 = FUNC_0(VAR_0);

 switch (VAR_1) {
 case 130:
 case 132:
  *VAR_2 = 1;
  break;

 case 129:

  *VAR_2 = 0x80;
  break;

 case 131:

  *VAR_2 = 0x80;
  break;

 case 133:
  *VAR_2 = 1;
  break;

 case 128:
 case 135:
  *VAR_2 = 0;
  break;

 case 134:
  *VAR_2 = VAR_3->dcb.supported;
  break;

 default:
  *VAR_2 = 0;
 }

 return 0;
}
