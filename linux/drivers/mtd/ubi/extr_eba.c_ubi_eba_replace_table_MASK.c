
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume {struct ubi_eba_table* eba_tbl; } ;
struct ubi_eba_table {int dummy; } ;


 int FUNC_0 (struct ubi_eba_table*) ;

void FUNC_1(struct ubi_volume *VAR_0, struct ubi_eba_table *VAR_1)
{
 FUNC_0(VAR_0->eba_tbl);
 VAR_0->eba_tbl = VAR_1;
}
