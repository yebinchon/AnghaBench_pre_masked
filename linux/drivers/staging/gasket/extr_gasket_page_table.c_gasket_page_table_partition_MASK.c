
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint ;
struct TYPE_4__ {void* total_entries; } ;
struct gasket_page_table {int mutex; int extended_offset_reg; TYPE_2__ config; void* num_extended_entries; void* num_simple_entries; int device; TYPE_1__* entries; } ;
struct TYPE_3__ {scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct gasket_page_table*) ;
 int FUNC_2 (void*,void*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (void*,int ) ;

int FUNC_6(struct gasket_page_table *VAR_3,
    uint VAR_4)
{
 int VAR_5, VAR_6;

 FUNC_3(&VAR_3->mutex);
 if (VAR_4 > VAR_3->config.total_entries) {
  FUNC_4(&VAR_3->mutex);
  return -VAR_1;
 }

 FUNC_1(VAR_3);

 VAR_6 = FUNC_2(VAR_3->num_simple_entries, VAR_4);

 for (VAR_5 = VAR_6; VAR_5 < VAR_3->config.total_entries; VAR_5++) {
  if (VAR_3->entries[VAR_5].status != VAR_2) {
   FUNC_0(VAR_3->device, "entry %d is not free\n", VAR_5);
   FUNC_4(&VAR_3->mutex);
   return -VAR_0;
  }
 }

 VAR_3->num_simple_entries = VAR_4;
 VAR_3->num_extended_entries =
  VAR_3->config.total_entries - VAR_4;
 FUNC_5(VAR_4, VAR_3->extended_offset_reg);

 FUNC_4(&VAR_3->mutex);
 return 0;
}
