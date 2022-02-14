
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad2s1210_state {int resolution; int * gpios; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int ** VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct ad2s1210_state *VAR_3)
{
 FUNC_0(VAR_3->gpios[VAR_0],
   VAR_2[(VAR_3->resolution - 10) / 2][0]);
 FUNC_0(VAR_3->gpios[VAR_1],
   VAR_2[(VAR_3->resolution - 10) / 2][1]);
}
