
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct ext4_xattr_ibody_header {int dummy; } ;
struct ext4_xattr_entry {scalar_t__ e_value_inum; } ;
struct ext4_inode {int dummy; } ;
struct ext4_iloc {struct buffer_head* bh; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ qsize_t ;
struct TYPE_4__ {scalar_t__ i_file_acl; int xattr_sem; } ;
struct TYPE_3__ {int s_inode_size; } ;


 struct ext4_xattr_entry* FUNC_0 (struct buffer_head*) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int VAR_0 ;
 struct ext4_xattr_entry* FUNC_3 (struct ext4_xattr_entry*) ;
 struct ext4_xattr_entry* FUNC_4 (struct ext4_xattr_ibody_header*) ;
 struct ext4_xattr_ibody_header* FUNC_5 (struct inode*,struct ext4_inode*) ;
 scalar_t__ FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct ext4_xattr_entry*) ;
 int FUNC_8 (struct buffer_head*) ;
 int VAR_1 ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct inode*,struct ext4_iloc*) ;
 struct ext4_inode* FUNC_11 (struct ext4_iloc*) ;
 struct buffer_head* FUNC_12 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_13 (struct inode*,int ) ;
 int FUNC_14 (struct inode*,struct buffer_head*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct inode*,struct ext4_xattr_ibody_header*,void*) ;

int FUNC_17(struct inode *VAR_2, qsize_t *VAR_3)
{
 struct ext4_iloc VAR_4 = { .bh = ((void*)0) };
 struct buffer_head *VAR_5 = ((void*)0);
 struct ext4_inode *VAR_6;
 struct ext4_xattr_ibody_header *VAR_7;
 struct ext4_xattr_entry *VAR_8;
 qsize_t VAR_9 = 0;
 void *VAR_10;
 int VAR_11;

 FUNC_15(&FUNC_1(VAR_2)->xattr_sem);

 if (FUNC_13(VAR_2, VAR_0)) {
  VAR_11 = FUNC_10(VAR_2, &VAR_4);
  if (VAR_11)
   goto out;
  VAR_6 = FUNC_11(&VAR_4);
  VAR_7 = FUNC_5(VAR_2, VAR_6);
  VAR_10 = (void *)VAR_6 + FUNC_2(VAR_2->i_sb)->s_inode_size;
  VAR_11 = FUNC_16(VAR_2, VAR_7, VAR_10);
  if (VAR_11)
   goto out;

  for (VAR_8 = FUNC_4(VAR_7); !FUNC_7(VAR_8);
       VAR_8 = FUNC_3(VAR_8))
   if (VAR_8->e_value_inum)
    VAR_9++;
 }

 if (FUNC_1(VAR_2)->i_file_acl) {
  VAR_5 = FUNC_12(VAR_2->i_sb, FUNC_1(VAR_2)->i_file_acl, VAR_1);
  if (FUNC_6(VAR_5)) {
   VAR_11 = FUNC_8(VAR_5);
   VAR_5 = ((void*)0);
   goto out;
  }

  VAR_11 = FUNC_14(VAR_2, VAR_5);
  if (VAR_11)
   goto out;

  for (VAR_8 = FUNC_0(VAR_5); !FUNC_7(VAR_8);
       VAR_8 = FUNC_3(VAR_8))
   if (VAR_8->e_value_inum)
    VAR_9++;
 }
 *VAR_3 = VAR_9 + 1;
 VAR_11 = 0;
out:
 FUNC_9(VAR_4.bh);
 FUNC_9(VAR_5);
 return VAR_11;
}
