
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
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*,int ) ;
 int FUNC_2 (struct phy_device*,int ,int) ;
 int FUNC_3 (struct phy_device*,char*) ;

__attribute__((used)) static int FUNC_4(struct phy_device *VAR_7)
{
 int VAR_8;

 int VAR_9 = FUNC_0(VAR_7);
 if (VAR_9 != VAR_6)
  return VAR_9;





 VAR_8 = FUNC_1(VAR_7, VAR_5);
 if ((VAR_8 & VAR_1) != VAR_2)
  return VAR_9;


 FUNC_2(VAR_7, VAR_5, VAR_8 & ~VAR_0);


 if (!(FUNC_1(VAR_7, VAR_3) & VAR_4)) {
  FUNC_3(VAR_7, "803x_aneg_done: SGMII link is not ok\n");
  VAR_9 = 0;
 }

 FUNC_2(VAR_7, VAR_5, VAR_8 | VAR_0);

 return VAR_9;
}
