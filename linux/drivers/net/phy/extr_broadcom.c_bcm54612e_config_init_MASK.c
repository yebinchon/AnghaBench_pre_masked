
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ interface; int dev_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,int ,int) ;
 int FUNC_2 (struct phy_device*,int ) ;
 int FUNC_3 (struct phy_device*,int ,int) ;
 int FUNC_4 (struct phy_device*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct phy_device *VAR_10)
{
 int VAR_11;


 if ((VAR_10->interface != VAR_7) &&
     (VAR_10->interface != VAR_9)) {


  FUNC_4(VAR_10, 0x03, 0);
 }


 if ((VAR_10->interface != VAR_7) &&
     (VAR_10->interface != VAR_8)) {
  VAR_11 = FUNC_0(VAR_10,
       VAR_4);

  VAR_11 &= ~VAR_5;

  VAR_11 &= ~VAR_3;
  FUNC_1(VAR_10, VAR_4,
         VAR_2 | VAR_11);
 }


 if (!(VAR_10->dev_flags & VAR_6)) {
  int VAR_12;

  VAR_11 = FUNC_2(VAR_10, VAR_0);
  VAR_12 = FUNC_3(VAR_10, VAR_0,
     VAR_1 | VAR_11);

  if (VAR_12 < 0)
   return VAR_12;
 }

 return 0;
}
