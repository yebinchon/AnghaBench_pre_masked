
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_table_header {int used; int unregistering; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct ctl_table_header *VAR_0)
{
 if (FUNC_0(VAR_0->unregistering))
  return 0;
 VAR_0->used++;
 return 1;
}
