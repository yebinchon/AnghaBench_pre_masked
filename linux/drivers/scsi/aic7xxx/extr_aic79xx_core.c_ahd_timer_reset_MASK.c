
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {scalar_t__ expires; } ;


 int VAR_0 ;
 int FUNC_0 (struct timer_list*) ;
 int FUNC_1 (struct timer_list*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct timer_list *VAR_2, int VAR_3)
{
 FUNC_1(VAR_2);
 VAR_2->expires = VAR_1 + (VAR_3 * VAR_0)/1000000;
 FUNC_0(VAR_2);
}
