
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_extent_tail {scalar_t__ et_checksum; } ;
struct ext4_extent_header {int dummy; } ;


 scalar_t__ FUNC_0 (struct inode*,struct ext4_extent_header*) ;
 int FUNC_1 (int ) ;
 struct ext4_extent_tail* FUNC_2 (struct ext4_extent_header*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0,
      struct ext4_extent_header *VAR_1)
{
 struct ext4_extent_tail *VAR_2;

 if (!FUNC_1(VAR_0->i_sb))
  return 1;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2->et_checksum != FUNC_0(VAR_0, VAR_1))
  return 0;
 return 1;
}
