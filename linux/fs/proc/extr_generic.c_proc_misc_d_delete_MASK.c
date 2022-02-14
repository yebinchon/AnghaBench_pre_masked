
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct TYPE_2__ {int in_use; } ;


 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct dentry const*) ;

__attribute__((used)) static int FUNC_3(const struct dentry *VAR_0)
{
 return FUNC_1(&FUNC_0(FUNC_2(VAR_0))->in_use) < 0;
}
