
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctx_valid; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void)
{
 FUNC_0("dss_restore_context\n");

 if (!VAR_5.ctx_valid)
  return;

 FUNC_1(VAR_0);

 if (FUNC_2(VAR_2) &
   VAR_1) {
  FUNC_1(VAR_4);
  FUNC_1(VAR_3);
 }

 FUNC_0("context restored\n");
}
