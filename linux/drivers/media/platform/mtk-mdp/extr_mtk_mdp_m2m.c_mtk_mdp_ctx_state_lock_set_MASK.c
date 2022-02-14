
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_mdp_ctx {int slock; int state; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct mtk_mdp_ctx *VAR_0, u32 VAR_1)
{
 FUNC_0(&VAR_0->slock);
 VAR_0->state |= VAR_1;
 FUNC_1(&VAR_0->slock);
}
