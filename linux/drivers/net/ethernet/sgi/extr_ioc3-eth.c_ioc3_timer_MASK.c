
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct ioc3_private {TYPE_1__ ioc3_timer; int mii; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct ioc3_private* FUNC_1 (int ,struct timer_list*,void (*) (struct timer_list*)) ;
 int FUNC_2 (struct ioc3_private*) ;
 struct ioc3_private* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,int,int ) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_3)
{
 struct ioc3_private *VAR_4 = FUNC_1(VAR_4, VAR_3, FUNC_4);


 FUNC_3(&VAR_4->mii, 1, 0);
 FUNC_2(VAR_4);

 VAR_4->ioc3_timer.expires = VAR_2 + ((12 * VAR_0) / 10);
 FUNC_0(&VAR_4->ioc3_timer);
}
