
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubi_volume {TYPE_2__* eba_tbl; } ;
struct ubi_eba_leb_desc {int lnum; int pnum; } ;
struct TYPE_4__ {TYPE_1__* entries; } ;
struct TYPE_3__ {int pnum; } ;



void FUNC_0(struct ubi_volume *VAR_0, int VAR_1,
         struct ubi_eba_leb_desc *VAR_2)
{
 VAR_2->lnum = VAR_1;
 VAR_2->pnum = VAR_0->eba_tbl->entries[VAR_1].pnum;
}
