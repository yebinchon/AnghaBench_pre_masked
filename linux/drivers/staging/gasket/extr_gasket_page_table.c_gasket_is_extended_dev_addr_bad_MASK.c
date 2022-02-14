
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
typedef int uint ;
struct TYPE_2__ {int total_entries; } ;
struct gasket_page_table {int extended_flag; int num_extended_entries; int device; TYPE_1__ config; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct gasket_page_table*,int ,int,int) ;
 int FUNC_3 (struct gasket_page_table*,int) ;

__attribute__((used)) static bool FUNC_4(struct gasket_page_table *VAR_4,
         ulong VAR_5, uint VAR_6)
{

 ulong VAR_7 = VAR_5 & (VAR_3 - 1);
 ulong VAR_8, VAR_9;
 ulong VAR_10;
 ulong VAR_11;


 VAR_11 = VAR_5 & ~((VAR_4)->extended_flag);
 if (VAR_11 >> (VAR_1 + VAR_0)) {
  FUNC_1(VAR_4->device, "device address out of bounds: 0x%lx\n",
   VAR_5);
  return 1;
 }


 VAR_8 = (VAR_5 / VAR_3) &
  (VAR_4->config.total_entries * VAR_2 - 1);


 VAR_9 = FUNC_3(VAR_4, VAR_5);


 VAR_10 = FUNC_0(VAR_6, VAR_2);

 if (FUNC_2(VAR_4, 0, VAR_8,
          VAR_7) != VAR_5) {
  FUNC_1(VAR_4->device, "address is invalid: 0x%lx\n",
   VAR_5);
  return 1;
 }

 if (VAR_9 >= VAR_4->num_extended_entries) {
  FUNC_1(VAR_4->device,
   "starting level 0 slot at %lu is too large, max is < %u\n",
   VAR_9, VAR_4->num_extended_entries);
  return 1;
 }

 if (VAR_9 + VAR_10 > VAR_4->num_extended_entries) {
  FUNC_1(VAR_4->device,
   "ending level 0 slot at %lu is too large, max is <= %u\n",
   VAR_9 + VAR_10,
   VAR_4->num_extended_entries);
  return 1;
 }

 return 0;
}
