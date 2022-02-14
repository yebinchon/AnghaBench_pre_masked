
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int total_entries; } ;
struct gasket_page_table {int mutex; int extended_offset_reg; TYPE_1__ config; } ;


 int FUNC_0 (struct gasket_page_table*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(struct gasket_page_table *VAR_0)
{
 FUNC_1(&VAR_0->mutex);
 FUNC_0(VAR_0);
 FUNC_3(VAR_0->config.total_entries, VAR_0->extended_offset_reg);
 FUNC_2(&VAR_0->mutex);
}
