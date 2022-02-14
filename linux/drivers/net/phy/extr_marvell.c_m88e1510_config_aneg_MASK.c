
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3, VAR_0);
 if (VAR_4 < 0)
  goto error;


 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 < 0)
  goto error;


 if (VAR_3->interface == VAR_2)
  return 0;


 VAR_4 = FUNC_2(VAR_3, VAR_1);
 if (VAR_4 < 0)
  goto error;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 < 0)
  goto error;

 return FUNC_2(VAR_3, VAR_0);

error:
 FUNC_2(VAR_3, VAR_0);
 return VAR_4;
}
