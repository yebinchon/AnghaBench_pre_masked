
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
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_9)
{
 int VAR_10;
 int VAR_11;
 int VAR_12;

 if (VAR_9->interrupts == VAR_8) {
  VAR_11 = FUNC_0(VAR_9, VAR_3);
  if (VAR_11 < 0)
   return VAR_11;
  VAR_11 |=
   (VAR_4 |
   VAR_5 |
   VAR_7 |
   VAR_6);
  VAR_12 = FUNC_1(VAR_9, VAR_3, VAR_11);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_10 = FUNC_0(VAR_9, VAR_0);
  if (VAR_10 < 0)
   return VAR_10;
  VAR_10 |=
   (VAR_2 |
   VAR_1);
  return FUNC_1(VAR_9, VAR_0, VAR_10);
 } else {
  VAR_10 = FUNC_0(VAR_9, VAR_0);
  if (VAR_10 < 0)
   return VAR_10;
  VAR_10 &=
   ~(VAR_2 |
   VAR_1);
  VAR_12 = FUNC_1(VAR_9, VAR_0, VAR_10);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_11 = FUNC_0(VAR_9, VAR_3);
  if (VAR_11 < 0)
   return VAR_11;
  VAR_11 &=
   ~(VAR_4 |
   VAR_5 |
   VAR_7 |
   VAR_6);
  return FUNC_1(VAR_9, VAR_3, VAR_11);
 }
}
