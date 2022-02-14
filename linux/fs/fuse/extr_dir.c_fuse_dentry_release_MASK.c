
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union fuse_dentry {int dummy; } fuse_dentry ;
struct dentry {union fuse_dentry* d_fsdata; } ;


 int FUNC_0 (union fuse_dentry*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct dentry *VAR_1)
{
 union fuse_dentry *VAR_2 = VAR_1->d_fsdata;

 FUNC_0(VAR_2, VAR_0);
}
