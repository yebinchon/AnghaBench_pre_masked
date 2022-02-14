
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct fm10k_intfc {int service_timer; } ;


 int VAR_0 ;
 int FUNC_0 (struct fm10k_intfc*) ;
 struct fm10k_intfc* FUNC_1 (int ,struct timer_list*,int ) ;
 struct fm10k_intfc* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_4)
{
 struct fm10k_intfc *VAR_5 = FUNC_1(VAR_5, VAR_4,
         VAR_3);


 FUNC_2(&VAR_5->service_timer, (VAR_0 * 2) + VAR_2);

 FUNC_0(VAR_5);
}
