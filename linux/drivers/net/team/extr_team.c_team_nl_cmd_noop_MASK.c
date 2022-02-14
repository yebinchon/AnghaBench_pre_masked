
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_info {int snd_portid; int snd_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct genl_info*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_3 (int ,struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_6, struct genl_info *VAR_7)
{
 struct sk_buff *VAR_8;
 void *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_5(VAR_3, VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = FUNC_2(VAR_8, VAR_7->snd_portid, VAR_7->snd_seq,
     &VAR_5, 0, VAR_4);
 if (!VAR_9) {
  VAR_10 = -VAR_0;
  goto err_msg_put;
 }

 FUNC_1(VAR_8, VAR_9);

 return FUNC_3(FUNC_0(VAR_7), VAR_8, VAR_7->snd_portid);

err_msg_put:
 FUNC_4(VAR_8);

 return VAR_10;
}
