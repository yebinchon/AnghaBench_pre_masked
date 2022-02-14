
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wmi_p2p_rx_probe_req_event {int * data; int len; int freq; } ;
struct wmi {int dummy; } ;
struct ath6kl_vif {scalar_t__ nw_type; int wdev; int probe_req_report; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int ,int ) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int *,int ,int ,int *,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct wmi *VAR_3, u8 *VAR_4, int VAR_5,
         struct ath6kl_vif *VAR_6)
{
 struct wmi_p2p_rx_probe_req_event *VAR_7;
 u32 VAR_8;
 u16 VAR_9;

 if (VAR_5 < sizeof(*VAR_7))
  return -VAR_2;

 VAR_7 = (struct wmi_p2p_rx_probe_req_event *) VAR_4;
 VAR_8 = FUNC_4(VAR_7->freq);
 VAR_9 = FUNC_3(VAR_7->len);
 if (VAR_4 + VAR_5 < VAR_7->data + VAR_9) {
  FUNC_1("invalid wmi_p2p_rx_probe_req_event: len=%d dlen=%u\n",
      VAR_5, VAR_9);
  return -VAR_2;
 }
 FUNC_0(VAR_1,
     "rx_probe_req: len=%u freq=%u probe_req_report=%d\n",
     VAR_9, VAR_8, VAR_6->probe_req_report);

 if (VAR_6->probe_req_report || VAR_6->nw_type == VAR_0)
  FUNC_2(&VAR_6->wdev, VAR_8, 0, VAR_7->data, VAR_9, 0);

 return 0;
}
