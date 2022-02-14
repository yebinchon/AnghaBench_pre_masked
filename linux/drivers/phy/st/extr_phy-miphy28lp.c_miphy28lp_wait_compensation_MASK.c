
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct miphy28lp_phy {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int,unsigned long) ;

__attribute__((used)) static inline int FUNC_3(struct miphy28lp_phy *VAR_5)
{
 unsigned long VAR_6 = VAR_4 + 5 * VAR_2;
 u8 VAR_7;


 do {
  VAR_7 = FUNC_1(VAR_5->base + VAR_3);

  if (FUNC_2(VAR_4, VAR_6))
   return -VAR_1;
  FUNC_0();
 } while (!(VAR_7 & VAR_0));

 return 0;
}
