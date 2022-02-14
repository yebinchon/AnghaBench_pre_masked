
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct audit_reply {struct sk_buff* skb; int portid; int net; } ;
struct TYPE_2__ {int portid; int sk; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*) ;
 TYPE_1__ FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int,int,int,int,void const*,int) ;
 int VAR_1 ;
 int FUNC_3 (struct net*) ;
 int FUNC_4 (struct audit_reply*) ;
 int FUNC_5 (struct sk_buff*) ;
 struct audit_reply* FUNC_6 (int,int ) ;
 struct task_struct* FUNC_7 (int ,struct audit_reply*,char*) ;
 struct net* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct sk_buff *VAR_2, int VAR_3, int VAR_4, int VAR_5,
        int VAR_6, const void *VAR_7, int VAR_8)
{
 struct net *VAR_9 = FUNC_8(FUNC_1(VAR_2).sk);
 struct sk_buff *VAR_10;
 struct task_struct *VAR_11;
 struct audit_reply *VAR_12 = FUNC_6(sizeof(struct audit_reply),
         VAR_0);

 if (!VAR_12)
  return;

 VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 if (!VAR_10)
  goto out;

 VAR_12->net = FUNC_3(VAR_9);
 VAR_12->portid = FUNC_1(VAR_2).portid;
 VAR_12->skb = VAR_10;

 VAR_11 = FUNC_7(VAR_1, VAR_12, "audit_send_reply");
 if (!FUNC_0(VAR_11))
  return;
 FUNC_5(VAR_10);
out:
 FUNC_4(VAR_12);
}
