
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsnotify_mark {int connector; } ;
struct fsnotify_group {int mark_mutex; } ;
typedef int fsnotify_connp_t ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (struct fsnotify_mark*,int,unsigned int,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fsnotify_mark*) ;
 struct fsnotify_mark* FUNC_3 (int *,struct fsnotify_group*) ;
 int FUNC_4 (struct fsnotify_mark*) ;
 int FUNC_5 (struct fsnotify_mark*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct fsnotify_group *VAR_1,
    fsnotify_connp_t *VAR_2, __u32 VAR_3,
    unsigned int VAR_4)
{
 struct fsnotify_mark *VAR_5 = ((void*)0);
 __u32 VAR_6;
 int VAR_7;

 FUNC_7(&VAR_1->mark_mutex);
 VAR_5 = FUNC_3(VAR_2, VAR_1);
 if (!VAR_5) {
  FUNC_8(&VAR_1->mark_mutex);
  return -VAR_0;
 }

 VAR_6 = FUNC_0(VAR_5, VAR_3, VAR_4,
       &VAR_7);
 if (VAR_6 & FUNC_1(VAR_5->connector))
  FUNC_6(VAR_5->connector);
 if (VAR_7)
  FUNC_2(VAR_5);
 FUNC_8(&VAR_1->mark_mutex);
 if (VAR_7)
  FUNC_4(VAR_5);


 FUNC_5(VAR_5);
 return 0;
}
