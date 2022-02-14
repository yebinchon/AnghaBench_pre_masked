
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_add_krk_cmd {int krk; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wmi*,int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (int ,int const*,int ) ;

int FUNC_3(struct wmi *VAR_4, u8 VAR_5, const u8 *VAR_6)
{
 struct sk_buff *VAR_7;
 struct wmi_add_krk_cmd *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_1(sizeof(*VAR_8));
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = (struct wmi_add_krk_cmd *) VAR_7->data;
 FUNC_2(VAR_8->krk, VAR_6, VAR_3);

 VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_7, VAR_2,
      VAR_1);

 return VAR_9;
}
