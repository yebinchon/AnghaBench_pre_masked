
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct inode {int dummy; } ;
struct dentry {void* d_fsdata; } ;


 int FUNC_0 (struct dentry*,struct inode*) ;

__attribute__((used)) static inline void FUNC_1(struct dentry *VAR_0,
           struct inode *VAR_1, u32 VAR_2)
{
 VAR_0->d_fsdata = (void *)(unsigned long)VAR_2;
 FUNC_0(VAR_0, VAR_1);
}
