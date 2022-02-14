
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {size_t num_pg; int * pg_dwrr; } ;
struct hclge_dev {scalar_t__ tx_sch_mode; TYPE_1__ tm_info; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hclge_dev*,size_t,int ) ;

__attribute__((used)) static int FUNC_1(struct hclge_dev *VAR_1)
{
 int VAR_2;
 u32 VAR_3;


 if (VAR_1->tx_sch_mode != VAR_0)
  return 0;


 for (VAR_3 = 0; VAR_3 < VAR_1->tm_info.num_pg; VAR_3++) {

  VAR_2 = FUNC_0(VAR_1, VAR_3, VAR_1->tm_info.pg_dwrr[VAR_3]);
  if (VAR_2)
   return VAR_2;
 }

 return 0;
}
