
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_inode {scalar_t__ ui_size; scalar_t__ synced_i_size; } ;
struct ubifs_info {int size_tree; scalar_t__ ro_mount; int vfs_sb; } ;
struct size_entry {scalar_t__ d_size; int rb; struct inode* inode; scalar_t__ inum; } ;
struct inode {scalar_t__ i_size; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,unsigned long,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct size_entry*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct ubifs_info*,int) ;
 struct inode* FUNC_7 (int ,scalar_t__) ;
 struct ubifs_inode* FUNC_8 (struct inode*) ;
 int FUNC_9 (struct ubifs_info*,struct inode*) ;

__attribute__((used)) static int FUNC_10(struct ubifs_info *VAR_0, struct size_entry *VAR_1)
{
 struct inode *VAR_2;
 struct ubifs_inode *VAR_3;
 int VAR_4;

 if (VAR_0->ro_mount)
  FUNC_6(VAR_0, !VAR_1->inode);

 if (VAR_1->inode) {

  VAR_2 = VAR_1->inode;
 } else {
  VAR_2 = FUNC_7(VAR_0->vfs_sb, VAR_1->inum);
  if (FUNC_0(VAR_2))
   return FUNC_1(VAR_2);

  if (VAR_2->i_size >= VAR_1->d_size) {




   FUNC_3(VAR_2);
   return 0;
  }

  FUNC_2("ino %lu size %lld -> %lld",
     (unsigned long)VAR_1->inum,
     VAR_2->i_size, VAR_1->d_size);

  VAR_3 = FUNC_8(VAR_2);

  VAR_2->i_size = VAR_1->d_size;
  VAR_3->ui_size = VAR_1->d_size;
  VAR_3->synced_i_size = VAR_1->d_size;

  VAR_1->inode = VAR_2;
 }






 if (VAR_0->ro_mount)
  return 0;

 VAR_4 = FUNC_9(VAR_0, VAR_2);

 FUNC_3(VAR_2);

 if (VAR_4)
  return VAR_4;

 FUNC_5(&VAR_1->rb, &VAR_0->size_tree);
 FUNC_4(VAR_1);

 return 0;
}
