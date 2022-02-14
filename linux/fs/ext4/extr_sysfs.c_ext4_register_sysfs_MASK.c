
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_id; } ;
struct ext4_sb_info {scalar_t__ s_proc; int s_kobj_unregister; int s_kobj; } ;


 struct ext4_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,scalar_t__,int *,struct super_block*) ;
 int FUNC_5 (char*,int ,scalar_t__,int ,struct super_block*) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct super_block *VAR_7)
{
 struct ext4_sb_info *VAR_8 = FUNC_0(VAR_7);
 int VAR_9;

 FUNC_1(&VAR_8->s_kobj_unregister);
 VAR_9 = FUNC_2(&VAR_8->s_kobj, &VAR_4, VAR_3,
       "%s", VAR_7->s_id);
 if (VAR_9) {
  FUNC_3(&VAR_8->s_kobj);
  FUNC_7(&VAR_8->s_kobj_unregister);
  return VAR_9;
 }

 if (VAR_2)
  VAR_8->s_proc = FUNC_6(VAR_7->s_id, VAR_2);
 if (VAR_8->s_proc) {
  FUNC_5("options", VAR_0, VAR_8->s_proc,
    VAR_6, VAR_7);
  FUNC_5("es_shrinker_info", VAR_0,
    VAR_8->s_proc, VAR_5,
    VAR_7);
  FUNC_4("mb_groups", VAR_0, VAR_8->s_proc,
    &VAR_1, VAR_7);
 }
 return 0;
}
