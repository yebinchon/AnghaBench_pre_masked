
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct wmi_bss_filter_cmd {int ie_mask; scalar_t__ bss_filter; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct wmi*,scalar_t__,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct wmi *VAR_5, u8 VAR_6, u8 VAR_7, u32 VAR_8)
{
 struct sk_buff *VAR_9;
 struct wmi_bss_filter_cmd *VAR_10;
 int VAR_11;

 if (VAR_7 >= VAR_2)
  return -VAR_0;

 VAR_9 = FUNC_1(sizeof(*VAR_10));
 if (!VAR_9)
  return -VAR_1;

 VAR_10 = (struct wmi_bss_filter_cmd *) VAR_9->data;
 VAR_10->bss_filter = VAR_7;
 VAR_10->ie_mask = FUNC_2(VAR_8);

 VAR_11 = FUNC_0(VAR_5, VAR_6, VAR_9, VAR_4,
      VAR_3);
 return VAR_11;
}
