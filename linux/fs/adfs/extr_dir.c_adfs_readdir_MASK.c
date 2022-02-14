
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct object_info {char* name; int name_len; int indaddr; } ;
struct inode {int i_size; int i_ino; struct super_block* i_sb; } ;
struct file {int dummy; } ;
struct dir_context {int pos; } ;
struct adfs_dir_ops {int (* read ) (struct super_block*,int ,int ,struct adfs_dir*) ;int (* setpos ) (struct adfs_dir*,int) ;scalar_t__ (* getnext ) (struct adfs_dir*,struct object_info*) ;int (* free ) (struct adfs_dir*) ;} ;
struct adfs_dir {int parent_id; } ;
struct TYPE_2__ {struct adfs_dir_ops* s_dir; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dir_context*,char*,int,int ,int ) ;
 int FUNC_2 (struct file*,struct dir_context*) ;
 struct inode* FUNC_3 (struct file*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct super_block*,int ,int ,struct adfs_dir*) ;
 int FUNC_7 (struct adfs_dir*,int) ;
 scalar_t__ FUNC_8 (struct adfs_dir*,struct object_info*) ;
 int FUNC_9 (struct adfs_dir*) ;

__attribute__((used)) static int
FUNC_10(struct file *VAR_3, struct dir_context *VAR_4)
{
 struct inode *VAR_5 = FUNC_3(VAR_3);
 struct super_block *VAR_6 = VAR_5->i_sb;
 const struct adfs_dir_ops *VAR_7 = FUNC_0(VAR_6)->s_dir;
 struct object_info VAR_8;
 struct adfs_dir VAR_9;
 int VAR_10 = 0;

 if (VAR_4->pos >> 32)
  return 0;

 VAR_10 = VAR_7->read(VAR_6, VAR_5->i_ino, VAR_5->i_size, &VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_4->pos == 0) {
  if (!FUNC_2(VAR_3, VAR_4))
   goto free_out;
  VAR_4->pos = 1;
 }
 if (VAR_4->pos == 1) {
  if (!FUNC_1(VAR_4, "..", 2, VAR_9.parent_id, VAR_0))
   goto free_out;
  VAR_4->pos = 2;
 }

 FUNC_4(&VAR_2);

 VAR_10 = VAR_7->setpos(&VAR_9, VAR_4->pos - 2);
 if (VAR_10)
  goto unlock_out;
 while (VAR_7->getnext(&VAR_9, &VAR_8) == 0) {
  if (!FUNC_1(VAR_4, VAR_8.name, VAR_8.name_len,
         VAR_8.indaddr, VAR_1))
   break;
  VAR_4->pos++;
 }

unlock_out:
 FUNC_5(&VAR_2);

free_out:
 VAR_7->free(&VAR_9);
 return VAR_10;
}
