
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct phy_device*,int) ;
 int FUNC_1 (struct phy_device*,int,int) ;
 int FUNC_2 (struct phy_device*,char*) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_1, u32 VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 switch (VAR_2) {
 case 129:
  VAR_6 = 14;
  break;
 case 128:
  VAR_6 = 4;
  break;
 default:
  return -VAR_0;
 }

 VAR_5 = FUNC_0(VAR_1, VAR_2);
 if (VAR_5 < 0) {
  VAR_4 = VAR_5;
  goto out;
 }

 VAR_5 &= ~(3 << VAR_6);
 VAR_5 |= VAR_3 << VAR_6;
 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_5);
out:
 if (VAR_4 < 0)
  FUNC_2(VAR_1, "failed to set led mode\n");

 return VAR_4;
}
