
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct phy_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct phy_device*,int,scalar_t__) ;
 int FUNC_1 (struct phy_device*,int) ;
 int FUNC_2 (struct phy_device*,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_3, int VAR_4, u16 VAR_5,
        u16 VAR_6)
{
 int VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);

 if (VAR_7 != -VAR_0)
  return VAR_7;

 if (VAR_4 == VAR_2 && VAR_5 == VAR_1) {
  FUNC_1(VAR_3, 0xa6d);
  VAR_7 = FUNC_0(VAR_3, 0x12, VAR_6);
  FUNC_1(VAR_3, 0);
 }

 return VAR_7;
}
