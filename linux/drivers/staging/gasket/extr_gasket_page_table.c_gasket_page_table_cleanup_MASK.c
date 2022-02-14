
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gasket_page_table {int device; int * entries; } ;


 int FUNC_0 (struct gasket_page_table*) ;
 int FUNC_1 (struct gasket_page_table*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct gasket_page_table *VAR_0)
{

 FUNC_0(VAR_0);



 FUNC_3(VAR_0->entries);
 VAR_0->entries = ((void*)0);

 FUNC_2(VAR_0->device);
 FUNC_1(VAR_0);
}
