
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_iattrs {int ia_ctime; int ia_mtime; int ia_atime; int ia_gid; int ia_uid; } ;
struct inode {void* i_ctime; void* i_mtime; void* i_atime; int i_gid; int i_uid; } ;


 void* FUNC_0 (int ,struct inode*) ;

__attribute__((used)) static inline void FUNC_1(struct inode *VAR_0,
      struct kernfs_iattrs *VAR_1)
{
 VAR_0->i_uid = VAR_1->ia_uid;
 VAR_0->i_gid = VAR_1->ia_gid;
 VAR_0->i_atime = FUNC_0(VAR_1->ia_atime, VAR_0);
 VAR_0->i_mtime = FUNC_0(VAR_1->ia_mtime, VAR_0);
 VAR_0->i_ctime = FUNC_0(VAR_1->ia_ctime, VAR_0);
}
