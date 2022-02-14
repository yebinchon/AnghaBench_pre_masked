
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct net_device*,int,int *) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2,
      struct ethtool_eeprom *VAR_3, u8 *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  if (FUNC_0(VAR_2, VAR_5, &VAR_4[VAR_5]))
   return -VAR_0;

 return 0;
}
