
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_nlink; int i_flags; int i_blkbits; int i_ctime; int i_mtime; int i_atime; int i_rdev; int i_gid; int i_uid; int i_mode; } ;


 int FUNC_0 (struct inode*,int ) ;

void FUNC_1(struct inode *VAR_0, const struct inode *VAR_1)
{
 VAR_0->i_mode = VAR_1->i_mode;
 VAR_0->i_uid = VAR_1->i_uid;
 VAR_0->i_gid = VAR_1->i_gid;
 VAR_0->i_rdev = VAR_1->i_rdev;
 VAR_0->i_atime = VAR_1->i_atime;
 VAR_0->i_mtime = VAR_1->i_mtime;
 VAR_0->i_ctime = VAR_1->i_ctime;
 VAR_0->i_blkbits = VAR_1->i_blkbits;
 VAR_0->i_flags = VAR_1->i_flags;
 FUNC_0(VAR_0, VAR_1->i_nlink);
}
