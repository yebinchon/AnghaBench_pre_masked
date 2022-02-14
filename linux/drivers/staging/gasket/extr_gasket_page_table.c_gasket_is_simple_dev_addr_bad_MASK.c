
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
typedef int uint ;
struct TYPE_2__ {int total_entries; } ;
struct gasket_page_table {int num_simple_entries; int device; TYPE_1__ config; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (struct gasket_page_table*,int,int,int) ;

__attribute__((used)) static bool FUNC_2(struct gasket_page_table *VAR_1,
       ulong VAR_2, uint VAR_3)
{
 ulong VAR_4 = VAR_2 & (VAR_0 - 1);
 ulong VAR_5 =
  (VAR_2 / VAR_0) & (VAR_1->config.total_entries - 1);

 if (FUNC_1(VAR_1, 1, VAR_5,
          VAR_4) != VAR_2) {
  FUNC_0(VAR_1->device, "address is invalid, 0x%lX\n",
   VAR_2);
  return 1;
 }

 if (VAR_5 >= VAR_1->num_simple_entries) {
  FUNC_0(VAR_1->device,
   "starting slot at %lu is too large, max is < %u\n",
   VAR_5, VAR_1->num_simple_entries);
  return 1;
 }

 if (VAR_5 + VAR_3 > VAR_1->num_simple_entries) {
  FUNC_0(VAR_1->device,
   "ending slot at %lu is too large, max is <= %u\n",
   VAR_5 + VAR_3, VAR_1->num_simple_entries);
  return 1;
 }

 return 0;
}
