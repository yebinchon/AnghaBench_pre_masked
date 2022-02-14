
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsnotify_group {scalar_t__ overflow_event; TYPE_1__* ops; int user_waits; int notification_waitq; } ;
struct TYPE_2__ {int (* free_event ) (scalar_t__) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fsnotify_group*,int ) ;
 int FUNC_2 (struct fsnotify_group*) ;
 int FUNC_3 (struct fsnotify_group*) ;
 int FUNC_4 (struct fsnotify_group*) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int) ;

void FUNC_8(struct fsnotify_group *VAR_1)
{






 FUNC_3(VAR_1);


 FUNC_1(VAR_1, VAR_0);






 FUNC_7(VAR_1->notification_waitq, !FUNC_0(&VAR_1->user_waits));







 FUNC_5();







 FUNC_2(VAR_1);





 if (VAR_1->overflow_event)
  VAR_1->ops->free_event(VAR_1->overflow_event);

 FUNC_4(VAR_1);
}
