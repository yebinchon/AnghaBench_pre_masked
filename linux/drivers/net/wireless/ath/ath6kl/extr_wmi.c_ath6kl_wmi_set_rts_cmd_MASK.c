
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wmi_set_rts_cmd {int threshold; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wmi*,int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct wmi *VAR_3, u16 VAR_4)
{
 struct sk_buff *VAR_5;
 struct wmi_set_rts_cmd *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_1(sizeof(struct wmi_set_rts_cmd));
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = (struct wmi_set_rts_cmd *) VAR_5->data;
 VAR_6->threshold = FUNC_2(VAR_4);

 VAR_7 = FUNC_0(VAR_3, 0, VAR_5, VAR_2,
      VAR_1);
 return VAR_7;
}
