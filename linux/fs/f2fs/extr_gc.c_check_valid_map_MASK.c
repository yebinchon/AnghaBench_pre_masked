
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sit_info {int sentry_lock; } ;
struct seg_entry {int cur_valid_map; } ;
struct f2fs_sb_info {int dummy; } ;


 struct sit_info* FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ) ;
 struct seg_entry* FUNC_3 (struct f2fs_sb_info*,unsigned int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct f2fs_sb_info *VAR_0,
    unsigned int VAR_1, int VAR_2)
{
 struct sit_info *VAR_3 = FUNC_0(VAR_0);
 struct seg_entry *VAR_4;
 int VAR_5;

 FUNC_1(&VAR_3->sentry_lock);
 VAR_4 = FUNC_3(VAR_0, VAR_1);
 VAR_5 = FUNC_2(VAR_2, VAR_4->cur_valid_map);
 FUNC_4(&VAR_3->sentry_lock);
 return VAR_5;
}
