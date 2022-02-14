
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct qstr {unsigned char* name; int len; } ;
struct object_info {int name_len; int name; int parent_id; } ;
struct inode {int i_ino; int i_size; struct super_block* i_sb; } ;
struct adfs_dir_ops {int (* read ) (struct super_block*,int ,int ,struct adfs_dir*) ;int (* setpos ) (struct adfs_dir*,int ) ;scalar_t__ (* getnext ) (struct adfs_dir*,struct object_info*) ;int (* free ) (struct adfs_dir*) ;} ;
struct adfs_dir {scalar_t__ parent_id; } ;
struct TYPE_4__ {scalar_t__ parent_id; } ;
struct TYPE_3__ {struct adfs_dir_ops* s_dir; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (unsigned char const*,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct super_block*,char*,scalar_t__,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct super_block*,int ,int ,struct adfs_dir*) ;
 int FUNC_7 (struct adfs_dir*,int ) ;
 scalar_t__ FUNC_8 (struct adfs_dir*,struct object_info*) ;
 int FUNC_9 (struct adfs_dir*) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_3, const struct qstr *VAR_4,
      struct object_info *VAR_5)
{
 struct super_block *VAR_6 = VAR_3->i_sb;
 const struct adfs_dir_ops *VAR_7 = FUNC_1(VAR_6)->s_dir;
 const unsigned char *VAR_8;
 struct adfs_dir VAR_9;
 u32 VAR_10;
 int VAR_11;

 VAR_11 = VAR_7->read(VAR_6, VAR_3->i_ino, VAR_3->i_size, &VAR_9);
 if (VAR_11)
  goto out;

 if (FUNC_0(VAR_3)->parent_id != VAR_9.parent_id) {
  FUNC_3(VAR_6,
      "parent directory changed under me! (%06x but got %06x)\n",
      FUNC_0(VAR_3)->parent_id, VAR_9.parent_id);
  VAR_11 = -VAR_0;
  goto free_out;
 }

 VAR_5->parent_id = VAR_3->i_ino;

 FUNC_4(&VAR_2);

 VAR_11 = VAR_7->setpos(&VAR_9, 0);
 if (VAR_11)
  goto unlock_out;

 VAR_11 = -VAR_1;
 VAR_8 = VAR_4->name;
 VAR_10 = VAR_4->len;
 while (VAR_7->getnext(&VAR_9, VAR_5) == 0) {
  if (!FUNC_2(VAR_8, VAR_10, VAR_5->name, VAR_5->name_len)) {
   VAR_11 = 0;
   break;
  }
 }

unlock_out:
 FUNC_5(&VAR_2);

free_out:
 VAR_7->free(&VAR_9);
out:
 return VAR_11;
}
