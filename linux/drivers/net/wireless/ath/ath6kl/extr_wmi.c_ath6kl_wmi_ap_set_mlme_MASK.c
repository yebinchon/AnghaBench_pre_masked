
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wmi_ap_set_mlme_cmd {int reason; int cmd; int mac; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct wmi*,int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int const*,int ) ;

int FUNC_5(struct wmi *VAR_5, u8 VAR_6, u8 VAR_7, const u8 *VAR_8,
      u16 VAR_9)
{
 struct sk_buff *VAR_10;
 struct wmi_ap_set_mlme_cmd *VAR_11;

 VAR_10 = FUNC_2(sizeof(*VAR_11));
 if (!VAR_10)
  return -VAR_1;

 VAR_11 = (struct wmi_ap_set_mlme_cmd *) VAR_10->data;
 FUNC_4(VAR_11->mac, VAR_8, VAR_2);
 VAR_11->reason = FUNC_3(VAR_9);
 VAR_11->cmd = VAR_7;

 FUNC_0(VAR_0, "ap_set_mlme: cmd=%d reason=%d\n", VAR_11->cmd,
     VAR_11->reason);

 return FUNC_1(VAR_5, VAR_6, VAR_10, VAR_4,
       VAR_3);
}
