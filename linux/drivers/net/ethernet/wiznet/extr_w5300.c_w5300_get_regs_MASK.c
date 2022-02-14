
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct w5300_priv {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_regs {int version; } ;


 int VAR_0 ;


 struct w5300_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct w5300_priv*,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1,
      struct ethtool_regs *VAR_2, void *VAR_3)
{
 struct w5300_priv *VAR_4 = FUNC_0(VAR_1);
 u8 *VAR_5 = VAR_3;
 u16 VAR_6;
 u16 VAR_7;

 VAR_2->version = 1;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6 += 2) {
  switch (VAR_6 & 0x23f) {
  case 128:
  case 129:
   VAR_7 = 0xffff;
   break;
  default:
   VAR_7 = FUNC_1(VAR_4, VAR_6);
   break;
  }
  *VAR_5++ = VAR_7 >> 8;
  *VAR_5++ = VAR_7;
 }
}
