
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct ixgbe_adapter {int flags; int service_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ixgbe_adapter* VAR_2 ;
 struct ixgbe_adapter* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_5)
{
 struct ixgbe_adapter *VAR_6 = FUNC_0(VAR_6, VAR_5, VAR_4);
 unsigned long VAR_7;


 if (VAR_6->flags & VAR_1)
  VAR_7 = VAR_0 / 10;
 else
  VAR_7 = VAR_0 * 2;


 FUNC_2(&VAR_6->service_timer, VAR_7 + VAR_3);

 FUNC_1(VAR_6);
}
