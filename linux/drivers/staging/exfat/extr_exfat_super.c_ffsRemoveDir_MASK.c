
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct fs_info_t {scalar_t__ vol_type; scalar_t__ root_dir; int cluster_size_bits; int v_sem; scalar_t__ dev_ejected; TYPE_2__* fs_func; } ;
struct TYPE_4__ {scalar_t__ dir; int size; int flags; } ;
struct file_id_t {int entry; scalar_t__ start_clu; int size; int flags; TYPE_1__ dir; } ;
struct chain_t {scalar_t__ dir; int size; int flags; } ;
typedef int s32 ;
struct TYPE_6__ {struct fs_info_t fs_info; } ;
struct TYPE_5__ {int (* free_cluster ) (struct super_block*,struct chain_t*,int) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_1 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct super_block*,int ) ;
 int FUNC_4 (struct super_block*,int) ;
 int FUNC_5 (struct super_block*,struct chain_t*) ;
 int FUNC_6 (struct inode*,struct chain_t*,int) ;
 int FUNC_7 (struct super_block*,struct chain_t*,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_8, struct file_id_t *VAR_9)
{
 s32 VAR_10;
 int VAR_11 = VAR_5;
 struct chain_t VAR_12, VAR_13;
 struct super_block *VAR_14 = VAR_8->i_sb;
 struct fs_info_t *VAR_15 = &(FUNC_1(VAR_14)->fs_info);


 if (!VAR_9)
  return VAR_2;

 VAR_12.dir = VAR_9->dir.dir;
 VAR_12.size = VAR_9->dir.size;
 VAR_12.flags = VAR_9->dir.flags;

 VAR_10 = VAR_9->entry;


 if (VAR_15->vol_type != VAR_0) {
  if ((VAR_12.dir != VAR_15->root_dir) && (VAR_10 < 2))
   return VAR_4;
 }


 FUNC_2(&VAR_15->v_sem);

 VAR_13.dir = VAR_9->start_clu;
 VAR_13.size = (s32)((VAR_9->size - 1) >> VAR_15->cluster_size_bits) + 1;
 VAR_13.flags = VAR_9->flags;

 if (!FUNC_5(VAR_14, &VAR_13)) {
  VAR_11 = VAR_1;
  goto out;
 }

 FUNC_3(VAR_14, VAR_7);


 FUNC_6(VAR_8, &VAR_12, VAR_10);


 VAR_15->fs_func->free_cluster(VAR_14, &VAR_13, 1);

 VAR_9->size = 0;
 VAR_9->start_clu = FUNC_0(~0);
 VAR_9->flags = (VAR_15->vol_type == VAR_0) ? 0x03 : 0x01;






 if (VAR_15->dev_ejected)
  VAR_11 = VAR_3;

out:

 FUNC_8(&VAR_15->v_sem);

 return VAR_11;
}
