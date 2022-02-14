
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_mvm {int trans; int d3_test_active; int mutex; } ;
struct iwl_host_cmd {int flags; struct iwl_rx_packet* resp_pkt; } ;
struct iwl_cmd_response {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,char*,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct iwl_host_cmd*) ;
 int FUNC_4 (struct iwl_rx_packet*) ;
 int FUNC_5 (int ,struct iwl_host_cmd*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct iwl_mvm *VAR_5, struct iwl_host_cmd *VAR_6,
       u32 *VAR_7)
{
 struct iwl_rx_packet *VAR_8;
 struct iwl_cmd_response *VAR_9;
 int VAR_10, VAR_11;

 FUNC_7(&VAR_5->mutex);
 if (FUNC_1(VAR_6->flags & (VAR_0 | VAR_1),
        "cmd flags %x", VAR_6->flags))
  return -VAR_2;

 VAR_6->flags |= VAR_1;

 VAR_10 = FUNC_5(VAR_5->trans, VAR_6);
 if (VAR_10 == -VAR_4) {




  return 0;
 } else if (VAR_10) {
  return VAR_10;
 }

 VAR_8 = VAR_6->resp_pkt;

 VAR_11 = FUNC_4(VAR_8);
 if (FUNC_2(VAR_11 != sizeof(*VAR_9))) {
  VAR_10 = -VAR_3;
  goto out_free_resp;
 }

 VAR_9 = (void *)VAR_8->data;
 *VAR_7 = FUNC_6(VAR_9->status);
 out_free_resp:
 FUNC_3(VAR_6);
 return VAR_10;
}
