
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wmi_cmd_hdr {int seq_no; int command_id; } ;
struct wmi {scalar_t__ last_seq_id; int wmi_lock; int wmi_event_tasklet; int wmi_event_queue; int stopped; } ;
struct sk_buff {scalar_t__ data; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;


 int FUNC_0 (int *,struct sk_buff*) ;
 int FUNC_1 (struct wmi*,struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(void *VAR_0, struct sk_buff *VAR_1,
         enum htc_endpoint_id VAR_2)
{
 struct wmi *VAR_3 = VAR_0;
 struct wmi_cmd_hdr *VAR_4;
 unsigned long VAR_5;
 u16 VAR_6;

 if (FUNC_7(VAR_3->stopped))
  goto free_skb;

 VAR_4 = (struct wmi_cmd_hdr *) VAR_1->data;
 VAR_6 = FUNC_2(VAR_4->command_id);

 if (VAR_6 & 0x1000) {
  FUNC_4(&VAR_3->wmi_lock, VAR_5);
  FUNC_0(&VAR_3->wmi_event_queue, VAR_1);
  FUNC_5(&VAR_3->wmi_lock, VAR_5);
  FUNC_6(&VAR_3->wmi_event_tasklet);
  return;
 }


 FUNC_4(&VAR_3->wmi_lock, VAR_5);
 if (FUNC_2(VAR_4->seq_no) != VAR_3->last_seq_id) {
  FUNC_5(&VAR_3->wmi_lock, VAR_5);
  goto free_skb;
 }
 FUNC_5(&VAR_3->wmi_lock, VAR_5);


 FUNC_1(VAR_3, VAR_1);

free_skb:
 FUNC_3(VAR_1);
}
