
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct atyfb_par {int blitter_may_be_busy; } ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,struct atyfb_par*) ;
 int FUNC_1 (int,struct atyfb_par*) ;

__attribute__((used)) static inline void FUNC_2(s16 VAR_2, s16 VAR_3, u16 VAR_4, u16 VAR_5,
        struct atyfb_par *VAR_6)
{

 FUNC_1(2, VAR_6);
 FUNC_0(VAR_1, (VAR_2 << 16) | VAR_3, VAR_6);
 FUNC_0(VAR_0, (VAR_4 << 16) | VAR_5, VAR_6);
 VAR_6->blitter_may_be_busy = 1;
}
