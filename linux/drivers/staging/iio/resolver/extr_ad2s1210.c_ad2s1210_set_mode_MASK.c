
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad2s1210_state {int mode; int * gpios; } ;
typedef enum ad2s1210_mode { ____Placeholder_ad2s1210_mode } ad2s1210_mode ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int ** VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline void FUNC_1(enum ad2s1210_mode VAR_3,
         struct ad2s1210_state *VAR_4)
{
 FUNC_0(VAR_4->gpios[VAR_0], VAR_2[VAR_3][0]);
 FUNC_0(VAR_4->gpios[VAR_1], VAR_2[VAR_3][1]);
 VAR_4->mode = VAR_3;
}
