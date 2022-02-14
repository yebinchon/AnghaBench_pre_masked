
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char u8 ;
typedef scalar_t__ u32 ;
struct uni_name_t {int dummy; } ;
struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct fs_info_t {scalar_t__ vol_type; scalar_t__ root_dir; int cluster_size_bits; int v_sem; scalar_t__ dev_ejected; TYPE_2__* fs_func; } ;
struct chain_t {scalar_t__ dir; int size; int flags; } ;
struct file_id_t {int entry; scalar_t__ start_clu; int size; int flags; struct chain_t dir; } ;
struct dentry_t {int dummy; } ;
struct TYPE_5__ {scalar_t__ name; } ;
struct dentry {struct inode* d_inode; TYPE_1__ d_name; } ;
typedef int s32 ;
struct TYPE_8__ {struct file_id_t fid; } ;
struct TYPE_7__ {struct fs_info_t fs_info; } ;
struct TYPE_6__ {int (* get_entry_attr ) (struct dentry_t*) ;scalar_t__ (* get_entry_type ) (struct dentry_t*) ;int (* count_ext_entries ) (struct super_block*,struct chain_t*,int,struct dentry_t*) ;int (* delete_dir_entry ) (struct super_block*,struct chain_t*,int,int ,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* FUNC_0 (struct inode*) ;
 TYPE_3__* FUNC_1 (struct super_block*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct super_block*,int ) ;
 int FUNC_4 (struct super_block*,int) ;
 struct dentry_t* FUNC_5 (struct super_block*,struct chain_t*,int,int *) ;
 int FUNC_6 (struct super_block*,struct chain_t*) ;
 int FUNC_7 (struct inode*,struct chain_t*,int,struct chain_t*,struct uni_name_t*,struct file_id_t*) ;
 int FUNC_8 (struct inode*,struct chain_t*,int,struct uni_name_t*,struct file_id_t*) ;
 int FUNC_9 (struct inode*,char*,struct chain_t*,struct uni_name_t*) ;
 int FUNC_10 (struct dentry_t*) ;
 scalar_t__ FUNC_11 (struct dentry_t*) ;
 int FUNC_12 (struct super_block*,struct chain_t*,int,struct dentry_t*) ;
 int FUNC_13 (struct super_block*,struct chain_t*,int,int ,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct file_id_t*,struct inode*) ;

__attribute__((used)) static int FUNC_16(struct inode *VAR_11, struct file_id_t *VAR_12,
         struct inode *VAR_13, struct dentry *VAR_14)
{
 s32 VAR_15;
 s32 VAR_16;
 struct chain_t VAR_17, VAR_18;
 struct chain_t *VAR_19 = ((void*)0);
 struct uni_name_t VAR_20;
 struct dentry_t *VAR_21;
 struct super_block *VAR_22 = VAR_11->i_sb;
 struct fs_info_t *VAR_23 = &(FUNC_1(VAR_22)->fs_info);
 u8 *VAR_24 = (u8 *)VAR_14->d_name.name;
 struct inode *VAR_25 = VAR_14->d_inode;
 int VAR_26;
 struct file_id_t *VAR_27 = ((void*)0);
 s32 VAR_28 = 0;


 if (!VAR_12)
  return VAR_4;


 if (!VAR_24 || (*VAR_24 == '\0'))
  return VAR_2;


 FUNC_2(&VAR_23->v_sem);

 FUNC_15(VAR_12, VAR_11);

 VAR_17.dir = VAR_12->dir.dir;
 VAR_17.size = VAR_12->dir.size;
 VAR_17.flags = VAR_12->dir.flags;

 VAR_16 = VAR_12->entry;


 if (VAR_23->vol_type != VAR_1) {
  if ((VAR_17.dir != VAR_23->root_dir) && (VAR_16 < 2)) {
   VAR_15 = VAR_6;
   goto out2;
  }
 }

 VAR_21 = FUNC_5(VAR_22, &VAR_17, VAR_16, ((void*)0));
 if (!VAR_21) {
  VAR_15 = VAR_5;
  goto out2;
 }

 if (VAR_23->fs_func->get_entry_attr(VAR_21) & VAR_0) {
  VAR_15 = VAR_6;
  goto out2;
 }


 if (VAR_25) {
  u32 VAR_29;

  VAR_15 = VAR_5;
  VAR_27 = &FUNC_0(VAR_25)->fid;

  FUNC_15(VAR_27, VAR_13);

  VAR_19 = &(VAR_27->dir);
  VAR_28 = VAR_27->entry;
  VAR_21 = FUNC_5(VAR_22, VAR_19, VAR_28, ((void*)0));
  if (!VAR_21)
   goto out;

  VAR_29 = VAR_23->fs_func->get_entry_type(VAR_21);

  if (VAR_29 == VAR_8) {
   struct chain_t VAR_30;

   VAR_30.dir = VAR_27->start_clu;
   VAR_30.size = (s32)((VAR_27->size - 1) >>
          VAR_23->cluster_size_bits) + 1;
   VAR_30.flags = VAR_27->flags;

   if (!FUNC_6(VAR_22, &VAR_30)) {
    VAR_15 = VAR_3;
    goto out;
   }
  }
 }


 VAR_15 = FUNC_9(VAR_13, VAR_24, &VAR_18, &VAR_20);
 if (VAR_15)
  goto out2;

 FUNC_3(VAR_22, VAR_10);

 if (VAR_17.dir == VAR_18.dir)
  VAR_15 = FUNC_8(VAR_13, &VAR_17, VAR_16, &VAR_20,
      VAR_12);
 else
  VAR_15 = FUNC_7(VAR_13, &VAR_17, VAR_16, &VAR_18,
    &VAR_20, VAR_12);

 if ((VAR_15 == VAR_7) && VAR_25) {

  VAR_21 = FUNC_5(VAR_22, VAR_19, VAR_28, ((void*)0));
  if (!VAR_21)
   goto out;

  VAR_26 = VAR_23->fs_func->count_ext_entries(VAR_22, VAR_19,
              VAR_28, VAR_21);
  if (VAR_26 < 0)
   goto out;
  VAR_23->fs_func->delete_dir_entry(VAR_22, VAR_19, VAR_28, 0,
      VAR_26 + 1);
 }
out:





 if (VAR_23->dev_ejected)
  VAR_15 = VAR_5;
out2:

 FUNC_14(&VAR_23->v_sem);

 return VAR_15;
}
