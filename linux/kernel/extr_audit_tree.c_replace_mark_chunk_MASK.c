
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsnotify_mark {int dummy; } ;
struct audit_chunk {struct fsnotify_mark* mark; } ;
struct TYPE_2__ {struct audit_chunk* chunk; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct fsnotify_mark*) ;
 int VAR_0 ;
 struct audit_chunk* FUNC_2 (struct fsnotify_mark*) ;

__attribute__((used)) static void FUNC_3(struct fsnotify_mark *VAR_1,
          struct audit_chunk *VAR_2)
{
 struct audit_chunk *VAR_3;

 FUNC_0(&VAR_0);
 VAR_3 = FUNC_2(VAR_1);
 FUNC_1(VAR_1)->chunk = VAR_2;
 if (VAR_2)
  VAR_2->mark = VAR_1;
 if (VAR_3)
  VAR_3->mark = ((void*)0);
}
