
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct enic {int notify_timer; } ;


 scalar_t__ VAR_0 ;
 struct enic* VAR_1 ;
 int FUNC_0 (struct enic*) ;
 struct enic* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_4)
{
 struct enic *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_3);

 FUNC_0(VAR_5);

 FUNC_2(&VAR_5->notify_timer,
  FUNC_3(VAR_2 + VAR_0));
}
