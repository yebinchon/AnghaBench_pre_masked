
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_2__ {int total_entries; } ;
struct gasket_page_table {TYPE_1__ config; } ;


 int VAR_0 ;

__attribute__((used)) static ulong FUNC_0(struct gasket_page_table *VAR_1,
        ulong VAR_2)
{
 return (VAR_2 >> VAR_0) &
  (VAR_1->config.total_entries - 1);
}
