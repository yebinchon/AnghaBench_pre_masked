
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*,int ,int) ;
 int FUNC_2 (struct phy_device*,int,int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct phy_device *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_3,
   VAR_0 | VAR_2 | VAR_1);
 if (VAR_5)
  return VAR_5;

 FUNC_3(300, 400);

 VAR_5 = FUNC_2(VAR_4, 0xf8, 0x08, 0x36);
 if (VAR_5)
  return VAR_5;

 return FUNC_0(VAR_4);
}
