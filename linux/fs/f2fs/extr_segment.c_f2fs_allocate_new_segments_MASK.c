
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
struct curseg_info {unsigned int segno; } ;
struct TYPE_4__ {int sentry_lock; TYPE_1__* s_ops; } ;
struct TYPE_3__ {int (* allocate_segment ) (struct f2fs_sb_info*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct curseg_info* FUNC_0 (struct f2fs_sb_info*,int) ;
 TYPE_2__* FUNC_1 (struct f2fs_sb_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct f2fs_sb_info*,unsigned int) ;
 int FUNC_4 (struct f2fs_sb_info*,int,int) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct f2fs_sb_info *VAR_2)
{
 struct curseg_info *VAR_3;
 unsigned int VAR_4;
 int VAR_5;

 FUNC_2(&FUNC_1(VAR_2)->sentry_lock);

 for (VAR_5 = VAR_1; VAR_5 <= VAR_0; VAR_5++) {
  VAR_3 = FUNC_0(VAR_2, VAR_5);
  VAR_4 = VAR_3->segno;
  FUNC_1(VAR_2)->s_ops->allocate_segment(VAR_2, VAR_5, 1);
  FUNC_3(VAR_2, VAR_4);
 }

 FUNC_5(&FUNC_1(VAR_2)->sentry_lock);
}
