
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_state {int gs_tgh_first_remote; } ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static inline int FUNC_1(struct gru_state *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_0 - VAR_1->gs_tgh_first_remote;
 VAR_2 = FUNC_0() % VAR_2;
 VAR_2 += VAR_1->gs_tgh_first_remote;
 return VAR_2;
}
