
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dev_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*,int ) ;
 int FUNC_3 (struct phy_device*,int,int) ;

__attribute__((used)) static int FUNC_4(struct phy_device *VAR_4)
{
 int VAR_5;


 VAR_5 = FUNC_2(VAR_4, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;


 VAR_5 = FUNC_3(VAR_4, 0x15, 0x1070);
 if (VAR_5 < 0)
  return VAR_5;


 VAR_5 = FUNC_2(VAR_4, VAR_2);
 if (VAR_5 < 0)
  return VAR_5;


 if (VAR_4->dev_flags & VAR_0)
  VAR_5 = FUNC_3(VAR_4, 0x10, 0x1100);
 else
  VAR_5 = FUNC_3(VAR_4, 0x10, 0x021e);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;


 VAR_5 = FUNC_2(VAR_4, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_0(VAR_4);
}
