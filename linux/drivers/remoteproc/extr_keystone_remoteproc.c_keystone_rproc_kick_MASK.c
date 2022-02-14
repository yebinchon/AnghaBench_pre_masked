
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {struct keystone_rproc* priv; } ;
struct keystone_rproc {scalar_t__ kick_gpio; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct rproc *VAR_0, int VAR_1)
{
 struct keystone_rproc *VAR_2 = VAR_0->priv;

 if (FUNC_0(VAR_2->kick_gpio < 0))
  return;

 FUNC_1(VAR_2->kick_gpio, 1);
}
