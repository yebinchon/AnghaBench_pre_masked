
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
struct cp_control {int trim_start; int trim_end; } ;
typedef int __u64 ;
struct TYPE_2__ {int sentry_lock; } ;


 TYPE_1__* FUNC_0 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_1 (struct f2fs_sb_info*,struct cp_control*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

bool FUNC_4(struct f2fs_sb_info *VAR_0,
      struct cp_control *VAR_1)
{
 __u64 VAR_2 = VAR_1->trim_start;
 bool VAR_3 = 0;

 FUNC_2(&FUNC_0(VAR_0)->sentry_lock);
 for (; VAR_1->trim_start <= VAR_1->trim_end; VAR_1->trim_start++) {
  if (FUNC_1(VAR_0, VAR_1, 1)) {
   VAR_3 = 1;
   break;
  }
 }
 FUNC_3(&FUNC_0(VAR_0)->sentry_lock);

 VAR_1->trim_start = VAR_2;
 return VAR_3;
}
