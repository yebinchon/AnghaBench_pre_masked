
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct auditd_connection {int portid; int net; } ;


 int VAR_0 ;
 struct sock* FUNC_0 (struct net*) ;
 int VAR_1 ;
 int FUNC_1 (struct auditd_connection*) ;
 struct net* FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sock*,struct sk_buff*,int ,int ) ;
 int FUNC_5 (struct net*) ;
 struct auditd_connection* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_2)
{
 int VAR_3;
 u32 VAR_4;
 struct net *VAR_5;
 struct sock *VAR_6;
 struct auditd_connection *VAR_7;
 FUNC_7();
 VAR_7 = FUNC_6(VAR_1);
 if (!VAR_7) {
  FUNC_8();
  FUNC_3(VAR_2);
  VAR_3 = -VAR_0;
  goto err;
 }
 VAR_5 = FUNC_2(VAR_7->net);
 VAR_6 = FUNC_0(VAR_5);
 VAR_4 = VAR_7->portid;
 FUNC_8();

 VAR_3 = FUNC_4(VAR_6, VAR_2, VAR_4, 0);
 FUNC_5(VAR_5);
 if (VAR_3 < 0)
  goto err;

 return VAR_3;

err:
 if (VAR_7 && VAR_3 == -VAR_0)
  FUNC_1(VAR_7);
 return VAR_3;
}
