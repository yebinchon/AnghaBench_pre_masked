
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_xattr_ibody_header {int dummy; } ;
struct ext4_xattr_entry {int e_value_offs; } ;
struct ext4_iloc {int dummy; } ;
struct TYPE_2__ {int i_inline_off; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct ext4_xattr_ibody_header*) ;
 struct ext4_xattr_ibody_header* FUNC_3 (struct inode*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct ext4_iloc*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void *FUNC_6(struct inode *VAR_0,
           struct ext4_iloc *VAR_1)
{
 struct ext4_xattr_entry *VAR_2;
 struct ext4_xattr_ibody_header *VAR_3;

 FUNC_0(!FUNC_1(VAR_0)->i_inline_off);

 VAR_3 = FUNC_3(VAR_0, FUNC_4(VAR_1));
 VAR_2 = (struct ext4_xattr_entry *)((void *)FUNC_4(VAR_1) +
         FUNC_1(VAR_0)->i_inline_off);

 return (void *)FUNC_2(VAR_3) + FUNC_5(VAR_2->e_value_offs);
}
