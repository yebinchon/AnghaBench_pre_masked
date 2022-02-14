
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_flags; int s_xattr; int * s_export_op; int * s_op; TYPE_1__* s_mtd; struct jffs2_sb_info* s_fs_info; } ;
struct jffs2_sb_info {int inocache_lock; int erase_completion_lock; int inocache_wq; int erase_wait; int erase_free_sem; int alloc_sem; struct super_block* os_priv; TYPE_1__* mtd; } ;
struct fs_context {int dummy; } ;
struct TYPE_2__ {int name; int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*,int ,int ) ;
 int FUNC_2 (struct super_block*,struct fs_context*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_5, struct fs_context *VAR_6)
{
 struct jffs2_sb_info *VAR_7 = VAR_5->s_fs_info;

 FUNC_1(1, "jffs2_get_sb_mtd():"
    " New superblock for device %d (\"%s\")\n",
    VAR_5->s_mtd->index, VAR_5->s_mtd->name);

 VAR_7->mtd = VAR_5->s_mtd;
 VAR_7->os_priv = VAR_5;



 FUNC_3(&VAR_7->alloc_sem);
 FUNC_3(&VAR_7->erase_free_sem);
 FUNC_0(&VAR_7->erase_wait);
 FUNC_0(&VAR_7->inocache_wq);
 FUNC_4(&VAR_7->erase_completion_lock);
 FUNC_4(&VAR_7->inocache_lock);

 VAR_5->s_op = &VAR_3;
 VAR_5->s_export_op = &VAR_2;
 VAR_5->s_flags = VAR_5->s_flags | VAR_0;
 VAR_5->s_xattr = VAR_4;



 return FUNC_2(VAR_5, VAR_6);
}
