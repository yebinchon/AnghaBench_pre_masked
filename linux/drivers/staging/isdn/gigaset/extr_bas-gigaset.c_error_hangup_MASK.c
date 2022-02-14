
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cardstate {int dummy; } ;
struct bc_state {int at_state; struct cardstate* cs; } ;


 int VAR_0 ;
 int FUNC_0 (struct cardstate*,int *,int ,int *,int ,int *) ;
 int FUNC_1 (struct cardstate*) ;

__attribute__((used)) static inline void FUNC_2(struct bc_state *VAR_1)
{
 struct cardstate *VAR_2 = VAR_1->cs;

 FUNC_0(VAR_2, &VAR_1->at_state, VAR_0, ((void*)0), 0, ((void*)0));
 FUNC_1(VAR_2);
}
