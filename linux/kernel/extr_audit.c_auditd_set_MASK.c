
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pid {int dummy; } ;
struct net {int dummy; } ;
struct auditd_connection {int rcu; int net; int portid; int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct net*) ;
 int FUNC_2 (struct pid*) ;
 struct auditd_connection* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct auditd_connection*) ;
 struct auditd_connection* FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct pid *VAR_6, u32 VAR_7, struct net *VAR_8)
{
 unsigned long VAR_9;
 struct auditd_connection *VAR_10, *VAR_11;

 if (!VAR_6 || !VAR_8)
  return -VAR_0;

 VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;
 VAR_11->pid = FUNC_2(VAR_6);
 VAR_11->portid = VAR_7;
 VAR_11->net = FUNC_1(VAR_8);

 FUNC_7(&VAR_5, VAR_9);
 VAR_10 = FUNC_6(VAR_3,
        FUNC_4(&VAR_5));
 FUNC_5(VAR_3, VAR_11);
 FUNC_8(&VAR_5, VAR_9);

 if (VAR_10)
  FUNC_0(&VAR_10->rcu, VAR_4);

 return 0;
}
