
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int num_entries; TYPE_1__* arr; } ;
struct TYPE_7__ {int num_entries; TYPE_2__* arr; } ;
struct TYPE_6__ {int fwh; int adh; } ;
struct TYPE_5__ {int macaddr; int reg_type; int port_id; int adh; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_4;

 if (VAR_3.arr)
  for (VAR_4 = 0; VAR_4 < VAR_3.num_entries; VAR_4++)
   FUNC_0(VAR_3.arr[VAR_4].adh,
          VAR_3.arr[VAR_4].fwh,
          VAR_0);

 if (VAR_2.arr)
  for (VAR_4 = 0; VAR_4 < VAR_2.num_entries; VAR_4++)
   FUNC_1(VAR_2.arr[VAR_4].adh,
           VAR_2.arr[VAR_4].port_id,
           VAR_2.arr[VAR_4].reg_type,
           VAR_2.arr[VAR_4].macaddr,
           0, VAR_1);
}
