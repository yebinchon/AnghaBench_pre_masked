
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,int ,int) ;
 int FUNC_2 (struct phy_device*,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_8)
{
 int VAR_9, VAR_10;

 VAR_9 = FUNC_0(VAR_8, VAR_5);
 if (VAR_8->interface == VAR_7) {
  VAR_10 = FUNC_1(VAR_8, VAR_5,
     (VAR_1 | VAR_9));
 } else {
  VAR_10 = FUNC_1(VAR_8, VAR_5,
    (~VAR_1 & VAR_9));
 }

 if (VAR_10 < 0)

  return VAR_10;

 VAR_9 = VAR_3 | VAR_4 | VAR_2;

 return FUNC_2(VAR_8, VAR_0, VAR_6,
       VAR_9);
}
