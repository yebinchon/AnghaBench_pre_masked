
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * page_offset; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (void*) ;

void FUNC_3(void)
{
 VAR_2 = 0;
 FUNC_0();
 if (VAR_0.page_offset) {
  FUNC_2((void *)VAR_0.page_offset);
  VAR_0.page_offset = ((void*)0);
 }
 if (VAR_1) {
  FUNC_2((void *)VAR_1);
  VAR_1 = 0;
 }
 FUNC_1("fnic:Successfully FC_CTLR Freed Trace Buffer\n");
}
