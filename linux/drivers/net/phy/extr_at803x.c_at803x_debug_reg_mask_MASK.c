
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phy_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct phy_device*,int) ;
 int FUNC_1 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_1, u16 VAR_2,
     u16 VAR_3, u16 VAR_4)
{
 u16 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = VAR_6 & 0xffff;
 VAR_5 &= ~VAR_3;
 VAR_5 |= VAR_4;

 return FUNC_1(VAR_1, VAR_0, VAR_5);
}
