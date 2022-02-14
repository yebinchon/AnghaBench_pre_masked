
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct compstat {int dummy; } ;
struct ppp_deflate_state {struct compstat stats; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, struct compstat *VAR_1)
{
 struct ppp_deflate_state *VAR_2 = (struct ppp_deflate_state *) VAR_0;

 *VAR_1 = VAR_2->stats;
}
