
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct iwl_rxq_sync_cmd {int payload; scalar_t__ flags; void* count; void* rxq_mask; } ;
struct iwl_mvm_rss_sync_notif {int dummy; } ;
struct iwl_mvm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct iwl_mvm*,int ,int ,int,struct iwl_rxq_sync_cmd*) ;
 int FUNC_4 (int ,int const*,int) ;

int FUNC_5(struct iwl_mvm *VAR_4, u32 VAR_5,
       const u8 *VAR_6, u32 VAR_7, bool VAR_8)
{
 u8 VAR_9[sizeof(struct iwl_rxq_sync_cmd) +
        sizeof(struct iwl_mvm_rss_sync_notif)];
 struct iwl_rxq_sync_cmd *VAR_10 = (void *)VAR_9;
 u32 VAR_11 = sizeof(*VAR_10) + VAR_7;
 int VAR_12;





 if (FUNC_0(VAR_7 & 3 ||
      VAR_7 > sizeof(struct iwl_mvm_rss_sync_notif)))
  return -VAR_2;

 VAR_10->rxq_mask = FUNC_2(VAR_5);
 VAR_10->count = FUNC_2(VAR_7);
 VAR_10->flags = 0;
 FUNC_4(VAR_10->payload, VAR_6, VAR_7);

 VAR_12 = FUNC_3(VAR_4,
       FUNC_1(VAR_1,
        VAR_3),
       VAR_8 ? VAR_0 : 0, VAR_11, VAR_10);

 return VAR_12;
}
