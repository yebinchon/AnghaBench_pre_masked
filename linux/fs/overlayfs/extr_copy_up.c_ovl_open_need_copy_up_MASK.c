
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct TYPE_2__ {int i_mode; } ;


 TYPE_1__* FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct dentry*,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct dentry *VAR_0, int VAR_1)
{

 if (FUNC_1(VAR_0, VAR_1))
  return 0;

 if (FUNC_3(FUNC_0(VAR_0)->i_mode))
  return 0;

 if (!FUNC_2(VAR_1))
  return 0;

 return 1;
}
