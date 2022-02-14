
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
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,int ,int) ;
 int FUNC_2 (struct phy_device*,int ) ;
 int FUNC_3 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct phy_device *VAR_9)
{
 int VAR_10, VAR_11;


 VAR_11 = FUNC_0(VAR_9, VAR_3);
 VAR_11 |= VAR_2;
 if (VAR_9->interface == VAR_5 ||
     VAR_9->interface == VAR_8) {

  VAR_11 &= ~VAR_4;
 }
 if (VAR_9->interface == VAR_6 ||
     VAR_9->interface == VAR_7) {

  VAR_11 |= VAR_4;
 }
 VAR_10 = FUNC_1(VAR_9, VAR_3,
      VAR_11);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_11 = FUNC_2(VAR_9, VAR_0);
 if (VAR_9->interface == VAR_5 ||
     VAR_9->interface == VAR_7) {

  VAR_11 &= ~VAR_1;
 }
 if (VAR_9->interface == VAR_6 ||
     VAR_9->interface == VAR_8) {

  VAR_11 |= VAR_1;
 }
 VAR_10 = FUNC_3(VAR_9, VAR_0, VAR_11);
 if (VAR_10 < 0)
  return VAR_10;

 return 0;
}
