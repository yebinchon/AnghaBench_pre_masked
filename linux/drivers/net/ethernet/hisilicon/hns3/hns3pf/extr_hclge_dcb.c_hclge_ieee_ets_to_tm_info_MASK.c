
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct ieee_ets {int* tc_tsa; int prio_tc; int * tc_tx_bw; } ;
struct TYPE_6__ {TYPE_2__* pg_info; TYPE_1__* tc_info; } ;
struct hclge_dev {TYPE_3__ tm_info; } ;
struct TYPE_5__ {int * tc_dwrr; } ;
struct TYPE_4__ {int tc_sch_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;


 int FUNC_0 (struct hclge_dev*,int ) ;

__attribute__((used)) static int FUNC_1(struct hclge_dev *VAR_4,
         struct ieee_ets *VAR_5)
{
 u8 VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  switch (VAR_5->tc_tsa[VAR_6]) {
  case 128:
   VAR_4->tm_info.tc_info[VAR_6].tc_sch_mode =
    VAR_2;
   VAR_4->tm_info.pg_info[0].tc_dwrr[VAR_6] = 0;
   break;
  case 129:
   VAR_4->tm_info.tc_info[VAR_6].tc_sch_mode =
    VAR_1;
   VAR_4->tm_info.pg_info[0].tc_dwrr[VAR_6] =
    VAR_5->tc_tx_bw[VAR_6];
   break;
  default:





   return -VAR_0;
  }
 }

 FUNC_0(VAR_4, VAR_5->prio_tc);

 return 0;
}
