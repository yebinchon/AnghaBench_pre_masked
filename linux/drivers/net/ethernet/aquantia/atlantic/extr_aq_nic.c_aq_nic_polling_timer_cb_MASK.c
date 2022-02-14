
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct aq_vec_s {int dummy; } ;
struct aq_nic_s {unsigned int aq_vecs; int polling_timer; struct aq_vec_s** aq_vec; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int,void*) ;
 struct aq_nic_s* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_2 ;
 struct aq_nic_s* VAR_3 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_4)
{
 struct aq_nic_s *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_2);
 struct aq_vec_s *VAR_6 = ((void*)0);
 unsigned int VAR_7 = 0U;

 for (VAR_7 = 0U, VAR_6 = VAR_5->aq_vec[0];
  VAR_5->aq_vecs > VAR_7; ++VAR_7, VAR_6 = VAR_5->aq_vec[VAR_7])
  FUNC_0(VAR_7, (void *)VAR_6);

 FUNC_2(&VAR_5->polling_timer, VAR_1 +
    VAR_0);
}
