
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct phy_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct phy_device*,int ,int ,int ,int) ;
 int FUNC_1 (struct phy_device*,char*) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_8, u8 VAR_9)
{
 if (VAR_9 == VAR_3) {

  VAR_9 = ((1 << VAR_1) | VAR_4);
 } else if (VAR_9 > VAR_2 || VAR_9 == 1) {
  FUNC_1(VAR_8, "Downshift count should be 2,3,4 or 5\n");
  return -VAR_5;
 } else if (VAR_9) {

  VAR_9 = (((VAR_9 - 2) << VAR_1) | VAR_4);
 }

 return FUNC_0(VAR_8, VAR_7,
    VAR_6, VAR_0,
    VAR_9);
}
