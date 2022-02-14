
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xattr_handler {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int vid; int vnode_hi; int vnode; int unique; } ;
struct afs_vnode {TYPE_1__ fid; } ;


 struct afs_vnode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (void*,char*,size_t) ;
 size_t FUNC_2 (char*,char*,int,...) ;

__attribute__((used)) static int FUNC_3(const struct xattr_handler *VAR_1,
        struct dentry *VAR_2,
        struct inode *VAR_3, const char *VAR_4,
        void *VAR_5, size_t VAR_6)
{
 struct afs_vnode *VAR_7 = FUNC_0(VAR_3);
 char VAR_8[16 + 1 + 24 + 1 + 8 + 1];
 size_t VAR_9;




 VAR_9 = FUNC_2(VAR_8, "%llx:", VAR_7->fid.vid);
 if (VAR_7->fid.vnode_hi)
  VAR_9 += FUNC_2(VAR_8 + VAR_9, "%x%016llx",
          VAR_7->fid.vnode_hi, VAR_7->fid.vnode);
 else
  VAR_9 += FUNC_2(VAR_8 + VAR_9, "%llx", VAR_7->fid.vnode);
 VAR_9 += FUNC_2(VAR_8 + VAR_9, ":%x", VAR_7->fid.unique);

 if (VAR_6 == 0)
  return VAR_9;
 if (VAR_9 > VAR_6)
  return -VAR_0;
 FUNC_1(VAR_5, VAR_8, VAR_9);
 return VAR_9;
}
