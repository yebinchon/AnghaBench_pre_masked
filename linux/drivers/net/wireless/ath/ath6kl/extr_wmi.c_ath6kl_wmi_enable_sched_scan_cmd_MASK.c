
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_enable_sched_scan_cmd {int enable; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char*,int ) ;
 int FUNC_1 (struct wmi*,int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_2 (int) ;

int FUNC_3(struct wmi *VAR_4, u8 VAR_5, bool VAR_6)
{
 struct sk_buff *VAR_7;
 struct wmi_enable_sched_scan_cmd *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_2(sizeof(*VAR_8));
 if (!VAR_7)
  return -VAR_1;

 FUNC_0(VAR_0, "%s scheduled scan on vif %d\n",
     VAR_6 ? "enabling" : "disabling", VAR_5);
 VAR_8 = (struct wmi_enable_sched_scan_cmd *) VAR_7->data;
 VAR_8->enable = VAR_6 ? 1 : 0;

 VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_7,
      VAR_3,
      VAR_2);
 return VAR_9;
}
