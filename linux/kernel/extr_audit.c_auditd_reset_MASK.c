
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
typedef struct auditd_connection {int rcu; } const auditd_connection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 struct auditd_connection const* FUNC_4 (int ,int ) ;
 struct sk_buff* FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(const struct auditd_connection *VAR_4)
{
 unsigned long VAR_5;
 struct sk_buff *VAR_6;
 struct auditd_connection *VAR_7;


 FUNC_6(&VAR_3, VAR_5);
 VAR_7 = FUNC_4(VAR_1,
        FUNC_2(&VAR_3));
 if (VAR_4 && VAR_4 != VAR_7) {

  FUNC_7(&VAR_3, VAR_5);
  return;
 }
 FUNC_3(VAR_1, ((void*)0));
 FUNC_7(&VAR_3, VAR_5);

 if (VAR_7)
  FUNC_0(&VAR_7->rcu, VAR_2);



 while ((VAR_6 = FUNC_5(&VAR_0)))
  FUNC_1(VAR_6);
}
