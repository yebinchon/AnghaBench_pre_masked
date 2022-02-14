
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {int dummy; } ;
struct TYPE_2__ {int speed; scalar_t__ autoneg; scalar_t__ duplex; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct qlcnic_adapter*,int) ;

__attribute__((used)) static int FUNC_1(struct qlcnic_adapter *VAR_3,
      const struct ethtool_link_ksettings *VAR_4)
{
 u32 VAR_5 = 0, VAR_6 = 0;

 if (VAR_4->base.duplex)
  VAR_6 |= 0x1;

 if (VAR_4->base.autoneg)
  VAR_6 |= 0x2;

 switch (VAR_4->base.speed) {
 case 130:
  VAR_6 |= (0 << 8);
  break;
 case 129:
  VAR_6 |= (1 << 8);
  break;
 case 128:
  VAR_6 |= (10 << 8);
  break;
 default:
  return -VAR_0;
 }

 VAR_5 = FUNC_0(VAR_3, VAR_6);

 if (VAR_5 == VAR_2)
  return -VAR_1;
 else if (VAR_5)
  return -VAR_0;
 return VAR_5;
}
