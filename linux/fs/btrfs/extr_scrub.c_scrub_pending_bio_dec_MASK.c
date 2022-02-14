
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scrub_ctx {int list_wait; int bios_in_flight; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct scrub_ctx*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct scrub_ctx *VAR_0)
{
 FUNC_0(&VAR_0->bios_in_flight);
 FUNC_2(&VAR_0->list_wait);
 FUNC_1(VAR_0);
}
