
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_xattr_inode_array {int dummy; } ;
struct ext4_xattr_entry {scalar_t__ e_value_size; scalar_t__ e_value_inum; scalar_t__ e_hash; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 struct ext4_xattr_entry* FUNC_0 (struct ext4_xattr_entry*) ;
 int FUNC_1 (struct ext4_xattr_entry*) ;
 int FUNC_2 (struct ext4_xattr_inode_array**,struct inode*) ;
 int FUNC_3 (int *,int *,struct buffer_head*) ;
 int FUNC_4 (struct inode*,char*,int) ;
 int FUNC_5 (int *,struct inode*,int,struct buffer_head*,int,int) ;
 int FUNC_6 (int *,struct inode*) ;
 int FUNC_7 (struct inode*,struct inode*,unsigned int) ;
 int FUNC_8 (struct inode*,unsigned int,unsigned int,struct inode**) ;
 int FUNC_9 (struct inode*) ;
 unsigned int FUNC_10 (scalar_t__) ;

__attribute__((used)) static void
FUNC_11(handle_t *VAR_0, struct inode *VAR_1,
        struct buffer_head *VAR_2,
        struct ext4_xattr_entry *VAR_3, bool VAR_4,
        struct ext4_xattr_inode_array **VAR_5,
        int VAR_6, bool VAR_7)
{
 struct inode *VAR_8;
 struct ext4_xattr_entry *VAR_9;
 bool VAR_10 = 0;
 unsigned int VAR_11;
 int VAR_12;
 int VAR_13;


 VAR_13 = 2 + VAR_6;

 for (VAR_9 = VAR_3; !FUNC_1(VAR_9);
      VAR_9 = FUNC_0(VAR_9)) {
  if (!VAR_9->e_value_inum)
   continue;
  VAR_11 = FUNC_10(VAR_9->e_value_inum);
  VAR_12 = FUNC_8(VAR_1, VAR_11,
         FUNC_10(VAR_9->e_hash),
         &VAR_8);
  if (VAR_12)
   continue;

  VAR_12 = FUNC_2(VAR_5, VAR_8);
  if (VAR_12) {
   FUNC_4(VAR_8,
        "Expand inode array err=%d", VAR_12);
   FUNC_9(VAR_8);
   continue;
  }

  VAR_12 = FUNC_5(VAR_0, VAR_1, VAR_13, VAR_2,
      VAR_10, VAR_4);
  if (VAR_12) {
   FUNC_4(VAR_8, "Ensure credits err=%d",
        VAR_12);
   continue;
  }

  VAR_12 = FUNC_6(VAR_0, VAR_8);
  if (VAR_12) {
   FUNC_4(VAR_8, "ea_inode dec ref err=%d",
        VAR_12);
   continue;
  }

  if (!VAR_7)
   FUNC_7(VAR_1, VAR_8,
           FUNC_10(VAR_9->e_value_size));







  VAR_9->e_value_inum = 0;
  VAR_9->e_value_size = 0;

  VAR_10 = 1;
 }

 if (VAR_10) {






  VAR_12 = FUNC_3(VAR_0, ((void*)0), VAR_2);
  if (VAR_12)
   FUNC_4(VAR_1,
        "handle dirty metadata err=%d", VAR_12);
 }
}
