
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bt431_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int FUNC_1 (struct bt431_regs*,int ) ;
 int FUNC_2 (struct bt431_regs*,int) ;

__attribute__((used)) static inline void FUNC_3(struct bt431_regs *VAR_3,
        const char *VAR_4, const char *VAR_5,
        u16 VAR_6, u16 VAR_7, u16 VAR_8)
{
 u16 VAR_9, VAR_10;
 int VAR_11;

 VAR_11 = 0;
 VAR_7 = FUNC_0(VAR_7, 8);
 FUNC_1(VAR_3, VAR_1);
 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
  for (VAR_9 = 0; VAR_9 < VAR_0 / 8; VAR_9++) {
   u16 VAR_12 = 0;

   if (VAR_10 < VAR_8 && VAR_9 < VAR_7) {
    VAR_12 = VAR_5[VAR_11];
    if (VAR_6 == VAR_2)
     VAR_12 = (VAR_12 << 8) | (VAR_12 ^ VAR_4[VAR_11]);
    else
     VAR_12 = (VAR_12 << 8) | (VAR_12 & VAR_4[VAR_11]);
    VAR_11++;
   }
   FUNC_2(VAR_3, VAR_12);
  }
}
