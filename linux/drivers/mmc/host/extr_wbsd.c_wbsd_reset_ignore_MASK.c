
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbsd_host {int lock; int card_tasklet; int flags; } ;
struct timer_list {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 struct wbsd_host* FUNC_2 (int ,struct timer_list*,int ) ;
 struct wbsd_host* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_3)
{
 struct wbsd_host *VAR_4 = FUNC_2(VAR_4, VAR_3, VAR_2);

 FUNC_0(VAR_4 == ((void*)0));

 FUNC_1("Resetting card detection ignore\n");

 FUNC_3(&VAR_4->lock);

 VAR_4->flags &= ~VAR_0;





 FUNC_5(&VAR_4->card_tasklet);

 FUNC_4(&VAR_4->lock);
}
