
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct wmi_power_mode_cmd {void* pwr_mode; } ;
struct wmi {void* pwr_mode; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wmi*,void*,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_1 (int) ;

int FUNC_2(struct wmi *VAR_3, u8 VAR_4, u8 VAR_5)
{
 struct sk_buff *VAR_6;
 struct wmi_power_mode_cmd *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_1(sizeof(*VAR_7));
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = (struct wmi_power_mode_cmd *) VAR_6->data;
 VAR_7->pwr_mode = VAR_5;
 VAR_3->pwr_mode = VAR_5;

 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_6, VAR_2,
      VAR_1);
 return VAR_8;
}
