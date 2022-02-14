
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct sm_ftl {int flush_work; } ;


 int VAR_0 ;
 struct sm_ftl* FUNC_0 (int ,struct timer_list*,int ) ;
 struct sm_ftl* VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_3)
{
 struct sm_ftl *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);
 FUNC_1(VAR_0, &VAR_4->flush_work);
}
