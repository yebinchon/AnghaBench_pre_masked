
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct phy_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct phy_device*,int ,int ) ;
 int FUNC_2 (struct phy_device*,int ,int,int) ;
 int FUNC_3 (struct phy_device*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct phy_device *VAR_7, u8 VAR_8)
{
 u16 VAR_9;
 int VAR_10;

 if (VAR_8 == VAR_5)
  return FUNC_1(VAR_7, VAR_3,
          VAR_0);

 if (VAR_8 > 7)
  return -VAR_6;

 VAR_9 = FUNC_0(VAR_1, VAR_8);
 VAR_9 |= VAR_2;

 VAR_10 = FUNC_2(VAR_7, VAR_4,
   VAR_2 | VAR_1,
   VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 return FUNC_3(VAR_7, VAR_3,
       VAR_0);
}
