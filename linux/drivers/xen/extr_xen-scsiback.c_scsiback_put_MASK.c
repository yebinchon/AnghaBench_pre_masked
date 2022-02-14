
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vscsibk_info {int waiting_to_free; int nr_unreplied_reqs; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct vscsibk_info *VAR_0)
{
 if (FUNC_0(&VAR_0->nr_unreplied_reqs))
  FUNC_1(&VAR_0->waiting_to_free);
}
