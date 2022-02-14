
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmballoon {int batch_max_pages; int * batch_page; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct vmballoon *VAR_1)
{
 FUNC_0((unsigned long)VAR_1->batch_page);
 VAR_1->batch_page = ((void*)0);
 FUNC_1(&VAR_0);
 VAR_1->batch_max_pages = 1;
}
