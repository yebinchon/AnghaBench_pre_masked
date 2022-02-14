
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct phy_device *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;
 FUNC_1(VAR_3, VAR_1, 0);
 VAR_6 = FUNC_0(VAR_3, VAR_2);
 if (VAR_5)
  VAR_6 |= VAR_0;
 else
  VAR_6 &= ~VAR_0;
 FUNC_1(VAR_3, VAR_2, VAR_6);
 FUNC_1(VAR_3, VAR_1, VAR_4);
}
