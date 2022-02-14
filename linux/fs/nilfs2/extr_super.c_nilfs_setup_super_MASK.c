
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_mount_state; int ns_sbsize; } ;
struct super_block {struct the_nilfs* s_fs_info; } ;
struct nilfs_super_block {void* s_state; int s_mtime; void* s_mnt_count; void* s_max_mnt_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct nilfs_super_block*,struct nilfs_super_block*,int ) ;
 int FUNC_5 (struct super_block*,int ) ;
 int FUNC_6 (struct super_block*,int ,char*) ;
 struct nilfs_super_block** FUNC_7 (struct super_block*,int ) ;

__attribute__((used)) static int FUNC_8(struct super_block *VAR_6, int VAR_7)
{
 struct the_nilfs *VAR_8 = VAR_6->s_fs_info;
 struct nilfs_super_block **VAR_9;
 int VAR_10;
 int VAR_11;


 VAR_9 = FUNC_7(VAR_6, 0);
 if (!VAR_9)
  return -VAR_0;

 if (!VAR_7)
  goto skip_mount_setup;

 VAR_10 = FUNC_3(VAR_9[0]->s_max_mnt_count);
 VAR_11 = FUNC_3(VAR_9[0]->s_mnt_count);

 if (VAR_8->ns_mount_state & VAR_3) {
  FUNC_6(VAR_6, VAR_1, "mounting fs with errors");




 }
 if (!VAR_10)
  VAR_9[0]->s_max_mnt_count = FUNC_0(VAR_2);

 VAR_9[0]->s_mnt_count = FUNC_0(VAR_11 + 1);
 VAR_9[0]->s_mtime = FUNC_1(FUNC_2());

skip_mount_setup:
 VAR_9[0]->s_state =
  FUNC_0(FUNC_3(VAR_9[0]->s_state) & ~VAR_5);

 if (VAR_9[1])
  FUNC_4(VAR_9[1], VAR_9[0], VAR_8->ns_sbsize);
 return FUNC_5(VAR_6, VAR_4);
}
