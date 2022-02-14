
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_entry_out {int entry_valid_nsec; int entry_valid; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct dentry*,int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct dentry *VAR_0, struct fuse_entry_out *VAR_1)
{
 FUNC_0(VAR_0,
  FUNC_1(VAR_1->entry_valid, VAR_1->entry_valid_nsec));
}
