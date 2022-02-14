
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm10k_intfc {int next_stats_update; scalar_t__ host_ready; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fm10k_intfc*) ;
 int FUNC_1 (struct fm10k_intfc*) ;
 int FUNC_2 (struct fm10k_intfc*) ;
 int FUNC_3 (struct fm10k_intfc*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct fm10k_intfc *VAR_2)
{

 if (FUNC_4(VAR_0, VAR_2->state) ||
     FUNC_4(VAR_1, VAR_2->state))
  return;

 if (VAR_2->host_ready)
  FUNC_2(VAR_2);
 else
  FUNC_3(VAR_2);


 if (FUNC_5(VAR_2->next_stats_update))
  FUNC_0(VAR_2);


 FUNC_1(VAR_2);
}
