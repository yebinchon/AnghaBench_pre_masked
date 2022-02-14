
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct phy_device*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_6)
{
 int VAR_7;

 if (VAR_6->interface == VAR_3) {
  VAR_7 = VAR_1 | VAR_2;
 } else if (VAR_6->interface == VAR_4) {
  VAR_7 = VAR_1;
 } else if (VAR_6->interface == VAR_5) {
  VAR_7 = VAR_2;
 } else {
  VAR_7 = 0;
 }

 return FUNC_0(VAR_6, VAR_0,
     VAR_1 | VAR_2,
     VAR_7);
}
