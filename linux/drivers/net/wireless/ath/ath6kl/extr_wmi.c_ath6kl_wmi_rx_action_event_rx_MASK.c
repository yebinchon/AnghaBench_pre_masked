
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wmi_rx_action_event {int * data; int len; int freq; } ;
struct wmi {int dummy; } ;
struct ath6kl_vif {int wdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int *,int ,int ,int *,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct wmi *VAR_2, u8 *VAR_3, int VAR_4,
      struct ath6kl_vif *VAR_5)
{
 struct wmi_rx_action_event *VAR_6;
 u32 VAR_7;
 u16 VAR_8;

 if (VAR_4 < sizeof(*VAR_6))
  return -VAR_1;

 VAR_6 = (struct wmi_rx_action_event *) VAR_3;
 VAR_7 = FUNC_4(VAR_6->freq);
 VAR_8 = FUNC_3(VAR_6->len);
 if (VAR_3 + VAR_4 < VAR_6->data + VAR_8) {
  FUNC_1("invalid wmi_rx_action_event: len=%d dlen=%u\n",
      VAR_4, VAR_8);
  return -VAR_1;
 }
 FUNC_0(VAR_0, "rx_action: len=%u freq=%u\n", VAR_8, VAR_7);
 FUNC_2(&VAR_5->wdev, VAR_7, 0, VAR_6->data, VAR_8, 0);

 return 0;
}
