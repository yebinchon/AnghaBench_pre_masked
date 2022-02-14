
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_xattr_inode_array {int count; int * inodes; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ext4_xattr_inode_array*) ;

void FUNC_2(struct ext4_xattr_inode_array *VAR_0)
{
 int VAR_1;

 if (VAR_0 == ((void*)0))
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->count; ++VAR_1)
  FUNC_0(VAR_0->inodes[VAR_1]);
 FUNC_1(VAR_0);
}
