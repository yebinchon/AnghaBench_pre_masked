
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phy_device {scalar_t__ speed; scalar_t__ duplex; scalar_t__ asym_pause; scalar_t__ pause; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct phy_device*,int ,int,int ) ;

int FUNC_1(struct phy_device *VAR_10)
{
 u16 VAR_11 = 0;

 VAR_10->pause = 0;
 VAR_10->asym_pause = 0;

 if (VAR_9 == VAR_10->speed)
  VAR_11 |= VAR_5;
 else if (VAR_8 == VAR_10->speed)
  VAR_11 |= VAR_4;

 if (VAR_6 == VAR_10->duplex)
  VAR_11 |= VAR_0;

 return FUNC_0(VAR_10, VAR_7,
     ~(VAR_2 | VAR_1 | VAR_3), VAR_11);
}
