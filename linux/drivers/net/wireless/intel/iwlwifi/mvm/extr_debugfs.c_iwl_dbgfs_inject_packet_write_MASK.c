
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int cmd; int group_id; } ;
struct iwl_rx_packet {scalar_t__ data; TYPE_3__ hdr; } ;
struct iwl_rx_mpdu_desc {int mpdu_len; } ;
struct iwl_rx_cmd_buffer {int _page; int _offset; int truesize; int _rx_page_order; } ;
struct iwl_mvm {TYPE_2__* trans; } ;
typedef size_t ssize_t ;
typedef int loff_t ;
struct TYPE_5__ {TYPE_1__* trans_cfg; } ;
struct TYPE_4__ {scalar_t__ device_family; int mq_rx_supported; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct iwl_rx_cmd_buffer*) ;
 int FUNC_4 (struct iwl_mvm*) ;
 int FUNC_5 (struct iwl_mvm*,int *,struct iwl_rx_cmd_buffer*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 struct iwl_rx_packet* FUNC_10 (struct iwl_rx_cmd_buffer*) ;

__attribute__((used)) static ssize_t FUNC_11(struct iwl_mvm *VAR_9,
          char *VAR_10, size_t VAR_11,
          loff_t *VAR_12)
{
 struct iwl_rx_cmd_buffer VAR_13 = {
  ._rx_page_order = 0,
  .truesize = 0,
  ._offset = 0,
 };
 struct iwl_rx_packet *VAR_14;
 struct iwl_rx_mpdu_desc *VAR_15;
 int VAR_16 = VAR_11 / 2;
 int VAR_17 = -VAR_0;
 size_t VAR_18 = (VAR_9->trans->trans_cfg->device_family >=
        VAR_5) ?
  sizeof(struct iwl_rx_mpdu_desc) :
  VAR_6;

 if (!FUNC_4(VAR_9))
  return -VAR_1;


 if (!VAR_9->trans->trans_cfg->mq_rx_supported)
  return -VAR_3;

 VAR_13._page = FUNC_1(VAR_4, 0);
 if (!VAR_13._page)
  return -VAR_2;
 VAR_14 = FUNC_10(&VAR_13);

 VAR_17 = FUNC_2(FUNC_9(VAR_13._page), VAR_10, VAR_16);
 if (VAR_17)
  goto out;


 if (VAR_16 < sizeof(*VAR_14) + VAR_18)
  goto out;


 if (FUNC_0(VAR_14->hdr.group_id, VAR_14->hdr.cmd) !=
     FUNC_0(VAR_7, VAR_8))
  goto out;


 VAR_15 = (void *)VAR_14->data;
 if (FUNC_6(VAR_15->mpdu_len) !=
     (VAR_16 - VAR_18 - sizeof(*VAR_14)))
  goto out;

 FUNC_7();
 FUNC_5(VAR_9, ((void*)0), &VAR_13, 0);
 FUNC_8();
 VAR_17 = 0;

out:
 FUNC_3(&VAR_13);

 return VAR_17 ?: VAR_11;
}
