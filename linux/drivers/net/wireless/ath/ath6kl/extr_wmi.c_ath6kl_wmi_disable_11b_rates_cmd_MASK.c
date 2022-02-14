
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_disable_11b_rates_cmd {int disable; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct wmi*,int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_2 (int) ;

int FUNC_3(struct wmi *VAR_4, bool VAR_5)
{
 struct sk_buff *VAR_6;
 struct wmi_disable_11b_rates_cmd *VAR_7;

 VAR_6 = FUNC_2(sizeof(*VAR_7));
 if (!VAR_6)
  return -VAR_1;

 FUNC_0(VAR_0, "disable_11b_rates_cmd: disable=%u\n",
     VAR_5);
 VAR_7 = (struct wmi_disable_11b_rates_cmd *) VAR_6->data;
 VAR_7->disable = VAR_5 ? 1 : 0;

 return FUNC_1(VAR_4, 0, VAR_6, VAR_3,
       VAR_2);
}
