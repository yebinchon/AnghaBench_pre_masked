
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phy_device {scalar_t__ interrupts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_8)
{
 u16 VAR_9;
 int VAR_10;

 if (VAR_8->interrupts == VAR_7) {
  VAR_9 = VAR_2
   | VAR_5
   | VAR_1
   | VAR_3
   | VAR_6
   | VAR_0;
 } else {
  VAR_9 = 0;
 }


 VAR_10 = FUNC_0(VAR_8);
 if (VAR_10)
  return VAR_10;

 return FUNC_1(VAR_8, VAR_4, VAR_9);
}
