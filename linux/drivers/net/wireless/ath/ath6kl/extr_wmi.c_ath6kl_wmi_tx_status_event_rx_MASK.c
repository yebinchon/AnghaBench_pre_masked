
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wmi_tx_status_event {int ack_status; int id; } ;
struct wmi {int last_mgmt_tx_frame_len; int * last_mgmt_tx_frame; } ;
struct ath6kl_vif {int wdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int *,int ,int *,int ,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct wmi *VAR_3, u8 *VAR_4, int VAR_5,
      struct ath6kl_vif *VAR_6)
{
 struct wmi_tx_status_event *VAR_7;
 u32 VAR_8;

 if (VAR_5 < sizeof(*VAR_7))
  return -VAR_1;

 VAR_7 = (struct wmi_tx_status_event *) VAR_4;
 VAR_8 = FUNC_3(VAR_7->id);
 FUNC_0(VAR_0, "tx_status: id=%x ack_status=%u\n",
     VAR_8, VAR_7->ack_status);
 if (VAR_3->last_mgmt_tx_frame) {
  FUNC_1(&VAR_6->wdev, VAR_8,
     VAR_3->last_mgmt_tx_frame,
     VAR_3->last_mgmt_tx_frame_len,
     !!VAR_7->ack_status, VAR_2);
  FUNC_2(VAR_3->last_mgmt_tx_frame);
  VAR_3->last_mgmt_tx_frame = ((void*)0);
  VAR_3->last_mgmt_tx_frame_len = 0;
 }

 return 0;
}
