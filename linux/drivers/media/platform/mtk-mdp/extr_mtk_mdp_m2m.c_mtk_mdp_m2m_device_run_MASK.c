
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_mdp_ctx {int work; TYPE_1__* mdp_dev; } ;
struct TYPE_2__ {int job_wq; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct mtk_mdp_ctx *VAR_1 = VAR_0;

 FUNC_0(VAR_1->mdp_dev->job_wq, &VAR_1->work);
}
