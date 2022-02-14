
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
struct gasket_page_table {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct gasket_page_table*,int,int) ;

bool FUNC_2(struct gasket_page_table *VAR_1,
         ulong VAR_2, ulong VAR_3,
         ulong VAR_4)
{
 if (VAR_2 & (VAR_0 - 1)) {
  FUNC_0(VAR_1->device,
   "host mapping address 0x%lx must be page aligned\n",
   VAR_2);
  return 1;
 }

 return FUNC_1(VAR_1, VAR_3, VAR_4);
}
