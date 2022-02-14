
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsnotify_mark {int dummy; } ;
struct TYPE_2__ {scalar_t__ max_marks; } ;
struct fsnotify_group {TYPE_1__ fanotify_data; int num_marks; } ;
typedef int fsnotify_connp_t ;
typedef int __kernel_fsid_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct fsnotify_mark* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (struct fsnotify_mark*,int *,unsigned int,int ,int *) ;
 int FUNC_3 (struct fsnotify_mark*,struct fsnotify_group*) ;
 int FUNC_4 (struct fsnotify_mark*) ;
 struct fsnotify_mark* FUNC_5 (int ,int ) ;

__attribute__((used)) static struct fsnotify_mark *FUNC_6(struct fsnotify_group *VAR_4,
         fsnotify_connp_t *VAR_5,
         unsigned int VAR_6,
         __kernel_fsid_t *VAR_7)
{
 struct fsnotify_mark *VAR_8;
 int VAR_9;

 if (FUNC_1(&VAR_4->num_marks) > VAR_4->fanotify_data.max_marks)
  return FUNC_0(-VAR_1);

 VAR_8 = FUNC_5(VAR_3, VAR_2);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 FUNC_3(VAR_8, VAR_4);
 VAR_9 = FUNC_2(VAR_8, VAR_5, VAR_6, 0, VAR_7);
 if (VAR_9) {
  FUNC_4(VAR_8);
  return FUNC_0(VAR_9);
 }

 return VAR_8;
}
