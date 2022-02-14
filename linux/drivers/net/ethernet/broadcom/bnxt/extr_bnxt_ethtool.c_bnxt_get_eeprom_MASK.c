
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int offset; int len; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ,int *) ;
 int FUNC_1 (struct net_device*,int,int,int ,int *) ;
 int FUNC_2 (struct net_device*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
      struct ethtool_eeprom *VAR_2,
      u8 *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;

 if (VAR_2->offset == 0)
  return FUNC_0(VAR_1, VAR_2->len, VAR_3);

 VAR_4 = VAR_2->offset >> 24;
 VAR_5 = VAR_2->offset & 0xffffff;

 if (VAR_4 == 0) {
  FUNC_2(VAR_1, "unsupported index value: %d\n", VAR_4);
  return -VAR_0;
 }

 return FUNC_1(VAR_1, VAR_4 - 1, VAR_5, VAR_2->len, VAR_3);
}
