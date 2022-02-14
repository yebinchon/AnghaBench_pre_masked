
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wmi_probed_ssid_cmd {int ssid; scalar_t__ ssid_len; scalar_t__ flag; scalar_t__ entry_index; } ;
struct wmi {int is_probe_ssid; } ;
struct sk_buff {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct wmi*,scalar_t__,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__*,scalar_t__) ;

int FUNC_3(struct wmi *VAR_8, u8 VAR_9, u8 VAR_10, u8 VAR_11,
         u8 VAR_12, u8 *VAR_13)
{
 struct sk_buff *VAR_14;
 struct wmi_probed_ssid_cmd *VAR_15;
 int VAR_16;

 if (VAR_10 >= VAR_4)
  return -VAR_2;

 if (VAR_12 > sizeof(VAR_15->ssid))
  return -VAR_2;

 if ((VAR_11 & (VAR_1 | VAR_0)) && (VAR_12 > 0))
  return -VAR_2;

 if ((VAR_11 & VAR_6) && !VAR_12)
  return -VAR_2;

 if (VAR_11 & VAR_6)
  VAR_8->is_probe_ssid = 1;

 VAR_14 = FUNC_1(sizeof(*VAR_15));
 if (!VAR_14)
  return -VAR_3;

 VAR_15 = (struct wmi_probed_ssid_cmd *) VAR_14->data;
 VAR_15->entry_index = VAR_10;
 VAR_15->flag = VAR_11;
 VAR_15->ssid_len = VAR_12;
 FUNC_2(VAR_15->ssid, VAR_13, VAR_12);

 VAR_16 = FUNC_0(VAR_8, VAR_9, VAR_14, VAR_7,
      VAR_5);
 return VAR_16;
}
