
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm10k_intfc {int state; int service_task; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(struct fm10k_intfc *VAR_4)
{
 if (!FUNC_4(VAR_0, VAR_4->state) &&
     !FUNC_3(VAR_2, VAR_4->state)) {
  FUNC_0(VAR_1, VAR_4->state);
  FUNC_1(VAR_3, &VAR_4->service_task);
 } else {
  FUNC_2(VAR_1, VAR_4->state);
 }
}
