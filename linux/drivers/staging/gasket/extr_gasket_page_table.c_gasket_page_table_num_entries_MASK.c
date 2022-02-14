
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
struct gasket_page_table {scalar_t__ num_extended_entries; scalar_t__ num_simple_entries; } ;



uint FUNC_0(struct gasket_page_table *VAR_0)
{
 if (!VAR_0)
  return 0;
 return VAR_0->num_simple_entries + VAR_0->num_extended_entries;
}
