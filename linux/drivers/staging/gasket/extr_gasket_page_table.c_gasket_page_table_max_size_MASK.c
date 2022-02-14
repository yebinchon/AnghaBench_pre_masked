
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct TYPE_2__ {int total_entries; } ;
struct gasket_page_table {TYPE_1__ config; } ;



uint FUNC_0(struct gasket_page_table *VAR_0)
{
 if (!VAR_0)
  return 0;
 return VAR_0->config.total_entries;
}
