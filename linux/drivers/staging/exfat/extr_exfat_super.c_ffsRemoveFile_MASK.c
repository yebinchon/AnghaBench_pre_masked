
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct fs_info_t {int cluster_size_bits; scalar_t__ vol_type; int v_sem; scalar_t__ dev_ejected; TYPE_2__* fs_func; } ;
struct TYPE_4__ {int flags; scalar_t__ size; int dir; } ;
struct file_id_t {int size; int flags; int start_clu; scalar_t__ entry; TYPE_1__ dir; } ;
struct dentry_t {int dummy; } ;
struct chain_t {int flags; scalar_t__ size; int dir; } ;
typedef scalar_t__ s32 ;
struct TYPE_6__ {struct fs_info_t fs_info; } ;
struct TYPE_5__ {int (* get_entry_attr ) (struct dentry_t*) ;int (* free_cluster ) (struct super_block*,struct chain_t*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_1 (struct super_block*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct super_block*,int ) ;
 int FUNC_4 (struct super_block*,int) ;
 struct dentry_t* FUNC_5 (struct super_block*,struct chain_t*,scalar_t__,int *) ;
 int FUNC_6 (struct inode*,struct chain_t*,scalar_t__) ;
 int FUNC_7 (struct dentry_t*) ;
 int FUNC_8 (struct super_block*,struct chain_t*,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_8, struct file_id_t *VAR_9)
{
 s32 VAR_10;
 int VAR_11 = VAR_5;
 struct chain_t VAR_12, VAR_13;
 struct dentry_t *VAR_14;
 struct super_block *VAR_15 = VAR_8->i_sb;
 struct fs_info_t *VAR_16 = &(FUNC_1(VAR_15)->fs_info);


 if (!VAR_9)
  return VAR_2;


 FUNC_2(&VAR_16->v_sem);

 VAR_12.dir = VAR_9->dir.dir;
 VAR_12.size = VAR_9->dir.size;
 VAR_12.flags = VAR_9->dir.flags;

 VAR_10 = VAR_9->entry;

 VAR_14 = FUNC_5(VAR_15, &VAR_12, VAR_10, ((void*)0));
 if (!VAR_14) {
  VAR_11 = VAR_3;
  goto out;
 }

 if (VAR_16->fs_func->get_entry_attr(VAR_14) & VAR_0) {
  VAR_11 = VAR_4;
  goto out;
 }
 FUNC_3(VAR_15, VAR_7);


 FUNC_6(VAR_8, &VAR_12, VAR_10);

 VAR_13.dir = VAR_9->start_clu;
 VAR_13.size = (s32)((VAR_9->size - 1) >> VAR_16->cluster_size_bits) + 1;
 VAR_13.flags = VAR_9->flags;


 VAR_16->fs_func->free_cluster(VAR_15, &VAR_13, 0);

 VAR_9->size = 0;
 VAR_9->start_clu = FUNC_0(~0);
 VAR_9->flags = (VAR_16->vol_type == VAR_1) ? 0x03 : 0x01;






 if (VAR_16->dev_ejected)
  VAR_11 = VAR_3;
out:

 FUNC_9(&VAR_16->v_sem);

 return VAR_11;
}
