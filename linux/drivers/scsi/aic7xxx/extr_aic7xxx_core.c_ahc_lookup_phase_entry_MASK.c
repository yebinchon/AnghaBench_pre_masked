
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahc_phase_table_entry {int phase; } ;


 struct ahc_phase_table_entry* VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static const struct ahc_phase_table_entry*
FUNC_0(int VAR_2)
{
 const struct ahc_phase_table_entry *VAR_3;
 const struct ahc_phase_table_entry *VAR_4;





 VAR_4 = &VAR_0[VAR_1];
 for (VAR_3 = VAR_0; VAR_3 < VAR_4; VAR_3++) {
  if (VAR_2 == VAR_3->phase)
   break;
 }
 return (VAR_3);
}
