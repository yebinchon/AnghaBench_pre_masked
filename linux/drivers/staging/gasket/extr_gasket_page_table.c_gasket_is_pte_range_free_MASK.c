
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct gasket_page_table_entry {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct gasket_page_table_entry *VAR_1,
         uint VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (VAR_1[VAR_3].status != VAR_0)
   return 0;
 }

 return 1;
}
