
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_rssi_threshold_params_cmd {int dummy; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wmi*,int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (struct wmi_rssi_threshold_params_cmd*,struct wmi_rssi_threshold_params_cmd*,int) ;

__attribute__((used)) static int FUNC_3(struct wmi *VAR_3,
   struct wmi_rssi_threshold_params_cmd *VAR_4)
{
 struct sk_buff *VAR_5;
 struct wmi_rssi_threshold_params_cmd *VAR_6;

 VAR_5 = FUNC_1(sizeof(*VAR_6));
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = (struct wmi_rssi_threshold_params_cmd *) VAR_5->data;
 FUNC_2(VAR_6, VAR_4, sizeof(struct wmi_rssi_threshold_params_cmd));

 return FUNC_0(VAR_3, 0, VAR_5, VAR_2,
       VAR_1);
}
