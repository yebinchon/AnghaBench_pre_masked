
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gasket_page_table {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct gasket_page_table*) ;

int FUNC_2(struct gasket_page_table *VAR_2)
{
 if (!VAR_2)
  return VAR_1;

 if (FUNC_1(VAR_2) == 0) {
  FUNC_0(VAR_2->device, "Page table size is 0\n");
  return VAR_1;
 }

 return VAR_0;
}
