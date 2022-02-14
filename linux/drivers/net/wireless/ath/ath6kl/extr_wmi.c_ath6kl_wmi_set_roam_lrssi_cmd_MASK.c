
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_3__ {int roam_rssi_floor; void* lrssi_roam_threshold; void* lrssi_scan_threshold; int lrssi_scan_period; } ;
struct TYPE_4__ {TYPE_1__ params; } ;
struct roam_ctrl_cmd {int roam_ctrl; TYPE_2__ info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct wmi*,int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct wmi *VAR_7, u8 VAR_8)
{
 struct sk_buff *VAR_9;
 struct roam_ctrl_cmd *VAR_10;

 VAR_9 = FUNC_2(sizeof(*VAR_10));
 if (!VAR_9)
  return -VAR_3;

 VAR_10 = (struct roam_ctrl_cmd *) VAR_9->data;

 VAR_10->info.params.lrssi_scan_period = FUNC_3(VAR_1);
 VAR_10->info.params.lrssi_scan_threshold = FUNC_0(VAR_8 +
             VAR_2);
 VAR_10->info.params.lrssi_roam_threshold = FUNC_0(VAR_8);
 VAR_10->info.params.roam_rssi_floor = VAR_0;
 VAR_10->roam_ctrl = VAR_5;

 return FUNC_1(VAR_7, 0, VAR_9, VAR_6,
       VAR_4);
}
