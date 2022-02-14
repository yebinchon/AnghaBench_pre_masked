
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int range_end; int nr_to_write; } ;
struct page {int mapping; int index; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,struct writeback_control*,struct page*,int) ;

int FUNC_3(struct page *VAR_1, struct writeback_control *VAR_2)
{
 int VAR_3;

 FUNC_0("{%lx},", VAR_1->index);

 VAR_3 = FUNC_2(VAR_1->mapping, VAR_2, VAR_1,
           VAR_2->range_end >> VAR_0);
 if (VAR_3 < 0) {
  FUNC_1(" = %d", VAR_3);
  return 0;
 }

 VAR_2->nr_to_write -= VAR_3;

 FUNC_1(" = 0");
 return 0;
}
