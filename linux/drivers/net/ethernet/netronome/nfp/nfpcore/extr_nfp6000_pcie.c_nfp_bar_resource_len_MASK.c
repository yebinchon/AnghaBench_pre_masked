
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_bar {int index; TYPE_1__* nfp; } ;
typedef int resource_size_t ;
struct TYPE_2__ {int pdev; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static resource_size_t FUNC_1(struct nfp_bar *VAR_0)
{
 return FUNC_0(VAR_0->nfp->pdev, (VAR_0->index / 8) * 2) / 8;
}
