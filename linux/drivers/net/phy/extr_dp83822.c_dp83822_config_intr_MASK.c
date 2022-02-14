
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ interrupts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_22)
{
 int VAR_23;
 int VAR_24;
 int VAR_25;

 if (VAR_22->interrupts == VAR_21) {
  VAR_23 = FUNC_0(VAR_22, VAR_18);
  if (VAR_23 < 0)
   return VAR_23;

  VAR_23 |= (VAR_14 |
    VAR_5 |
    VAR_0 |
    VAR_2 |
    VAR_16 |
    VAR_9 |
    VAR_4 |
    VAR_8);

  VAR_25 = FUNC_1(VAR_22, VAR_18, VAR_23);
  if (VAR_25 < 0)
   return VAR_25;

  VAR_23 = FUNC_0(VAR_22, VAR_19);
  if (VAR_23 < 0)
   return VAR_23;

  VAR_23 |= (VAR_6 |
    VAR_17 |
    VAR_15 |
    VAR_10 |
    VAR_7 |
    VAR_11 |
    VAR_1 |
    VAR_3);

  VAR_25 = FUNC_1(VAR_22, VAR_19, VAR_23);
  if (VAR_25 < 0)
   return VAR_25;

  VAR_24 = FUNC_0(VAR_22, VAR_20);
  if (VAR_24 < 0)
   return VAR_24;

  VAR_24 |= VAR_13 | VAR_12;

 } else {
  VAR_25 = FUNC_1(VAR_22, VAR_18, 0);
  if (VAR_25 < 0)
   return VAR_25;

  VAR_25 = FUNC_1(VAR_22, VAR_18, 0);
  if (VAR_25 < 0)
   return VAR_25;

  VAR_24 = FUNC_0(VAR_22, VAR_20);
  if (VAR_24 < 0)
   return VAR_24;

  VAR_24 &= ~VAR_12;
 }

 return FUNC_1(VAR_22, VAR_20, VAR_24);
}
