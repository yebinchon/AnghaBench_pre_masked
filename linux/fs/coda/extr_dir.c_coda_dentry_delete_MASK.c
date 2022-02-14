
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct TYPE_2__ {int c_flags; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct dentry const*) ;
 scalar_t__ FUNC_2 (struct dentry const*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(const struct dentry * VAR_1)
{
 int VAR_2;

 if (FUNC_2(VAR_1))
  return 0;

 VAR_2 = (FUNC_0(FUNC_1(VAR_1))->c_flags) & VAR_0;
 if (FUNC_3(FUNC_1(VAR_1)) || VAR_2) {
  return 1;
 }
 return 0;
}
