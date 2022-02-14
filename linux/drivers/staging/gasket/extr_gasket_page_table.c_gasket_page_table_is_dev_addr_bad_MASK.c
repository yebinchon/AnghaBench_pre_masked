
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef scalar_t__ uint ;
struct gasket_page_table {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,...) ;
 scalar_t__ FUNC_1 (struct gasket_page_table*,int) ;
 int FUNC_2 (struct gasket_page_table*,int,scalar_t__) ;
 int FUNC_3 (struct gasket_page_table*,int,scalar_t__) ;

bool FUNC_4(struct gasket_page_table *VAR_1,
           ulong VAR_2, ulong VAR_3)
{
 uint VAR_4 = VAR_3 / VAR_0;

 if (VAR_3 & (VAR_0 - 1)) {
  FUNC_0(VAR_1->device,
   "mapping size 0x%lX must be page aligned\n", VAR_3);
  return 1;
 }

 if (VAR_4 == 0) {
  FUNC_0(VAR_1->device,
   "requested mapping is less than one page: %lu / %lu\n",
   VAR_3, VAR_0);
  return 1;
 }

 if (FUNC_1(VAR_1, VAR_2))
  return FUNC_3(VAR_1, VAR_2,
           VAR_4);
 return FUNC_2(VAR_1, VAR_2, VAR_4);
}
