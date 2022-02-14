
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct pn533_poll_modulations {int dummy; } ;
struct pn533 {size_t poll_mod_count; struct pn533_poll_modulations** poll_mod_active; } ;


 int * VAR_0 ;

__attribute__((used)) static void FUNC_0(struct pn533 *VAR_1, u8 VAR_2)
{
 VAR_1->poll_mod_active[VAR_1->poll_mod_count] =
  (struct pn533_poll_modulations *)&VAR_0[VAR_2];
 VAR_1->poll_mod_count++;
}
