
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct geneve_sock {int sock; int list; scalar_t__ refcnt; } ;


 int VAR_0 ;
 int FUNC_0 (struct geneve_sock*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct geneve_sock *VAR_2)
{
 if (!VAR_2 || --VAR_2->refcnt)
  return;

 FUNC_1(&VAR_2->list);
 FUNC_2(VAR_2->sock, VAR_0);
 FUNC_3(VAR_2->sock);
 FUNC_0(VAR_2, VAR_1);
}
