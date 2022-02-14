
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pn533 {int poll_mod_curr; int poll_mod_count; } ;



__attribute__((used)) static inline void FUNC_0(struct pn533 *VAR_0)
{
 VAR_0->poll_mod_curr = (VAR_0->poll_mod_curr + 1) % VAR_0->poll_mod_count;
}
