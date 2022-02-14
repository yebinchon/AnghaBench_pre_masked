
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct ieee_ets {scalar_t__* prio_tc; int* tc_tsa; int * tc_tx_bw; } ;
struct TYPE_4__ {scalar_t__* prio_tc; size_t num_tc; TYPE_1__* tc_info; } ;
struct hclge_dev {TYPE_2__ tm_info; } ;
struct TYPE_3__ {int tc_sch_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;


 int FUNC_0 (struct hclge_dev*,size_t,size_t*) ;

__attribute__((used)) static int FUNC_1(struct hclge_dev *VAR_6, struct ieee_ets *VAR_7,
         u8 *VAR_8, bool *VAR_9)
{
 bool VAR_10 = 0;
 u32 VAR_11 = 0;
 u8 VAR_12 = 0;
 int VAR_13;
 u8 VAR_14;

 for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
  if (VAR_7->prio_tc[VAR_14] != VAR_6->tm_info.prio_tc[VAR_14])
   *VAR_9 = 1;

  if (VAR_7->prio_tc[VAR_14] > VAR_12)
   VAR_12 = VAR_7->prio_tc[VAR_14];
 }

 VAR_13 = FUNC_0(VAR_6, VAR_12 + 1, VAR_7->prio_tc);
 if (VAR_13)
  return VAR_13;

 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
  switch (VAR_7->tc_tsa[VAR_14]) {
  case 128:
   if (VAR_6->tm_info.tc_info[VAR_14].tc_sch_mode !=
    VAR_3)
    *VAR_9 = 1;
   break;
  case 129:
   if (VAR_6->tm_info.tc_info[VAR_14].tc_sch_mode !=
    VAR_2)
    *VAR_9 = 1;

   VAR_11 += VAR_7->tc_tx_bw[VAR_14];
   VAR_10 = 1;
   break;
  default:
   return -VAR_1;
  }
 }

 if (VAR_10 && VAR_11 != VAR_0)
  return -VAR_1;

 *VAR_8 = VAR_12 + 1;
 if (*VAR_8 != VAR_6->tm_info.num_tc)
  *VAR_9 = 1;

 return 0;
}
