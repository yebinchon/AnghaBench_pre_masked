
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmix_hb_challenge_resp_cmd {void* source; void* cookie; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wmi*,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;

int FUNC_3(struct wmi *VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct sk_buff *VAR_6;
 struct wmix_hb_challenge_resp_cmd *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_1(sizeof(*VAR_7));
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = (struct wmix_hb_challenge_resp_cmd *) VAR_6->data;
 VAR_7->cookie = FUNC_2(VAR_4);
 VAR_7->source = FUNC_2(VAR_5);

 VAR_8 = FUNC_0(VAR_3, VAR_6, VAR_2,
           VAR_1);
 return VAR_8;
}
