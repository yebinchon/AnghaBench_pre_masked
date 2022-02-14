
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct cardstate {int dev; } ;
struct bas_cardstate {struct cardstate* cs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct bas_cardstate* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (struct cardstate*) ;
 int VAR_2 ;
 struct bas_cardstate* VAR_3 ;
 int FUNC_3 (struct bas_cardstate*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_4)
{
 struct bas_cardstate *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_2);
 struct cardstate *VAR_6 = VAR_5->cs;

 FUNC_0(VAR_6->dev, "timeout waiting for HD_READY_SEND_ATDATA\n");


 FUNC_3(VAR_5, VAR_0, VAR_1);
 FUNC_2(VAR_6);
}
