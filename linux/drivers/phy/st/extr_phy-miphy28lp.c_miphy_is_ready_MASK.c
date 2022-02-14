
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct miphy28lp_phy {scalar_t__ type; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 () ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,unsigned long) ;

__attribute__((used)) static inline int FUNC_3(struct miphy28lp_phy *VAR_8)
{
 unsigned long VAR_9 = VAR_7 + 5 * VAR_3;
 u8 VAR_10 = VAR_1 | VAR_2;
 u8 VAR_11;





 if (VAR_8->type == VAR_6)
  VAR_10 |= VAR_5;

 do {
  VAR_11 = FUNC_1(VAR_8->base + VAR_4);
  if ((VAR_11 & VAR_10) != VAR_10)
   FUNC_0();
  else
   return 0;
 } while (!FUNC_2(VAR_7, VAR_9));

 return -VAR_0;
}
