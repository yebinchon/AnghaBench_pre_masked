
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct phy_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct phy_device*,int) ;
 int FUNC_1 (struct phy_device*,int) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_6, int VAR_7, u16 VAR_8)
{
 int VAR_9;

 if (VAR_7 == VAR_4 && VAR_8 == VAR_5) {
  FUNC_1(VAR_6, 0xa5c);
  VAR_9 = FUNC_0(VAR_6, 0x12);
  FUNC_1(VAR_6, 0);
 } else if (VAR_7 == VAR_3 && VAR_8 == VAR_1) {
  FUNC_1(VAR_6, 0xa5d);
  VAR_9 = FUNC_0(VAR_6, 0x10);
  FUNC_1(VAR_6, 0);
 } else if (VAR_7 == VAR_3 && VAR_8 == VAR_2) {
  FUNC_1(VAR_6, 0xa5d);
  VAR_9 = FUNC_0(VAR_6, 0x11);
  FUNC_1(VAR_6, 0);
 } else {
  VAR_9 = -VAR_0;
 }

 return VAR_9;
}
