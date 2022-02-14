
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_xattr_entry {int e_hash; int e_value_inum; } ;
typedef int handle_t ;


 struct ext4_xattr_entry* FUNC_0 (struct ext4_xattr_entry*) ;
 int FUNC_1 (struct ext4_xattr_entry*) ;
 int FUNC_2 (int ,char*,unsigned int,int) ;
 int FUNC_3 (struct inode*,char*,int) ;
 int FUNC_4 (int *,struct inode*) ;
 int FUNC_5 (struct inode*,unsigned int,unsigned int,struct inode**) ;
 int FUNC_6 (int *,struct inode*) ;
 int FUNC_7 (struct inode*) ;
 unsigned int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(handle_t *VAR_0, struct inode *VAR_1,
     struct ext4_xattr_entry *VAR_2)
{
 struct inode *VAR_3;
 struct ext4_xattr_entry *VAR_4;
 struct ext4_xattr_entry *VAR_5;
 unsigned int VAR_6;
 int VAR_7, VAR_8;

 for (VAR_4 = VAR_2; !FUNC_1(VAR_4);
      VAR_4 = FUNC_0(VAR_4)) {
  if (!VAR_4->e_value_inum)
   continue;
  VAR_6 = FUNC_8(VAR_4->e_value_inum);
  VAR_7 = FUNC_5(VAR_1, VAR_6,
         FUNC_8(VAR_4->e_hash),
         &VAR_3);
  if (VAR_7)
   goto cleanup;
  VAR_7 = FUNC_6(VAR_0, VAR_3);
  if (VAR_7) {
   FUNC_3(VAR_3, "inc ref error %d", VAR_7);
   FUNC_7(VAR_3);
   goto cleanup;
  }
  FUNC_7(VAR_3);
 }
 return 0;

cleanup:
 VAR_8 = VAR_7;
 VAR_5 = VAR_4;

 for (VAR_4 = VAR_2; VAR_4 != VAR_5;
      VAR_4 = FUNC_0(VAR_4)) {
  if (!VAR_4->e_value_inum)
   continue;
  VAR_6 = FUNC_8(VAR_4->e_value_inum);
  VAR_7 = FUNC_5(VAR_1, VAR_6,
         FUNC_8(VAR_4->e_hash),
         &VAR_3);
  if (VAR_7) {
   FUNC_2(VAR_1->i_sb,
         "cleanup ea_ino %u iget error %d", VAR_6,
         VAR_7);
   continue;
  }
  VAR_7 = FUNC_4(VAR_0, VAR_3);
  if (VAR_7)
   FUNC_3(VAR_3, "cleanup dec ref error %d",
        VAR_7);
  FUNC_7(VAR_3);
 }
 return VAR_8;
}
