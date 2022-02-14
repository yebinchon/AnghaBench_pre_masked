
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phy_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct phy_device*,int,int) ;
 int FUNC_1 (struct phy_device*,int ) ;
 int FUNC_2 (struct phy_device*,int ,int) ;

int FUNC_3(struct phy_device *VAR_4,
         u16 VAR_5, u16 VAR_6, u16 VAR_7)
{
 int VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_4, VAR_2,
         VAR_1);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_9 = FUNC_1(VAR_4, VAR_2);
 VAR_9 |= VAR_0;
 VAR_8 = FUNC_2(VAR_4, VAR_2, VAR_9);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_9 = (VAR_6 * VAR_3) | VAR_5;
 VAR_8 = FUNC_0(VAR_4, VAR_9, VAR_7);

 return VAR_8;
}
