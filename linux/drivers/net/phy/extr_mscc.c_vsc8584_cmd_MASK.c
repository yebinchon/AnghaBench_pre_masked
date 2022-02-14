
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phy_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct phy_device*,int ) ;
 int FUNC_2 (struct phy_device*,int ,int) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct phy_device *VAR_10, u16 VAR_11)
{
 unsigned long VAR_12;
 u16 VAR_13;

 FUNC_2(VAR_10, VAR_2,
         VAR_3);

 FUNC_2(VAR_10, VAR_5, VAR_7 | VAR_11);

 VAR_12 = VAR_9 + FUNC_0(VAR_8);
 do {
  VAR_13 = FUNC_1(VAR_10, VAR_5);
 } while (FUNC_3(VAR_9, VAR_12) &&
   (VAR_13 & VAR_7) &&
   !(VAR_13 & VAR_6));

 FUNC_2(VAR_10, VAR_2, VAR_4);

 if (VAR_13 & VAR_6)
  return -VAR_0;

 if (VAR_13 & VAR_7)
  return -VAR_1;

 return 0;
}
