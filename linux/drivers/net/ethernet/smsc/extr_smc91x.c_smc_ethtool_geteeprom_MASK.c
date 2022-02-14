
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int len; int offset; } ;


 int FUNC_0 (int,struct net_device*,char*,int,int,...) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int,int*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0,
  struct ethtool_eeprom *VAR_1, u8 *VAR_2)
{
 int VAR_3;
 int VAR_4;

 FUNC_0(1, VAR_0, "Reading %d bytes at %d(0x%x)\n",
  VAR_1->len, VAR_1->offset, VAR_1->offset);
 VAR_4 = FUNC_1(VAR_0);
 for (VAR_3 = 0; VAR_3 < VAR_1->len; VAR_3 += 2) {
  int VAR_5;
  u16 VAR_6;
  int VAR_7 = VAR_3 + VAR_1->offset;
  if (VAR_7 > VAR_4)
   break;
  VAR_5 = FUNC_2(VAR_0, VAR_7 >> 1, &VAR_6);
  if (VAR_5 != 0)
   return VAR_5;
  FUNC_0(2, VAR_0, "Read 0x%x from 0x%x\n", VAR_6, VAR_7 >> 1);
  VAR_2[VAR_3] = (VAR_6 >> 8) & 0xff;
  VAR_2[VAR_3+1] = VAR_6 & 0xff;
 }
 return 0;
}
