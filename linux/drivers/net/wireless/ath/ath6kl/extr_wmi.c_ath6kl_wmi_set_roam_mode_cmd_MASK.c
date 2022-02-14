
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int roam_mode; } ;
struct roam_ctrl_cmd {int roam_ctrl; TYPE_1__ info; } ;
typedef enum wmi_roam_mode { ____Placeholder_wmi_roam_mode } wmi_roam_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct wmi*,int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_2 (int) ;

int FUNC_3(struct wmi *VAR_5, enum wmi_roam_mode VAR_6)
{
 struct sk_buff *VAR_7;
 struct roam_ctrl_cmd *VAR_8;

 VAR_7 = FUNC_2(sizeof(*VAR_8));
 if (!VAR_7)
  return -VAR_1;

 VAR_8 = (struct roam_ctrl_cmd *) VAR_7->data;

 VAR_8->info.roam_mode = VAR_6;
 VAR_8->roam_ctrl = VAR_4;

 FUNC_0(VAR_0, "set roam mode %d\n", VAR_6);
 return FUNC_1(VAR_5, 0, VAR_7, VAR_3,
       VAR_2);
}
