
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int msgs; int pg_num_tcs_supported; } ;
struct port_info {TYPE_1__ dcb; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 struct port_info* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2, int VAR_3, u8 *VAR_4)
{
 struct port_info *VAR_5 = FUNC_0(VAR_2);

 switch (VAR_3) {
 case 128:
  if (VAR_5->dcb.msgs & VAR_0)
   *VAR_4 = VAR_5->dcb.pg_num_tcs_supported;
  else
   *VAR_4 = 0x8;
  break;

 case 129:
  *VAR_4 = 0x8;
  break;

 default:
  return -VAR_1;
 }

 return 0;
}
