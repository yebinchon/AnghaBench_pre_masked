
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int * d_fsdata; int * d_op; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct dentry *VAR_2)
{

 return VAR_2->d_op == &VAR_1 &&
        VAR_2->d_fsdata == &VAR_0;
}
