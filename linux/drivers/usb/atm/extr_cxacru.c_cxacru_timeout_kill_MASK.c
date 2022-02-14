
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct cxacru_timer {int urb; } ;


 struct cxacru_timer* FUNC_0 (int ,struct timer_list*,int ) ;
 struct cxacru_timer* VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_1)
{
 struct cxacru_timer *VAR_2 = FUNC_0(VAR_2, VAR_1, VAR_2);

 FUNC_1(VAR_2->urb);
}
