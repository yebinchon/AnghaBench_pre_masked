
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubi_volume {struct ubi_eba_table* eba_tbl; } ;
struct ubi_eba_table {TYPE_1__* entries; } ;
struct TYPE_2__ {int pnum; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct ubi_volume *VAR_0, struct ubi_eba_table *VAR_1,
   int VAR_2)
{
 struct ubi_eba_table *VAR_3;
 int VAR_4;

 FUNC_0(VAR_1 && VAR_0 && VAR_0->eba_tbl);

 VAR_3 = VAR_0->eba_tbl;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  VAR_1->entries[VAR_4].pnum = VAR_3->entries[VAR_4].pnum;
}
