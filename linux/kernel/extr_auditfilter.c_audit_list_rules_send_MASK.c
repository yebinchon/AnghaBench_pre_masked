
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct task_struct {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct audit_netlink_list {int q; int portid; int net; } ;
struct TYPE_2__ {int sk; int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;
 TYPE_1__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct task_struct*) ;
 int VAR_2 ;
 int FUNC_3 (int,int *) ;
 int VAR_3 ;
 int FUNC_4 (struct net*) ;
 int FUNC_5 (struct audit_netlink_list*) ;
 struct audit_netlink_list* FUNC_6 (int,int ) ;
 struct task_struct* FUNC_7 (int ,struct audit_netlink_list*,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct net* FUNC_12 (int ) ;

int FUNC_13(struct sk_buff *VAR_4, int VAR_5)
{
 u32 VAR_6 = FUNC_1(VAR_4).portid;
 struct net *VAR_7 = FUNC_12(FUNC_1(VAR_4).sk);
 struct task_struct *VAR_8;
 struct audit_netlink_list *VAR_9;
 int VAR_10 = 0;







 VAR_9 = FUNC_6(sizeof(struct audit_netlink_list), VAR_1);
 if (!VAR_9)
  return -VAR_0;
 VAR_9->net = FUNC_4(VAR_7);
 VAR_9->portid = VAR_6;
 FUNC_10(&VAR_9->q);

 FUNC_8(&VAR_2);
 FUNC_3(VAR_5, &VAR_9->q);
 FUNC_9(&VAR_2);

 VAR_8 = FUNC_7(VAR_3, VAR_9, "audit_send_list");
 if (FUNC_0(VAR_8)) {
  FUNC_11(&VAR_9->q);
  FUNC_5(VAR_9);
  VAR_10 = FUNC_2(VAR_8);
 }

 return VAR_10;
}
