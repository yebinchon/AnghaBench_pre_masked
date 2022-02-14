
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {size_t num_pg; TYPE_1__* pg_info; } ;
struct hclge_dev {scalar_t__ tx_sch_mode; TYPE_2__ tm_info; } ;
struct TYPE_3__ {int tc_bit_map; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hclge_dev*,size_t,int ) ;

__attribute__((used)) static int FUNC_1(struct hclge_dev *VAR_1)
{
 int VAR_2;
 u32 VAR_3;

 if (VAR_1->tx_sch_mode != VAR_0)
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->tm_info.num_pg; VAR_3++) {

  VAR_2 = FUNC_0(
   VAR_1, VAR_3, VAR_1->tm_info.pg_info[VAR_3].tc_bit_map);
  if (VAR_2)
   return VAR_2;
 }

 return 0;
}
