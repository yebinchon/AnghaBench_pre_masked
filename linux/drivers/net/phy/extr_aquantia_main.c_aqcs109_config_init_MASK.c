
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*,int ) ;
 int FUNC_3 (struct phy_device*) ;
 int FUNC_4 (struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct phy_device *VAR_5)
{
 int VAR_6;


 if (VAR_5->interface != VAR_3 &&
     VAR_5->interface != VAR_2)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_5);
 if (!VAR_6)
  FUNC_0(VAR_5);





 VAR_6 = FUNC_4(VAR_5, VAR_4);
 if (VAR_6)
  return VAR_6;


 FUNC_1(VAR_5);

 return FUNC_2(VAR_5, VAR_1);
}
