
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
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

__attribute__((used)) static int FUNC_8(struct phy_device *VAR_11,
          u32 VAR_12, u32 VAR_13, u32 VAR_14)
{
 unsigned long VAR_15;

 FUNC_5(VAR_11, VAR_1, VAR_7);
 FUNC_5(VAR_11, VAR_5,
         FUNC_2(VAR_12 >> 2));


 FUNC_5(VAR_11, VAR_2, (u16)VAR_14);


 FUNC_5(VAR_11, VAR_3, (u16)(VAR_14 >> 16));


 FUNC_5(VAR_11, VAR_4,
         VAR_6 |
         FUNC_0(VAR_13) |
         FUNC_1(VAR_12 & 0x3));


 VAR_15 = VAR_10 + FUNC_3(VAR_9);
 do {
  FUNC_7(500, 1000);
  VAR_14 = FUNC_4(VAR_11, VAR_4);
 } while (FUNC_6(VAR_10, VAR_15) &&
   !(VAR_14 & VAR_6));

 if (!(VAR_14 & VAR_6))
  return -VAR_0;

 FUNC_5(VAR_11, VAR_1,
         VAR_8);

 return 0;
}
