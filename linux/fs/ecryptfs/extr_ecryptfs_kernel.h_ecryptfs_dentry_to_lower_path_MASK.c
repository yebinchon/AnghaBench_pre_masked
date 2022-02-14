
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dummy; } ;
struct ecryptfs_dentry_info {struct path lower_path; } ;
struct dentry {scalar_t__ d_fsdata; } ;



__attribute__((used)) static inline struct path *
FUNC_0(struct dentry *VAR_0)
{
 return &((struct ecryptfs_dentry_info *)VAR_0->d_fsdata)->lower_path;
}
