
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct ext4_xattr_ibody_header {int dummy; } ;
struct ext4_xattr_entry {scalar_t__ e_value_size; int e_value_offs; int e_value_inum; } ;
struct ext4_inode {int dummy; } ;
struct ext4_iloc {int dummy; } ;
typedef int __u32 ;
struct TYPE_4__ {int i_extra_isize; int i_inline_off; } ;
struct TYPE_3__ {int s_inode_size; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 struct ext4_xattr_entry* FUNC_3 (struct ext4_xattr_entry*) ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 struct ext4_xattr_entry* FUNC_5 (struct ext4_xattr_ibody_header*) ;
 struct ext4_xattr_ibody_header* FUNC_6 (struct inode*,struct ext4_inode*) ;
 int FUNC_7 (struct ext4_xattr_entry*) ;
 struct ext4_inode* FUNC_8 (struct ext4_iloc*) ;
 int FUNC_9 (struct inode*,int ) ;
 size_t FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_4,
        struct ext4_iloc *VAR_5)
{
 struct ext4_xattr_ibody_header *VAR_6;
 struct ext4_xattr_entry *VAR_7;
 struct ext4_inode *VAR_8;
 int VAR_9, VAR_10;

 VAR_10 = FUNC_1(VAR_4->i_sb)->s_inode_size -
   VAR_0 -
   FUNC_0(VAR_4)->i_extra_isize -
   sizeof(struct ext4_xattr_ibody_header);






 if (!FUNC_9(VAR_4, VAR_1))
  return FUNC_4(VAR_10 -
   FUNC_2(FUNC_12(VAR_3)) -
   VAR_2 - sizeof(__u32));

 VAR_8 = FUNC_8(VAR_5);
 VAR_6 = FUNC_6(VAR_4, VAR_8);
 VAR_7 = FUNC_5(VAR_6);


 for (; !FUNC_7(VAR_7); VAR_7 = FUNC_3(VAR_7)) {
  if (!VAR_7->e_value_inum && VAR_7->e_value_size) {
   size_t VAR_11 = FUNC_10(VAR_7->e_value_offs);
   if (VAR_11 < VAR_10)
    VAR_10 = VAR_11;
  }
 }
 VAR_9 = VAR_10 -
  ((void *)VAR_7 - (void *)FUNC_5(VAR_6)) - sizeof(__u32);

 if (FUNC_0(VAR_4)->i_inline_off) {
  VAR_7 = (struct ext4_xattr_entry *)
   ((void *)VAR_8 + FUNC_0(VAR_4)->i_inline_off);

  VAR_9 += FUNC_4(FUNC_11(VAR_7->e_value_size));
  goto out;
 }

 VAR_9 -= FUNC_2(FUNC_12(VAR_3));

 if (VAR_9 > VAR_2)
  VAR_9 = FUNC_4(VAR_9 - VAR_2);
 else
  VAR_9 = 0;

out:
 return VAR_9;
}
