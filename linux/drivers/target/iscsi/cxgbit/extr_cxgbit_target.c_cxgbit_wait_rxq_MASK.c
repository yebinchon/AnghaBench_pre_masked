
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct cxgbit_sock {int waitq; } ;


 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff_head*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct cxgbit_sock*,struct sk_buff*) ;
 int FUNC_3 (struct cxgbit_sock*,struct sk_buff_head*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff_head*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct cxgbit_sock *VAR_1)
{
 struct sk_buff *VAR_2;
 struct sk_buff_head VAR_3;

 FUNC_5(&VAR_3);

 FUNC_6(VAR_1->waitq, FUNC_3(VAR_1, &VAR_3));

 if (FUNC_4(VAR_0))
  goto out;

 while ((VAR_2 = FUNC_0(&VAR_3))) {
  if (FUNC_2(VAR_1, VAR_2))
   goto out;
 }

 return 0;
out:
 FUNC_1(&VAR_3);
 return -1;
}
