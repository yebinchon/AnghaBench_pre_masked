
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
typedef size_t u16 ;
typedef int tpc_value ;
struct wmi_pdev_tpc_config_event {int num_tx_chain; int rate_max; int flags; } ;
struct ath10k_tpc_stats {TYPE_1__* tpc_table; void** flag; } ;
struct ath10k {int dummy; } ;
typedef int buff ;
struct TYPE_2__ {size_t* pream_idx; int* rate_code; int * tpc_value; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;



 int VAR_6 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct ath10k*,int ,char*,...) ;
 int FUNC_2 (struct ath10k*,struct wmi_pdev_tpc_config_event*,size_t,size_t,int,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static void FUNC_7(struct ath10k *VAR_7,
       struct wmi_pdev_tpc_config_event *VAR_8,
       struct ath10k_tpc_stats *VAR_9,
       u8 *VAR_10, u16 *VAR_11, u8 VAR_12)
{
 u32 VAR_13, VAR_14, VAR_15, VAR_16;
 u8 VAR_17[VAR_6];
 char VAR_18[VAR_6 * VAR_2];
 char VAR_19[VAR_2];

 VAR_16 = FUNC_0(VAR_8->flags);

 switch (VAR_12) {
 case 130:
  if (!(VAR_16 & VAR_3)) {
   FUNC_1(VAR_7, VAR_0, "CDD not supported\n");
   VAR_9->flag[VAR_12] = VAR_1;
   return;
  }
  break;
 case 129:
  if (!(VAR_16 & VAR_4)) {
   FUNC_1(VAR_7, VAR_0, "STBC not supported\n");
   VAR_9->flag[VAR_12] = VAR_1;
   return;
  }
  break;
 case 128:
  if (!(VAR_16 & VAR_5)) {
   FUNC_1(VAR_7, VAR_0, "TXBF not supported\n");
   VAR_9->flag[VAR_12] = VAR_1;
   return;
  }
  break;
 default:
  FUNC_1(VAR_7, VAR_0,
      "invalid table type in wmi tpc event: %d\n", VAR_12);
  return;
 }

 VAR_15 = 0;
 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_8->rate_max); VAR_13++) {
  FUNC_4(VAR_18, 0, sizeof(VAR_18));
  FUNC_4(VAR_19, 0, sizeof(VAR_19));
  if (VAR_13 == VAR_11[VAR_15])
   VAR_15++;

  for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
   if (VAR_14 >= FUNC_0(VAR_8->num_tx_chain))
    break;

   VAR_17[VAR_14] = FUNC_2(VAR_7, VAR_8, VAR_13, VAR_14 + 1,
           VAR_10[VAR_13],
           VAR_12);
   FUNC_5(VAR_19, sizeof(VAR_19), "%8d ", VAR_17[VAR_14]);
   FUNC_6(VAR_18, VAR_19, sizeof(VAR_18));
  }
  VAR_9->tpc_table[VAR_12].pream_idx[VAR_13] = VAR_15;
  VAR_9->tpc_table[VAR_12].rate_code[VAR_13] = VAR_10[VAR_13];
  FUNC_3(VAR_9->tpc_table[VAR_12].tpc_value[VAR_13],
         VAR_18, sizeof(VAR_18));
 }
}
