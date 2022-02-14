
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
struct curseg_info {unsigned int segno; int curseg_mutex; } ;
struct TYPE_4__ {int sentry_lock; } ;
struct TYPE_3__ {int curseg_lock; } ;


 struct curseg_info* FUNC_0 (struct f2fs_sb_info*,int) ;
 TYPE_2__* FUNC_1 (struct f2fs_sb_info*) ;
 TYPE_1__* FUNC_2 (struct f2fs_sb_info*) ;
 int FUNC_3 (struct f2fs_sb_info*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct f2fs_sb_info*) ;
 int FUNC_7 (struct f2fs_sb_info*,char*,int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_8 (struct f2fs_sb_info*,int) ;
 int FUNC_9 (struct f2fs_sb_info*,unsigned int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct f2fs_sb_info*,int,int) ;
 int FUNC_13 (struct f2fs_sb_info*,struct curseg_info*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

void FUNC_16(struct f2fs_sb_info *VAR_0, int VAR_1,
     unsigned int VAR_2, unsigned int VAR_3)
{
 struct curseg_info *VAR_4 = FUNC_0(VAR_0, VAR_1);
 unsigned int VAR_5;

 FUNC_4(&FUNC_2(VAR_0)->curseg_lock);
 FUNC_10(&VAR_4->curseg_mutex);
 FUNC_5(&FUNC_1(VAR_0)->sentry_lock);

 VAR_5 = FUNC_0(VAR_0, VAR_1)->segno;
 if (VAR_5 < VAR_2 || VAR_5 > VAR_3)
  goto unlock;

 if (FUNC_6(VAR_0) && FUNC_8(VAR_0, VAR_1))
  FUNC_3(VAR_0, VAR_1);
 else
  FUNC_12(VAR_0, VAR_1, 1);

 FUNC_13(VAR_0, VAR_4);

 FUNC_9(VAR_0, VAR_5);
unlock:
 FUNC_15(&FUNC_1(VAR_0)->sentry_lock);

 if (VAR_5 != VAR_4->segno)
  FUNC_7(VAR_0, "For resize: curseg of type %d: %u ==> %u",
       VAR_1, VAR_5, VAR_4->segno);

 FUNC_11(&VAR_4->curseg_mutex);
 FUNC_14(&FUNC_2(VAR_0)->curseg_lock);
}
