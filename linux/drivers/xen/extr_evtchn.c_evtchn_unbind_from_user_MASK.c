
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_evtchn {int port; } ;
struct per_user_data {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct per_user_data*,struct user_evtchn*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,struct user_evtchn*) ;

__attribute__((used)) static void FUNC_4(struct per_user_data *VAR_0,
        struct user_evtchn *VAR_1)
{
 int VAR_2 = FUNC_2(VAR_1->port);

 FUNC_0(VAR_2 < 0);

 FUNC_3(VAR_2, VAR_1);

 FUNC_1(VAR_0, VAR_1);
}
