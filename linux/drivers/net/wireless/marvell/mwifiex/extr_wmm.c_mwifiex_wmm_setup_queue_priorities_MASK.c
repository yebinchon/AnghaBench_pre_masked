
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct TYPE_4__ {int* queue_priority; } ;
struct mwifiex_private {TYPE_1__ wmm; int adapter; int wmm_enabled; } ;
struct ieee_types_wmm_parameter {int version; int qos_info_bitmap; int reserved; TYPE_2__* ac_params; } ;
struct TYPE_5__ {int ecw_bitmap; int aci_aifsn_bitmap; } ;


 size_t FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,char*,int,int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct mwifiex_private*) ;
 int FUNC_4 (struct mwifiex_private*) ;
 int FUNC_5 (int,int) ;
 int* VAR_6 ;

void
FUNC_6(struct mwifiex_private *VAR_7,
       struct ieee_types_wmm_parameter *VAR_8)
{
 u16 VAR_9, VAR_10, VAR_11[4];
 u32 VAR_12, VAR_13, VAR_14;
 u8 VAR_15;

 if (!VAR_8 || !VAR_7->wmm_enabled) {

  FUNC_3(VAR_7);
  return;
 }

 FUNC_1(VAR_7->adapter, VAR_1,
      "info: WMM Parameter IE: version=%d,\t"
      "qos_info Parameter Set Count=%d, Reserved=%#x\n",
      VAR_8->version, VAR_8->qos_info_bitmap &
      VAR_0,
      VAR_8->reserved);

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_8->ac_params); VAR_14++) {
  u8 VAR_16 = VAR_8->ac_params[VAR_14].ecw_bitmap;
  u8 VAR_17 = VAR_8->ac_params[VAR_14].aci_aifsn_bitmap;
  VAR_9 = (1 << (VAR_16 & VAR_5)) - 1;
  VAR_10 = (VAR_9 >> 1) + (VAR_17 & VAR_3);

  VAR_15 = VAR_6[(VAR_17 & VAR_2) >> 5];
  VAR_7->wmm.queue_priority[VAR_15] = VAR_15;
  VAR_11[VAR_15] = VAR_10;

  FUNC_1(VAR_7->adapter, VAR_1,
       "info: WMM: CWmax=%d CWmin=%d Avg Back-off=%d\n",
       (1 << ((VAR_16 & VAR_4) >> 4)) - 1,
       VAR_9, VAR_10);
  FUNC_2(&VAR_8->ac_params[VAR_14]);
 }


 for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++) {
  for (VAR_13 = 1; VAR_13 < VAR_14 - VAR_12; VAR_13++) {
   if (VAR_11[VAR_13 - 1] > VAR_11[VAR_13]) {
    FUNC_5(VAR_11[VAR_13 - 1], VAR_11[VAR_13]);
    FUNC_5(VAR_7->wmm.queue_priority[VAR_13 - 1],
         VAR_7->wmm.queue_priority[VAR_13]);
   } else if (VAR_11[VAR_13 - 1] == VAR_11[VAR_13]) {
    if (VAR_7->wmm.queue_priority[VAR_13 - 1]
        < VAR_7->wmm.queue_priority[VAR_13])
     FUNC_5(VAR_7->wmm.queue_priority[VAR_13 - 1],
          VAR_7->wmm.queue_priority[VAR_13]);
   }
  }
 }

 FUNC_4(VAR_7);
}
