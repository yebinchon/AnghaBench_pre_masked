
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wmi_reconnect_cmd {int bssid; int channel; } ;
struct wmi {int traffic_class; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int *,int ) ;
 int FUNC_1 (struct wmi*,int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int ) ;

int FUNC_5(struct wmi *VAR_5, u8 VAR_6, u8 *VAR_7,
        u16 VAR_8)
{
 struct sk_buff *VAR_9;
 struct wmi_reconnect_cmd *VAR_10;
 int VAR_11;

 FUNC_0(VAR_0, "wmi reconnect bssid %pM freq %d\n",
     VAR_7, VAR_8);

 VAR_5->traffic_class = 100;

 VAR_9 = FUNC_2(sizeof(struct wmi_reconnect_cmd));
 if (!VAR_9)
  return -VAR_1;

 VAR_10 = (struct wmi_reconnect_cmd *) VAR_9->data;
 VAR_10->channel = FUNC_3(VAR_8);

 if (VAR_7 != ((void*)0))
  FUNC_4(VAR_10->bssid, VAR_7, VAR_2);

 VAR_11 = FUNC_1(VAR_5, VAR_6, VAR_9, VAR_4,
      VAR_3);

 return VAR_11;
}
