
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct atyfb_par {unsigned int fifo_space; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct atyfb_par*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(u16 VAR_1, struct atyfb_par *VAR_2)
{
 unsigned VAR_3 = VAR_2->fifo_space;
 while (VAR_1 > VAR_3) {
  VAR_3 = 16 - FUNC_1(FUNC_0(VAR_0, VAR_2) & 0xffff);
 }
 VAR_2->fifo_space = VAR_3 - VAR_1;
}
