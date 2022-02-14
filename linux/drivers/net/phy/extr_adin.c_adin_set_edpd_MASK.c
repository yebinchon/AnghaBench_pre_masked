
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

 int VAR_4 ;

 int FUNC_0 (struct phy_device*,int ,int) ;
 int FUNC_1 (struct phy_device*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_5, u16 VAR_6)
{
 u16 VAR_7;

 if (VAR_6 == VAR_4)
  return FUNC_0(VAR_5, VAR_2,
    (VAR_0 | VAR_1));

 VAR_7 = VAR_0;

 switch (VAR_6) {
 case 1000:

 case 129:
  VAR_7 |= VAR_1;

 case 128:
  break;
 default:
  return -VAR_3;
 }

 return FUNC_1(VAR_5, VAR_2,
     (VAR_0 | VAR_1),
     VAR_7);
}
