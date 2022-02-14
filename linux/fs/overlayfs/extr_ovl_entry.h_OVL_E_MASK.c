
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_entry {int dummy; } ;
struct dentry {scalar_t__ d_fsdata; } ;



__attribute__((used)) static inline struct ovl_entry *FUNC_0(struct dentry *VAR_0)
{
 return (struct ovl_entry *) VAR_0->d_fsdata;
}
