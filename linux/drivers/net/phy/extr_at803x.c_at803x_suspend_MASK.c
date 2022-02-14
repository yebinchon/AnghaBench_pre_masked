
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
 int FUNC_0 (struct phy_device*,int ,int ,int) ;
 int FUNC_1 (struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_5)
{
 int VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_5, VAR_0);
 VAR_7 = VAR_6 & VAR_1;

 if (VAR_7)
  VAR_6 = VAR_2;
 else
  VAR_6 = VAR_3;

 FUNC_0(VAR_5, VAR_4, 0, VAR_6);

 return 0;
}
