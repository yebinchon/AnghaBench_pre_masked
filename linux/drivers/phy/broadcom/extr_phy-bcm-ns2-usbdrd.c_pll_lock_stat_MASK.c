
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ns2_phy_driver {int icfgdrd_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2(u32 VAR_2, int VAR_3,
    struct ns2_phy_driver *VAR_4)
{
 int VAR_5 = VAR_1;
 u32 VAR_6;

 do {
  FUNC_1(1);
  VAR_6 = FUNC_0(VAR_4->icfgdrd_regs + VAR_2);
  if (VAR_6 & VAR_3)
   return 0;
 } while (--VAR_5 > 0);

 return -VAR_0;
}
