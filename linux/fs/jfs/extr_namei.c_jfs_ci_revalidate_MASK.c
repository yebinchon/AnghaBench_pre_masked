
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (struct dentry*) ;

__attribute__((used)) static int FUNC_1(struct dentry *VAR_2, unsigned int VAR_3)
{
 if (FUNC_0(VAR_2))
  return 1;





 if (!VAR_3)
  return 0;






 if (VAR_3 & (VAR_0 | VAR_1))
  return 0;
 return 1;
}
