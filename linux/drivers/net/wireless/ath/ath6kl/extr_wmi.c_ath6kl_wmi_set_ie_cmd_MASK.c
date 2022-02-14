
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wmi_set_ie_cmd {int ie_info; scalar_t__ ie_len; scalar_t__ ie_field; scalar_t__ ie_id; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct wmi*,scalar_t__,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__ const*,scalar_t__) ;

int FUNC_4(struct wmi *VAR_4, u8 VAR_5, u8 VAR_6, u8 VAR_7,
     const u8 *VAR_8, u8 VAR_9)
{
 struct sk_buff *VAR_10;
 struct wmi_set_ie_cmd *VAR_11;

 VAR_10 = FUNC_2(sizeof(*VAR_11) + VAR_9);
 if (!VAR_10)
  return -VAR_1;

 FUNC_0(VAR_0, "set_ie_cmd: ie_id=%u ie_ie_field=%u ie_len=%u\n",
     VAR_6, VAR_7, VAR_9);
 VAR_11 = (struct wmi_set_ie_cmd *) VAR_10->data;
 VAR_11->ie_id = VAR_6;
 VAR_11->ie_field = VAR_7;
 VAR_11->ie_len = VAR_9;
 if (VAR_8 && VAR_9 > 0)
  FUNC_3(VAR_11->ie_info, VAR_8, VAR_9);

 return FUNC_1(VAR_4, VAR_5, VAR_10, VAR_3,
       VAR_2);
}
