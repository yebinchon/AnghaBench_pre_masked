
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct gasket_page_table {int num_active_pages; } ;



uint FUNC_0(struct gasket_page_table *VAR_0)
{
 if (!VAR_0)
  return 0;
 return VAR_0->num_active_pages;
}
