
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (struct phy_device*,int ) ;
 int FUNC_5 (struct phy_device*,int ,int) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static u32 FUNC_8(struct phy_device *VAR_11,
         u32 VAR_12, u32 VAR_13)
{
 unsigned long VAR_14;
 u32 VAR_15, VAR_16, VAR_17;

 FUNC_5(VAR_11, VAR_0, VAR_7);
 FUNC_5(VAR_11, VAR_4,
         FUNC_2(VAR_12 >> 2));


 FUNC_5(VAR_11, VAR_3,
         VAR_5 | VAR_6 |
         FUNC_0(VAR_13) |
         FUNC_1(VAR_12 & 0x3));


 VAR_14 = VAR_10 + FUNC_3(VAR_9);
 do {
  FUNC_7(500, 1000);
  VAR_15 = FUNC_4(VAR_11, VAR_3);
 } while (FUNC_6(VAR_10, VAR_14) &&
  !(VAR_15 & VAR_5));

 if (!(VAR_15 & VAR_5))
  return 0xffffffff;


 VAR_16 = FUNC_4(VAR_11, VAR_1);


 VAR_17 = FUNC_4(VAR_11, VAR_2);

 FUNC_5(VAR_11, VAR_0,
         VAR_8);

 return (VAR_17 << 16) | VAR_16;
}
