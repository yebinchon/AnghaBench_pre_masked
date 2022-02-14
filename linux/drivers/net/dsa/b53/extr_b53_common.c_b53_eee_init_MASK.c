
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct dsa_switch {int dummy; } ;


 int FUNC_0 (struct dsa_switch*,int,int) ;
 int FUNC_1 (struct phy_device*,int ) ;

int FUNC_2(struct dsa_switch *VAR_0, int VAR_1, struct phy_device *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2, 0);
 if (VAR_3)
  return 0;

 FUNC_0(VAR_0, VAR_1, 1);

 return 1;
}
