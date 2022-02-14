
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
typedef int u16 ;
struct wmi_scan_params_cmd {void* maxact_scan_per_ssid; int max_dfsch_act_time; void* scan_ctrl_flags; void* short_scan_ratio; void* pas_chdwell_time; void* maxact_chdwell_time; void* minact_chdwell_time; void* bg_period; void* fg_end_period; void* fg_start_period; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wmi*,void*,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct wmi *VAR_3, u8 VAR_4,
         u16 VAR_5,
         u16 VAR_6, u16 VAR_7,
         u16 VAR_8, u16 VAR_9,
         u16 VAR_10, u8 VAR_11,
         u8 VAR_12, u32 VAR_13,
         u16 VAR_14)
{
 struct sk_buff *VAR_15;
 struct wmi_scan_params_cmd *VAR_16;
 int VAR_17;

 VAR_15 = FUNC_1(sizeof(*VAR_16));
 if (!VAR_15)
  return -VAR_0;

 VAR_16 = (struct wmi_scan_params_cmd *) VAR_15->data;
 VAR_16->fg_start_period = FUNC_2(VAR_5);
 VAR_16->fg_end_period = FUNC_2(VAR_6);
 VAR_16->bg_period = FUNC_2(VAR_7);
 VAR_16->minact_chdwell_time = FUNC_2(VAR_8);
 VAR_16->maxact_chdwell_time = FUNC_2(VAR_9);
 VAR_16->pas_chdwell_time = FUNC_2(VAR_10);
 VAR_16->short_scan_ratio = VAR_11;
 VAR_16->scan_ctrl_flags = VAR_12;
 VAR_16->max_dfsch_act_time = FUNC_3(VAR_13);
 VAR_16->maxact_scan_per_ssid = FUNC_2(VAR_14);

 VAR_17 = FUNC_0(VAR_3, VAR_4, VAR_15, VAR_2,
      VAR_1);
 return VAR_17;
}
