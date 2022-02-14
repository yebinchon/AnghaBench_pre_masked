
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct phy_device {int dummy; } ;


 int FUNC_0 (struct phy_device*,int ,int ,int ) ;
 int FUNC_1 (struct phy_device*,int,int) ;
 int FUNC_2 (struct phy_device*,int) ;

int FUNC_3(struct phy_device *VAR_0, int VAR_1, u32 VAR_2,
        u16 VAR_3, u16 VAR_4)
{
 int VAR_5 = 0, VAR_6;

 VAR_6 = FUNC_2(VAR_0, VAR_1);
 if (VAR_6 >= 0)
  VAR_5 = FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4);

 return FUNC_1(VAR_0, VAR_6, VAR_5);
}
