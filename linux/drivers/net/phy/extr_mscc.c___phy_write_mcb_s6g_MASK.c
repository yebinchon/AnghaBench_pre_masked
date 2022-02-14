
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct phy_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct phy_device*,int ,int) ;
 int FUNC_4 (struct phy_device*,int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct phy_device *VAR_6, u32 VAR_7, u8 VAR_8,
          u32 VAR_9)
{
 unsigned long VAR_10;
 u32 VAR_11;
 int VAR_12;

 VAR_12 = FUNC_4(VAR_6, VAR_3, VAR_7,
      VAR_9 | (1 << VAR_8));
 if (VAR_12)
  return -VAR_0;

 VAR_10 = VAR_5 + FUNC_0(VAR_4);
 do {
  FUNC_2(500, 1000);
  VAR_11 = FUNC_3(VAR_6, VAR_3, VAR_7);

  if (VAR_11 == 0xffffffff)
   return -VAR_1;

 } while (FUNC_1(VAR_5, VAR_10) && (VAR_11 & VAR_9));

 if (VAR_11 & VAR_9)
  return -VAR_2;

 return 0;
}
