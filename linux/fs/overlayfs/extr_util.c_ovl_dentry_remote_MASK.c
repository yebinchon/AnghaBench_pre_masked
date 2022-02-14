
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

bool FUNC_0(struct dentry *VAR_3)
{
 return VAR_3->d_flags &
  (VAR_1 | VAR_2 |
   VAR_0);
}
