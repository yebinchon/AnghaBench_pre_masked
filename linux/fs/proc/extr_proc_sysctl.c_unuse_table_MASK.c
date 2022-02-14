
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_table_header {int unregistering; int used; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ctl_table_header *VAR_0)
{
 if (!--VAR_0->used)
  if (FUNC_1(VAR_0->unregistering))
   FUNC_0(VAR_0->unregistering);
}
