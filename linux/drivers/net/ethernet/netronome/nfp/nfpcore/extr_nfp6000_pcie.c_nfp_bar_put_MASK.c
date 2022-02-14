
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_bar {int refcnt; } ;
struct nfp6000_pcie {int bar_waiters; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct nfp6000_pcie *VAR_0, struct nfp_bar *VAR_1)
{
 if (FUNC_0(&VAR_1->refcnt))
  FUNC_1(&VAR_0->bar_waiters);
}
