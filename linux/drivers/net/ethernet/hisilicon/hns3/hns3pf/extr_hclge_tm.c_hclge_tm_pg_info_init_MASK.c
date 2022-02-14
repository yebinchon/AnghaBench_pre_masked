
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_4__ {size_t num_pg; int num_tc; TYPE_1__* pg_info; void** pg_dwrr; } ;
struct hclge_dev {TYPE_2__ tm_info; int hw_tc_map; } ;
struct TYPE_3__ {size_t pg_id; void** tc_dwrr; int tc_bit_map; int bw_limit; int pg_sch_mode; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct hclge_dev *VAR_3)
{


 u8 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->tm_info.num_pg; VAR_4++) {
  int VAR_5;

  VAR_3->tm_info.pg_dwrr[VAR_4] = VAR_4 ? 0 : 100;

  VAR_3->tm_info.pg_info[VAR_4].pg_id = VAR_4;
  VAR_3->tm_info.pg_info[VAR_4].pg_sch_mode = VAR_2;

  VAR_3->tm_info.pg_info[VAR_4].bw_limit = VAR_1;

  if (VAR_4 != 0)
   continue;

  VAR_3->tm_info.pg_info[VAR_4].tc_bit_map = VAR_3->hw_tc_map;
  for (VAR_5 = 0; VAR_5 < VAR_3->tm_info.num_tc; VAR_5++)
   VAR_3->tm_info.pg_info[VAR_4].tc_dwrr[VAR_5] = 100;
 }
}
