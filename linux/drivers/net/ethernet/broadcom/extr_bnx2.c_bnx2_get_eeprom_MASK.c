
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int len; int offset; } ;
struct bnx2 {int dummy; } ;


 int FUNC_0 (struct bnx2*,int ,int *,int ) ;
 struct bnx2* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_0, struct ethtool_eeprom *VAR_1,
  u8 *VAR_2)
{
 struct bnx2 *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;



 VAR_4 = FUNC_0(VAR_3, VAR_1->offset, VAR_2, VAR_1->len);

 return VAR_4;
}
