
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct phy_device*,int) ;
 int FUNC_1 (struct phy_device*,int ,int) ;

__attribute__((used)) static bool FUNC_2(struct phy_device *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_2, VAR_0, 0xa61);
 VAR_3 = FUNC_0(VAR_2, 0x13);
 FUNC_1(VAR_2, VAR_0, 0);

 return VAR_3 >= 0 && VAR_3 & VAR_1;
}
