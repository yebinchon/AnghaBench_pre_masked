
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {void* ns_watermark; void* ns_interval; void* ns_resgid; void* ns_resuid; } ;
struct super_block {int s_flags; void* s_magic; struct the_nilfs* s_fs_info; } ;
struct nilfs_super_block {int s_c_block_max; int s_c_interval; int s_def_resgid; int s_def_resuid; int s_magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct super_block*,struct nilfs_super_block*) ;
 int FUNC_3 (char*,struct super_block*,int ) ;

int FUNC_4(struct super_block *VAR_2,
     struct nilfs_super_block *VAR_3,
     char *VAR_4)
{
 struct the_nilfs *VAR_5 = VAR_2->s_fs_info;

 VAR_2->s_magic = FUNC_0(VAR_3->s_magic);






 FUNC_2(VAR_2, VAR_3);

 VAR_5->ns_resuid = FUNC_0(VAR_3->s_def_resuid);
 VAR_5->ns_resgid = FUNC_0(VAR_3->s_def_resgid);
 VAR_5->ns_interval = FUNC_1(VAR_3->s_c_interval);
 VAR_5->ns_watermark = FUNC_1(VAR_3->s_c_block_max);

 return !FUNC_3(VAR_4, VAR_2, 0) ? -VAR_0 : 0;
}
