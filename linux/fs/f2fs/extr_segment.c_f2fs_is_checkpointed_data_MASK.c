
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sit_info {int sentry_lock; } ;
struct seg_entry {int ckpt_valid_map; } ;
struct f2fs_sb_info {int dummy; } ;
typedef int block_t ;


 unsigned int FUNC_0 (struct f2fs_sb_info*,int ) ;
 unsigned int FUNC_1 (struct f2fs_sb_info*,int ) ;
 struct sit_info* FUNC_2 (struct f2fs_sb_info*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (unsigned int,int ) ;
 struct seg_entry* FUNC_6 (struct f2fs_sb_info*,unsigned int) ;
 int FUNC_7 (int *) ;

bool FUNC_8(struct f2fs_sb_info *VAR_0, block_t VAR_1)
{
 struct sit_info *VAR_2 = FUNC_2(VAR_0);
 unsigned int VAR_3, VAR_4;
 struct seg_entry *VAR_5;
 bool VAR_6 = 0;

 if (!FUNC_3(VAR_1))
  return 1;

 FUNC_4(&VAR_2->sentry_lock);

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 VAR_5 = FUNC_6(VAR_0, VAR_3);
 VAR_4 = FUNC_0(VAR_0, VAR_1);

 if (FUNC_5(VAR_4, VAR_5->ckpt_valid_map))
  VAR_6 = 1;

 FUNC_7(&VAR_2->sentry_lock);

 return VAR_6;
}
