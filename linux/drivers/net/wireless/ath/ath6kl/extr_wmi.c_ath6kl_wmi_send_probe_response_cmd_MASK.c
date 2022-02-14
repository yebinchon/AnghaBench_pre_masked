
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wmi_p2p_probe_response_cmd {int data; int len; int destination_addr; int freq; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ,int const*,int) ;
 int FUNC_1 (struct wmi*,int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_2 (size_t) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int const*,int) ;

int FUNC_6(struct wmi *VAR_5, u8 VAR_6, u32 VAR_7,
           const u8 *VAR_8, const u8 *VAR_9,
           u16 VAR_10)
{
 struct sk_buff *VAR_11;
 struct wmi_p2p_probe_response_cmd *VAR_12;
 size_t VAR_13 = sizeof(*VAR_12) + VAR_10;

 if (VAR_10 == 0)
  VAR_13++;

 VAR_11 = FUNC_2(VAR_13);
 if (!VAR_11)
  return -VAR_1;

 FUNC_0(VAR_0,
     "send_probe_response_cmd: freq=%u dst=%pM len=%u\n",
     VAR_7, VAR_8, VAR_10);
 VAR_12 = (struct wmi_p2p_probe_response_cmd *) VAR_11->data;
 VAR_12->freq = FUNC_4(VAR_7);
 FUNC_5(VAR_12->destination_addr, VAR_8, VAR_2);
 VAR_12->len = FUNC_3(VAR_10);
 FUNC_5(VAR_12->data, VAR_9, VAR_10);
 return FUNC_1(VAR_5, VAR_6, VAR_11,
       VAR_4,
       VAR_3);
}
