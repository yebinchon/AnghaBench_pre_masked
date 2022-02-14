
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_filter_spec {int dummy; } ;
struct efx_ef10_filter_table {TYPE_1__* entry; } ;
struct TYPE_2__ {unsigned long spec; } ;



__attribute__((used)) static void
FUNC_0(struct efx_ef10_filter_table *VAR_0,
     unsigned int VAR_1,
     const struct efx_filter_spec *VAR_2,
     unsigned int VAR_3)
{
 VAR_0->entry[VAR_1].spec = (unsigned long)VAR_2 | VAR_3;
}
