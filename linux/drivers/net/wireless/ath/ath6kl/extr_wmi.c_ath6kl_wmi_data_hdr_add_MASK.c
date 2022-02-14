
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wmi_data_hdr {int info; int info3; int info2; } ;
struct wmi {TYPE_1__* parent_dev; } ;
struct sk_buff {scalar_t__ data; } ;
typedef enum wmi_data_hdr_data_type { ____Placeholder_wmi_data_hdr_data_type } wmi_data_hdr_data_type ;
struct TYPE_2__ {int vif_max; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct wmi*,struct sk_buff*,int*,void*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct wmi_data_hdr*,int ,int) ;
 int FUNC_4 (struct sk_buff*,int) ;

int FUNC_5(struct wmi *VAR_9, struct sk_buff *VAR_10,
       u8 VAR_11, u32 VAR_12,
       enum wmi_data_hdr_data_type VAR_13,
       u8 VAR_14, void *VAR_15, u8 VAR_16)
{
 struct wmi_data_hdr *VAR_17;
 int VAR_18;

 if (FUNC_0(VAR_10 == ((void*)0) || (VAR_16 > VAR_9->parent_dev->vif_max - 1)))
  return -VAR_0;

 if (VAR_15) {
  VAR_18 = FUNC_1(VAR_9, VAR_10, &VAR_14, VAR_15);
  if (VAR_18)
   return VAR_18;
 }

 FUNC_4(VAR_10, sizeof(struct wmi_data_hdr));

 VAR_17 = (struct wmi_data_hdr *)VAR_10->data;
 FUNC_3(VAR_17, 0, sizeof(struct wmi_data_hdr));

 VAR_17->info = VAR_11 << VAR_8;
 VAR_17->info |= VAR_13 << VAR_1;

 if (VAR_12 & VAR_4)
  VAR_17->info |= VAR_7;

 if (VAR_12 & VAR_3)
  VAR_17->info3 |= FUNC_2(VAR_2);

 VAR_17->info2 |= FUNC_2(VAR_14 << VAR_6);
 VAR_17->info3 |= FUNC_2(VAR_16 & VAR_5);

 return 0;
}
