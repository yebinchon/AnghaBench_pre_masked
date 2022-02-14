
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct phy_device*,int ,int ) ;
 int FUNC_1 (struct phy_device*,int ,int,int const) ;
 int FUNC_2 (struct phy_device*,int ,int,int const) ;
 int FUNC_3 (struct phy_device*,int ) ;
 int FUNC_4 (struct phy_device*,int ,int ) ;
 int FUNC_5 (struct phy_device*) ;

__attribute__((used)) static int FUNC_6(struct phy_device *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_3(VAR_5, VAR_0);
 if (VAR_6 < 0)
  return VAR_6;

 switch (VAR_6 & VAR_1) {
 case 129:
  break;
 case 130:
  VAR_6 = FUNC_4(VAR_5, VAR_0, VAR_2);
  if (VAR_6)
   return VAR_6;

  VAR_6 = FUNC_0(VAR_5, VAR_0, VAR_2);
  if (VAR_6)
   return VAR_6;
  break;
 case 128:
  VAR_6 = FUNC_2(VAR_5, VAR_0,
           VAR_1,
           128);
  if (VAR_6)
   return VAR_6;

  VAR_6 = FUNC_1(VAR_5, VAR_0, VAR_1,
     130);
  if (VAR_6)
   return VAR_6;

  VAR_6 = FUNC_2(VAR_5, VAR_3,
           VAR_4,
           VAR_4);
  if (VAR_6)
   return VAR_6;

  return FUNC_5(VAR_5);
 default:
  break;
 }

 return 0;
}
