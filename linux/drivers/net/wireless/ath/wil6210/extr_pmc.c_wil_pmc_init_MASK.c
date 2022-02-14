
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct wil6210_priv {TYPE_1__ pmc; } ;
struct pmc_ctx {int dummy; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct wil6210_priv *VAR_0)
{
 FUNC_0(&VAR_0->pmc, 0, sizeof(struct pmc_ctx));
 FUNC_1(&VAR_0->pmc.lock);
}
