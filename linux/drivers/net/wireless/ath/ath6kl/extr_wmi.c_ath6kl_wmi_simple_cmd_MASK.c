
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi {int dummy; } ;
struct sk_buff {int dummy; } ;
typedef enum wmi_cmd_id { ____Placeholder_wmi_cmd_id } wmi_cmd_id ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wmi*,int ,struct sk_buff*,int,int ) ;
 struct sk_buff* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct wmi *VAR_2, u8 VAR_3,
     enum wmi_cmd_id VAR_4)
{
 struct sk_buff *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(0);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_5, VAR_4, VAR_1);

 return VAR_6;
}
