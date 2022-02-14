
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct ext4_xattr_ibody_header {int dummy; } ;
struct ext4_xattr_entry {int e_value_offs; } ;
struct ext4_inode {scalar_t__ i_block; } ;
struct ext4_iloc {int dummy; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int i_inline_off; scalar_t__ i_inline_size; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct ext4_xattr_ibody_header*) ;
 struct ext4_xattr_ibody_header* FUNC_4 (struct inode*,struct ext4_inode*) ;
 int FUNC_5 (int ) ;
 struct ext4_inode* FUNC_6 (struct ext4_iloc*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (void*,void*,unsigned int) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct inode *VAR_1, struct ext4_iloc *VAR_2,
       void *VAR_3, loff_t VAR_4, unsigned int VAR_5)
{
 struct ext4_xattr_entry *VAR_6;
 struct ext4_xattr_ibody_header *VAR_7;
 struct ext4_inode *VAR_8;
 int VAR_9 = 0;

 if (FUNC_9(FUNC_5(FUNC_2(VAR_1->i_sb))))
  return;

 FUNC_0(!FUNC_1(VAR_1)->i_inline_off);
 FUNC_0(VAR_4 + VAR_5 > FUNC_1(VAR_1)->i_inline_size);

 VAR_8 = FUNC_6(VAR_2);
 VAR_3 += VAR_4;

 if (VAR_4 < VAR_0) {
  VAR_9 = VAR_4 + VAR_5 > VAR_0 ?
    VAR_0 - VAR_4 : VAR_5;
  FUNC_8((void *)VAR_8->i_block + VAR_4, VAR_3, VAR_9);

  VAR_5 -= VAR_9;
  VAR_3 += VAR_9;
  VAR_4 += VAR_9;
 }

 if (!VAR_5)
  return;

 VAR_4 -= VAR_0;
 VAR_7 = FUNC_4(VAR_1, VAR_8);
 VAR_6 = (struct ext4_xattr_entry *)((void *)VAR_8 +
         FUNC_1(VAR_1)->i_inline_off);

 FUNC_8((void *)FUNC_3(VAR_7) + FUNC_7(VAR_6->e_value_offs) + VAR_4,
        VAR_3, VAR_5);
}
