
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_struct {int fanotify_listeners; } ;
struct TYPE_2__ {struct user_struct* user; } ;
struct fsnotify_group {TYPE_1__ fanotify_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct user_struct*) ;

__attribute__((used)) static void FUNC_2(struct fsnotify_group *VAR_0)
{
 struct user_struct *VAR_1;

 VAR_1 = VAR_0->fanotify_data.user;
 FUNC_0(&VAR_1->fanotify_listeners);
 FUNC_1(VAR_1);
}
