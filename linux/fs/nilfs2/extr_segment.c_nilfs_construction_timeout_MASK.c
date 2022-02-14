
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct nilfs_sc_info {int sc_timer_task; } ;


 struct nilfs_sc_info* FUNC_0 (int ,struct timer_list*,int ) ;
 int VAR_0 ;
 struct nilfs_sc_info* VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 struct nilfs_sc_info *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0);

 FUNC_1(VAR_3->sc_timer_task);
}
