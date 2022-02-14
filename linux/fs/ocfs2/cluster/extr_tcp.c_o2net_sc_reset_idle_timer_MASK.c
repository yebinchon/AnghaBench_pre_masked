
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2net_sock_container {int sc_idle_timeout; int sc_keepalive_work; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct o2net_sock_container*,int *) ;
 int FUNC_5 (struct o2net_sock_container*,int *,scalar_t__) ;
 int FUNC_6 (struct o2net_sock_container*) ;

__attribute__((used)) static void FUNC_7(struct o2net_sock_container *VAR_1)
{
 FUNC_4(VAR_1, &VAR_1->sc_keepalive_work);
 FUNC_5(VAR_1, &VAR_1->sc_keepalive_work,
        FUNC_1(FUNC_3()));
 FUNC_6(VAR_1);
 FUNC_0(&VAR_1->sc_idle_timeout,
        VAR_0 + FUNC_1(FUNC_2()));
}
