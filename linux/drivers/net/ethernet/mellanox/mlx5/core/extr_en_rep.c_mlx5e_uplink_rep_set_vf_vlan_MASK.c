
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,char*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1, int VAR_2, u16 VAR_3, u8 VAR_4,
     __be16 VAR_5)
{
 FUNC_0(VAR_1, "legacy vf vlan setting isn't supported in switchdev mode\n");

 if (VAR_3 != 0)
  return -VAR_0;


 return 0;
}
