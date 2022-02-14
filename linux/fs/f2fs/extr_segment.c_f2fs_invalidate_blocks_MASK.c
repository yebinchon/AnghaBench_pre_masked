
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sit_info {int sentry_lock; } ;
struct f2fs_sb_info {int dummy; } ;
typedef scalar_t__ block_t ;


 unsigned int FUNC_0 (struct f2fs_sb_info*,scalar_t__) ;
 int FUNC_1 (struct f2fs_sb_info*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sit_info* FUNC_2 (struct f2fs_sb_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct f2fs_sb_info*,int) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct f2fs_sb_info*,unsigned int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct f2fs_sb_info*,scalar_t__,int) ;

void FUNC_9(struct f2fs_sb_info *VAR_2, block_t VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_2, VAR_3);
 struct sit_info *VAR_5 = FUNC_2(VAR_2);

 FUNC_4(VAR_2, VAR_3 == VAR_1);
 if (VAR_3 == VAR_0)
  return;

 FUNC_5(FUNC_1(VAR_2), VAR_3, VAR_3);


 FUNC_3(&VAR_5->sentry_lock);

 FUNC_8(VAR_2, VAR_3, -1);


 FUNC_6(VAR_2, VAR_4);

 FUNC_7(&VAR_5->sentry_lock);
}
