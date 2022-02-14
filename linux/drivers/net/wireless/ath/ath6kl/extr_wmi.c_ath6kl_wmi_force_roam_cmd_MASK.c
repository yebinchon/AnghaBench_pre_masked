
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int bssid; } ;
struct roam_ctrl_cmd {int roam_ctrl; TYPE_1__ info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int const*) ;
 int FUNC_1 (struct wmi*,int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (int ,int const*,int ) ;

int FUNC_4(struct wmi *VAR_6, const u8 *VAR_7)
{
 struct sk_buff *VAR_8;
 struct roam_ctrl_cmd *VAR_9;

 VAR_8 = FUNC_2(sizeof(*VAR_9));
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = (struct roam_ctrl_cmd *) VAR_8->data;

 FUNC_3(VAR_9->info.bssid, VAR_7, VAR_2);
 VAR_9->roam_ctrl = VAR_4;

 FUNC_0(VAR_0, "force roam to %pM\n", VAR_7);
 return FUNC_1(VAR_6, 0, VAR_8, VAR_5,
       VAR_3);
}
