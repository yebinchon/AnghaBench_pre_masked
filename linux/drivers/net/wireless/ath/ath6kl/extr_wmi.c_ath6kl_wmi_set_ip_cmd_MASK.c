
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_set_ip_cmd {void** ips; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
typedef void* __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wmi*,int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (void*) ;

int FUNC_3(struct wmi *VAR_4, u8 VAR_5,
     __be32 VAR_6, __be32 VAR_7)
{
 struct sk_buff *VAR_8;
 struct wmi_set_ip_cmd *VAR_9;
 int VAR_10;


 if (FUNC_2(VAR_6) ||
     FUNC_2(VAR_7))
  return -VAR_0;

 VAR_8 = FUNC_1(sizeof(struct wmi_set_ip_cmd));
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = (struct wmi_set_ip_cmd *) VAR_8->data;
 VAR_9->ips[0] = VAR_6;
 VAR_9->ips[1] = VAR_7;

 VAR_10 = FUNC_0(VAR_4, VAR_5, VAR_8, VAR_3,
      VAR_2);
 return VAR_10;
}
