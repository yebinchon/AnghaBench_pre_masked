
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
 int FUNC_0 (struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_4, u8 *VAR_5)
{
 u16 VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_3);
 if (VAR_6 & VAR_2)
  *VAR_5 = VAR_1;
 else
  *VAR_5 = VAR_0;

 return 0;
}
