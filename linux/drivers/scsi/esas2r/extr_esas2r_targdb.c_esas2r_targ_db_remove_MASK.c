
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_target {int target_state; } ;
struct esas2r_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct esas2r_target*,struct esas2r_adapter*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void FUNC_4(struct esas2r_adapter *VAR_1, struct esas2r_target *VAR_2)
{
 FUNC_2();

 VAR_2->target_state = VAR_0;

 FUNC_1("remove id:%d", FUNC_0(VAR_2, VAR_1));

 FUNC_3();
}
