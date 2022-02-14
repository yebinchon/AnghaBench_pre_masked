
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i740fb_par {int regs; } ;


 int FUNC_0 (struct i740fb_par*,int ,int) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static inline void FUNC_2(struct i740fb_par *VAR_0, u16 VAR_1, u8 VAR_2,
       u8 VAR_3, u8 VAR_4)
{
 FUNC_1(VAR_0->regs, VAR_1, VAR_2, (VAR_3 & VAR_4)
  | (FUNC_0(VAR_0, VAR_1, VAR_2) & ~VAR_4));
}
