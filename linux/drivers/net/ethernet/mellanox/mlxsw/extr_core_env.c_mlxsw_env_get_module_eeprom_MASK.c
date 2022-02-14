
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct mlxsw_core {int dummy; } ;
struct ethtool_eeprom {int offset; int len; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct mlxsw_core*,int,int,int,int *,unsigned int*) ;
 int FUNC_2 (struct net_device*,char*) ;

int FUNC_3(struct net_device *VAR_1,
    struct mlxsw_core *VAR_2, int VAR_3,
    struct ethtool_eeprom *VAR_4, u8 *VAR_5)
{
 int VAR_6 = VAR_4->offset;
 unsigned int VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 if (!VAR_4->len)
  return -VAR_0;

 FUNC_0(VAR_5, 0, VAR_4->len);

 while (VAR_8 < VAR_4->len) {
  VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_6,
          VAR_4->len - VAR_8, VAR_5 + VAR_8,
          &VAR_7);
  if (VAR_9) {
   FUNC_2(VAR_1, "Eeprom query failed\n");
   return VAR_9;
  }

  VAR_8 += VAR_7;
  VAR_6 += VAR_7;
 }

 return 0;
}
