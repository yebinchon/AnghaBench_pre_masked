
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union fuse_dentry {int dummy; } fuse_dentry ;
struct dentry {scalar_t__ d_fsdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct dentry *VAR_3)
{
 VAR_3->d_fsdata = FUNC_0(sizeof(union fuse_dentry),
       VAR_1 | VAR_2);

 return VAR_3->d_fsdata ? 0 : -VAR_0;
}
