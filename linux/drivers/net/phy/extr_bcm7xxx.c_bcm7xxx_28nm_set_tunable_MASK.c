
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct phy_device {int dummy; } ;
struct ethtool_tunable {int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct phy_device*,scalar_t__) ;
 int FUNC_1 (struct phy_device*,int) ;
 int FUNC_2 (struct phy_device*) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_2,
        struct ethtool_tunable *VAR_3,
        const void *VAR_4)
{
 u8 VAR_5 = *(u8 *)VAR_4;
 int VAR_6;

 switch (VAR_3->id) {
 case 128:
  VAR_6 = FUNC_0(VAR_2, VAR_5);
  break;
 default:
  return -VAR_1;
 }

 if (VAR_6)
  return VAR_6;





 VAR_6 = FUNC_1(VAR_2, VAR_5 == VAR_0);
 if (VAR_6)
  return VAR_6;

 return FUNC_2(VAR_2);
}
