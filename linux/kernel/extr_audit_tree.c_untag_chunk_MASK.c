
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsnotify_mark {int flags; } ;
struct audit_chunk {int hash; int trees; } ;
struct TYPE_2__ {int mark_mutex; } ;


 int VAR_0 ;
 struct audit_chunk* FUNC_0 (int) ;
 int FUNC_1 (struct audit_chunk*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (struct audit_chunk*) ;
 int FUNC_3 (struct fsnotify_mark*) ;
 int FUNC_4 (struct fsnotify_mark*) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct audit_chunk* FUNC_7 (struct fsnotify_mark*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct audit_chunk*,struct audit_chunk*) ;
 int FUNC_11 (struct fsnotify_mark*,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct audit_chunk *VAR_3, struct fsnotify_mark *VAR_4)
{
 struct audit_chunk *VAR_5;
 int VAR_6;

 FUNC_8(&VAR_1->mark_mutex);




 if (!(VAR_4->flags & VAR_0) ||
     FUNC_7(VAR_4) != VAR_3)
  goto out_mutex;

 VAR_6 = FUNC_2(VAR_3);
 if (!VAR_6) {
  FUNC_12(&VAR_2);
  FUNC_5(&VAR_3->trees);
  FUNC_6(&VAR_3->hash);
  FUNC_11(VAR_4, ((void*)0));
  FUNC_13(&VAR_2);
  FUNC_3(VAR_4);
  FUNC_9(&VAR_1->mark_mutex);
  FUNC_1(VAR_3);
  FUNC_4(VAR_4);
  return;
 }

 VAR_5 = FUNC_0(VAR_6);
 if (!VAR_5)
  goto out_mutex;

 FUNC_12(&VAR_2);




 FUNC_10(VAR_5, VAR_3);
 FUNC_13(&VAR_2);
 FUNC_9(&VAR_1->mark_mutex);
 FUNC_1(VAR_3);
 return;

out_mutex:
 FUNC_9(&VAR_1->mark_mutex);
}
