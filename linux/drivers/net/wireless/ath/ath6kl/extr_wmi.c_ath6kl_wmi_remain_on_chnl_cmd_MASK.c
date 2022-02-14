
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wmi_remain_on_chnl_cmd {void* duration; void* freq; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct wmi*,int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_2 (int) ;
 void* FUNC_3 (int ) ;

int FUNC_4(struct wmi *VAR_4, u8 VAR_5, u32 VAR_6, u32 VAR_7)
{
 struct sk_buff *VAR_8;
 struct wmi_remain_on_chnl_cmd *VAR_9;

 VAR_8 = FUNC_2(sizeof(*VAR_9));
 if (!VAR_8)
  return -VAR_1;

 FUNC_0(VAR_0, "remain_on_chnl_cmd: freq=%u dur=%u\n",
     VAR_6, VAR_7);
 VAR_9 = (struct wmi_remain_on_chnl_cmd *) VAR_8->data;
 VAR_9->freq = FUNC_3(VAR_6);
 VAR_9->duration = FUNC_3(VAR_7);
 return FUNC_1(VAR_4, VAR_5, VAR_8, VAR_3,
       VAR_2);
}
