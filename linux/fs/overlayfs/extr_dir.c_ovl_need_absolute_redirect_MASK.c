
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct TYPE_2__ {int i_nlink; } ;


 TYPE_1__* FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (struct dentry*) ;

__attribute__((used)) static bool FUNC_3(struct dentry *VAR_0, bool VAR_1)
{
 struct dentry *VAR_2;

 if (!VAR_1)
  return 1;

 if (FUNC_1(VAR_0))
  return 0;
 VAR_2 = FUNC_2(VAR_0);
 return (FUNC_0(VAR_2)->i_nlink > 1);
}
