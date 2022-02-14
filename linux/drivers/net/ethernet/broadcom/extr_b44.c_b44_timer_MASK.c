
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct b44 {int timer; int lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct b44*) ;
 int FUNC_1 (struct b44*) ;
 struct b44* VAR_1 ;
 struct b44* FUNC_2 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_4)
{
 struct b44 *VAR_5 = FUNC_2(VAR_5, VAR_4, VAR_3);

 FUNC_5(&VAR_5->lock);

 FUNC_0(VAR_5);

 FUNC_1(VAR_5);

 FUNC_6(&VAR_5->lock);

 FUNC_3(&VAR_5->timer, FUNC_4(VAR_2 + VAR_0));
}
