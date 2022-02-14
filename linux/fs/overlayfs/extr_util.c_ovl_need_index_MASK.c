
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int d_sb; } ;
struct TYPE_2__ {int i_nlink; } ;


 TYPE_1__* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

bool FUNC_5(struct dentry *VAR_0)
{
 struct dentry *VAR_1 = FUNC_2(VAR_0);

 if (!VAR_1 || !FUNC_4(VAR_0->d_sb))
  return 0;


 if (FUNC_3(VAR_0->d_sb))
  return 1;


 if (!FUNC_1(VAR_1) && FUNC_0(VAR_1)->i_nlink > 1)
  return 1;

 return 0;
}
