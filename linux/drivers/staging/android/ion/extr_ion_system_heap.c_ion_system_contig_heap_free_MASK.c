
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int sgl; } ;
struct page {int dummy; } ;
struct ion_buffer {int size; struct sg_table* sg_table; } ;


 unsigned long FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct sg_table*) ;
 int FUNC_3 (struct sg_table*) ;
 struct page* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ion_buffer *VAR_1)
{
 struct sg_table *VAR_2 = VAR_1->sg_table;
 struct page *VAR_3 = FUNC_4(VAR_2->sgl);
 unsigned long VAR_4 = FUNC_0(VAR_1->size) >> VAR_0;
 unsigned long VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  FUNC_1(VAR_3 + VAR_5);
 FUNC_3(VAR_2);
 FUNC_2(VAR_2);
}
