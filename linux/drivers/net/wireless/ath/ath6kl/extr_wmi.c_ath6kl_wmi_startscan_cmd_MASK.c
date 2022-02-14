
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wmi_start_scan_cmd {int scan_type; int num_ch; int * ch_list; void* force_scan_intvl; void* home_dwell_time; void* is_legacy; void* force_fg_scan; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
typedef int s8 ;
typedef enum wmi_scan_type { ____Placeholder_wmi_scan_type } wmi_scan_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct wmi*,int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct wmi *VAR_7, u8 VAR_8,
        enum wmi_scan_type VAR_9,
        u32 VAR_10, u32 VAR_11,
        u32 VAR_12,
        u32 VAR_13,
        s8 VAR_14, u16 *VAR_15)
{
 struct sk_buff *VAR_16;
 struct wmi_start_scan_cmd *VAR_17;
 s8 VAR_18;
 int VAR_19, VAR_20;

 VAR_18 = sizeof(struct wmi_start_scan_cmd);

 if ((VAR_9 != VAR_3) && (VAR_9 != VAR_5))
  return -VAR_0;

 if (VAR_14 > VAR_4)
  return -VAR_0;

 if (VAR_14)
  VAR_18 += sizeof(u16) * (VAR_14 - 1);

 VAR_16 = FUNC_1(VAR_18);
 if (!VAR_16)
  return -VAR_1;

 VAR_17 = (struct wmi_start_scan_cmd *) VAR_16->data;
 VAR_17->scan_type = VAR_9;
 VAR_17->force_fg_scan = FUNC_3(VAR_10);
 VAR_17->is_legacy = FUNC_3(VAR_11);
 VAR_17->home_dwell_time = FUNC_3(VAR_12);
 VAR_17->force_scan_intvl = FUNC_3(VAR_13);
 VAR_17->num_ch = VAR_14;

 for (VAR_19 = 0; VAR_19 < VAR_14; VAR_19++)
  VAR_17->ch_list[VAR_19] = FUNC_2(VAR_15[VAR_19]);

 VAR_20 = FUNC_0(VAR_7, VAR_8, VAR_16, VAR_6,
      VAR_2);

 return VAR_20;
}
