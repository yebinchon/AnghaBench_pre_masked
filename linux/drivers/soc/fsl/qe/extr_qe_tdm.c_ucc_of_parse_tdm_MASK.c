
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_2__ {void* tdm_num; void* tx_sync; void* rx_sync; } ;
struct ucc_tdm_info {TYPE_1__ uf_info; } ;
struct ucc_tdm {int tdm_framer_type; void* siram_entry_id; int tdm_mode; void* tdm_port; void* rx_ts_mask; void* tx_ts_mask; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (struct device_node*,char*,int *) ;
 scalar_t__ FUNC_1 (struct device_node*,char*) ;
 int FUNC_2 (struct device_node*,char*,int ,void**) ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (char const*) ;
 int FUNC_5 (struct ucc_tdm*,struct ucc_tdm_info*) ;
 int FUNC_6 (char const*) ;

int FUNC_7(struct device_node *VAR_6, struct ucc_tdm *VAR_7,
       struct ucc_tdm_info *VAR_8)
{
 const char *VAR_9;
 int VAR_10 = 0;
 u32 VAR_11;

 VAR_9 = FUNC_0(VAR_6, "fsl,rx-sync-clock", ((void*)0));
 if (VAR_9) {
  VAR_8->uf_info.rx_sync = FUNC_4(VAR_9);
  if ((VAR_8->uf_info.rx_sync < VAR_1) ||
      (VAR_8->uf_info.rx_sync > VAR_2)) {
   FUNC_3("QE-TDM: Invalid rx-sync-clock property\n");
   return -VAR_0;
  }
 } else {
  FUNC_3("QE-TDM: Invalid rx-sync-clock property\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_0(VAR_6, "fsl,tx-sync-clock", ((void*)0));
 if (VAR_9) {
  VAR_8->uf_info.tx_sync = FUNC_4(VAR_9);
  if ((VAR_8->uf_info.tx_sync < VAR_1) ||
      (VAR_8->uf_info.tx_sync > VAR_3)) {
   FUNC_3("QE-TDM: Invalid tx-sync-clock property\n");
  return -VAR_0;
  }
 } else {
  FUNC_3("QE-TDM: Invalid tx-sync-clock property\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_2(VAR_6, "fsl,tx-timeslot-mask", 0, &VAR_11);
 if (VAR_10) {
  FUNC_3("QE-TDM: Invalid tx-timeslot-mask property\n");
  return -VAR_0;
 }
 VAR_7->tx_ts_mask = VAR_11;

 VAR_10 = FUNC_2(VAR_6, "fsl,rx-timeslot-mask", 0, &VAR_11);
 if (VAR_10) {
  VAR_10 = -VAR_0;
  FUNC_3("QE-TDM: Invalid rx-timeslot-mask property\n");
  return VAR_10;
 }
 VAR_7->rx_ts_mask = VAR_11;

 VAR_10 = FUNC_2(VAR_6, "fsl,tdm-id", 0, &VAR_11);
 if (VAR_10) {
  VAR_10 = -VAR_0;
  FUNC_3("QE-TDM: No fsl,tdm-id property for this UCC\n");
  return VAR_10;
 }
 VAR_7->tdm_port = VAR_11;
 VAR_8->uf_info.tdm_num = VAR_7->tdm_port;

 if (FUNC_1(VAR_6, "fsl,tdm-internal-loopback"))
  VAR_7->tdm_mode = VAR_4;
 else
  VAR_7->tdm_mode = VAR_5;

 VAR_9 = FUNC_0(VAR_6, "fsl,tdm-framer-type", ((void*)0));
 if (!VAR_9) {
  VAR_10 = -VAR_0;
  FUNC_3("QE-TDM: No tdm-framer-type property for UCC\n");
  return VAR_10;
 }
 VAR_10 = FUNC_6(VAR_9);
 if (VAR_10 < 0)
  return -VAR_0;
 VAR_7->tdm_framer_type = VAR_10;

 VAR_10 = FUNC_2(VAR_6, "fsl,siram-entry-id", 0, &VAR_11);
 if (VAR_10) {
  VAR_10 = -VAR_0;
  FUNC_3("QE-TDM: No siram entry id for UCC\n");
  return VAR_10;
 }
 VAR_7->siram_entry_id = VAR_11;

 FUNC_5(VAR_7, VAR_8);
 return VAR_10;
}
