
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
 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_5)
{
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_4);

 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 &= ~(VAR_3 |
   VAR_1);

 VAR_7 |= (VAR_2 |
   VAR_0);

 VAR_6 = FUNC_1(VAR_5, VAR_4, VAR_7);

 return VAR_6;
}
