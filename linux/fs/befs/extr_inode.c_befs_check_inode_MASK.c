
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
typedef int befs_inode_addr ;
struct TYPE_3__ {int flags; int inode_num; int magic1; } ;
typedef TYPE_1__ befs_inode ;
typedef scalar_t__ befs_blocknr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct super_block*,char*,unsigned long,...) ;
 scalar_t__ FUNC_1 (struct super_block*,int ) ;
 int FUNC_2 (struct super_block*,int ) ;
 scalar_t__ FUNC_3 (struct super_block*,int *) ;

int
FUNC_4(struct super_block *VAR_4, befs_inode *VAR_5,
   befs_blocknr_t VAR_6)
{
 u32 VAR_7 = FUNC_1(VAR_4, VAR_5->magic1);
 befs_inode_addr VAR_8 = FUNC_2(VAR_4, VAR_5->inode_num);
 u32 VAR_9 = FUNC_1(VAR_4, VAR_5->flags);


 if (VAR_7 != VAR_2) {
  FUNC_0(VAR_4,
      "Inode has a bad magic header - inode = %lu",
      (unsigned long)VAR_6);
  return VAR_0;
 }




 if (VAR_6 != FUNC_3(VAR_4, &VAR_8)) {
  FUNC_0(VAR_4, "inode blocknr field disagrees with vfs "
      "VFS: %lu, Inode %lu", (unsigned long)
      VAR_6, (unsigned long)FUNC_3(VAR_4, &VAR_8));
  return VAR_0;
 }





 if (!(VAR_9 & VAR_1)) {
  FUNC_0(VAR_4, "inode is not used - inode = %lu",
      (unsigned long)VAR_6);
  return VAR_0;
 }

 return VAR_3;
}
