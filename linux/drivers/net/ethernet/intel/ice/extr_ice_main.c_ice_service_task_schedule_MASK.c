
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_pf {int serv_task; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ice_pf *VAR_4)
{
 if (!FUNC_2(VAR_1, VAR_4->state) &&
     !FUNC_1(VAR_2, VAR_4->state) &&
     !FUNC_2(VAR_0, VAR_4->state))
  FUNC_0(VAR_3, &VAR_4->serv_task);
}
