
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct TYPE_2__ {int in_use; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct dentry*) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_2, unsigned int VAR_3)
{
 if (VAR_3 & VAR_1)
  return -VAR_0;

 if (FUNC_1(&FUNC_0(FUNC_2(VAR_2))->in_use) < 0)
  return 0;
 return 1;
}
