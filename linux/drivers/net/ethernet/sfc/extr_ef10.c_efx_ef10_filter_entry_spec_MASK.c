
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_filter_spec {int dummy; } ;
struct efx_ef10_filter_table {TYPE_1__* entry; } ;
struct TYPE_2__ {int spec; } ;


 int VAR_0 ;

__attribute__((used)) static struct efx_filter_spec *
FUNC_0(const struct efx_ef10_filter_table *VAR_1,
      unsigned int VAR_2)
{
 return (struct efx_filter_spec *)(VAR_1->entry[VAR_2].spec &
       ~VAR_0);
}
