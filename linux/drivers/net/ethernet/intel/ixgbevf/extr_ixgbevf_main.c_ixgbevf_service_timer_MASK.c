
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct ixgbevf_adapter {int service_timer; } ;


 int VAR_0 ;
 struct ixgbevf_adapter* VAR_1 ;
 struct ixgbevf_adapter* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct ixgbevf_adapter*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_4)
{
 struct ixgbevf_adapter *VAR_5 = FUNC_0(VAR_5, VAR_4,
           VAR_3);


 FUNC_2(&VAR_5->service_timer, (VAR_0 * 2) + VAR_2);

 FUNC_1(VAR_5);
}
