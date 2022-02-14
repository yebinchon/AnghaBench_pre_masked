
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at_state_t {int timer_index; int cs; scalar_t__ timer_expires; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,struct at_state_t*,scalar_t__) ;
 int FUNC_1 (int ,struct at_state_t*,int ,int *,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct at_state_t *VAR_2)
{
 if (!VAR_2->timer_expires)
  return 0;

 if (--VAR_2->timer_expires) {
  FUNC_0(VAR_0, "decreased timer of %p to %lu",
   VAR_2, VAR_2->timer_expires);
  return 0;
 }

 FUNC_1(VAR_2->cs, VAR_2, VAR_1, ((void*)0),
     VAR_2->timer_index, ((void*)0));
 return 1;
}
