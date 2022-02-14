
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct iwl_txq {int write_ptr; } ;
struct iwl_tx_cmd_gen3 {int dummy; } ;
struct iwl_tx_cmd_gen2 {int dummy; } ;
struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct iwl_tfh_tfd {int dummy; } ;
struct iwl_device_cmd {int dummy; } ;
struct iwl_cmd_meta {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_4__ {scalar_t__ gso_size; } ;
struct TYPE_3__ {scalar_t__ device_family; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int* FUNC_1 (struct ieee80211_hdr*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct iwl_tfh_tfd* FUNC_4 (struct iwl_trans*,struct iwl_txq*,struct iwl_device_cmd*,struct sk_buff*,struct iwl_cmd_meta*,int,int,int) ;
 struct iwl_tfh_tfd* FUNC_5 (struct iwl_trans*,struct iwl_txq*,struct iwl_device_cmd*,struct sk_buff*,struct iwl_cmd_meta*,int,int) ;
 int FUNC_6 (struct iwl_txq*,int ) ;
 struct iwl_tfh_tfd* FUNC_7 (struct iwl_trans*,struct iwl_txq*,int) ;
 int FUNC_8 (struct iwl_tfh_tfd*,int ,int) ;
 TYPE_2__* FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static
struct iwl_tfh_tfd *FUNC_10(struct iwl_trans *VAR_3,
         struct iwl_txq *VAR_4,
         struct iwl_device_cmd *VAR_5,
         struct sk_buff *VAR_6,
         struct iwl_cmd_meta *VAR_7)
{
 struct ieee80211_hdr *VAR_8 = (struct ieee80211_hdr *)VAR_6->data;
 int VAR_9 = FUNC_6(VAR_4, VAR_4->write_ptr);
 struct iwl_tfh_tfd *VAR_10 = FUNC_7(VAR_3, VAR_4, VAR_9);
 int VAR_11, VAR_12;
 bool VAR_13;


 FUNC_0(sizeof(struct iwl_tx_cmd_gen2) < VAR_2);

 FUNC_8(VAR_10, 0, sizeof(*VAR_10));

 if (VAR_3->trans_cfg->device_family < VAR_1)
  VAR_11 = sizeof(struct iwl_tx_cmd_gen2);
 else
  VAR_11 = sizeof(struct iwl_tx_cmd_gen3);

 VAR_13 = FUNC_3(VAR_8->frame_control) &&
   (*FUNC_1(VAR_8) &
    VAR_0);

 VAR_12 = FUNC_2(VAR_8->frame_control);






 if (VAR_13 && FUNC_9(VAR_6)->gso_size)
  return FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6,
          VAR_7, VAR_12, VAR_11);

 return FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
          VAR_12, VAR_11, !VAR_13);
}
