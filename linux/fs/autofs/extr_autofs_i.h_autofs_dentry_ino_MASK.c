
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {scalar_t__ d_fsdata; } ;
struct autofs_info {int dummy; } ;



__attribute__((used)) static inline struct autofs_info *FUNC_0(struct dentry *VAR_0)
{
 return (struct autofs_info *)(VAR_0->d_fsdata);
}
