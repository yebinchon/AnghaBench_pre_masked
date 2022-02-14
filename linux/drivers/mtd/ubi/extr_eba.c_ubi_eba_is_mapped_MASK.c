
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubi_volume {TYPE_2__* eba_tbl; } ;
struct TYPE_4__ {TYPE_1__* entries; } ;
struct TYPE_3__ {scalar_t__ pnum; } ;



bool FUNC_0(struct ubi_volume *VAR_0, int VAR_1)
{
 return VAR_0->eba_tbl->entries[VAR_1].pnum >= 0;
}
