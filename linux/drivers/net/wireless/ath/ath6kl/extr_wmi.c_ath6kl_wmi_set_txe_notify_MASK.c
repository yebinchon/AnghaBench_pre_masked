
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wmi_txe_notify_cmd {void* intvl; void* pkts; void* rate; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wmi*,int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;

int FUNC_3(struct wmi *VAR_3, u8 VAR_4,
         u32 VAR_5, u32 VAR_6, u32 VAR_7)
{
 struct sk_buff *VAR_8;
 struct wmi_txe_notify_cmd *VAR_9;

 VAR_8 = FUNC_1(sizeof(*VAR_9));
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = (struct wmi_txe_notify_cmd *) VAR_8->data;
 VAR_9->rate = FUNC_2(VAR_5);
 VAR_9->pkts = FUNC_2(VAR_6);
 VAR_9->intvl = FUNC_2(VAR_7);

 return FUNC_0(VAR_3, VAR_4, VAR_8, VAR_2,
       VAR_1);
}
