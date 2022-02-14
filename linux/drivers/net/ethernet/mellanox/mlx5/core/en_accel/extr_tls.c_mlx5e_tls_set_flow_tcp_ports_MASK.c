
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct inet_sock {int inet_dport; int inet_sport; } ;


 int FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 struct inet_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (int ,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(void *VAR_3, struct sock *VAR_4)
{
 struct inet_sock *VAR_5 = FUNC_2(VAR_4);

 FUNC_3(FUNC_0(VAR_2, VAR_3, VAR_1), &VAR_5->inet_sport,
        FUNC_1(VAR_2, VAR_1));
 FUNC_3(FUNC_0(VAR_2, VAR_3, VAR_0), &VAR_5->inet_dport,
        FUNC_1(VAR_2, VAR_0));
}
