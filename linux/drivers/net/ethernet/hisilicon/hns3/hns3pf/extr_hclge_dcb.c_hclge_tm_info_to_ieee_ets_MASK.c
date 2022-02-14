
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct ieee_ets {int willing; int * tc_tsa; int * tc_tx_bw; int * prio_tc; int ets_cap; } ;
struct TYPE_6__ {TYPE_2__* tc_info; TYPE_1__* pg_info; int * prio_tc; } ;
struct hclge_dev {TYPE_3__ tm_info; int tc_max; } ;
struct TYPE_5__ {scalar_t__ tc_sch_mode; } ;
struct TYPE_4__ {int * tc_dwrr; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ieee_ets*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct hclge_dev *VAR_4,
          struct ieee_ets *VAR_5)
{
 u32 VAR_6;

 FUNC_0(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->willing = 1;
 VAR_5->ets_cap = VAR_4->tc_max;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_5->prio_tc[VAR_6] = VAR_4->tm_info.prio_tc[VAR_6];
  VAR_5->tc_tx_bw[VAR_6] = VAR_4->tm_info.pg_info[0].tc_dwrr[VAR_6];

  if (VAR_4->tm_info.tc_info[VAR_6].tc_sch_mode ==
      VAR_0)
   VAR_5->tc_tsa[VAR_6] = VAR_3;
  else
   VAR_5->tc_tsa[VAR_6] = VAR_2;
 }
}
