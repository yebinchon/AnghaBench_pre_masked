
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct aq_nic_s {int service_task; int service_timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 struct aq_nic_s* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 struct aq_nic_s* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_4)
{
 struct aq_nic_s *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_3);

 FUNC_2(&VAR_5->service_timer, VAR_1 + VAR_0);

 FUNC_0(&VAR_5->service_task);
}
