
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wmi_tx_complete_event {int num_msg; int msg_type; int msg_len; } ;
struct tx_complete_msg_v1 {int ack_failures; int rate_idx; int pkt_id; int status; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int ,int ,...) ;

__attribute__((used)) static int FUNC_1(u8 *VAR_1, int VAR_2)
{
 struct tx_complete_msg_v1 *VAR_3;
 struct wmi_tx_complete_event *VAR_4;
 int VAR_5;
 u16 VAR_6;

 VAR_4 = (struct wmi_tx_complete_event *) VAR_1;

 FUNC_0(VAR_0, "comp: %d %d %d\n",
     VAR_4->num_msg, VAR_4->msg_len, VAR_4->msg_type);

 for (VAR_5 = 0; VAR_5 < VAR_4->num_msg; VAR_5++) {
  VAR_6 = sizeof(struct wmi_tx_complete_event) +
      (VAR_5 * sizeof(struct tx_complete_msg_v1));
  VAR_3 = (struct tx_complete_msg_v1 *)(VAR_1 + VAR_6);

  FUNC_0(VAR_0, "msg: %d %d %d %d\n",
      VAR_3->status, VAR_3->pkt_id,
      VAR_3->rate_idx, VAR_3->ack_failures);
 }

 return 0;
}
