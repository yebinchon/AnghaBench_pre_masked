
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_2, unsigned int VAR_3)
{
 if (VAR_3 & VAR_1)
  return -VAR_0;


 if (FUNC_0(VAR_2))
  return 1;
 return FUNC_1(VAR_2);
}
