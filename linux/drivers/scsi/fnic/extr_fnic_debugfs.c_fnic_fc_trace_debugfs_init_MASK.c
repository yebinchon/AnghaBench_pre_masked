
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fc_row_file; int fc_normal_file; int fc_clear; int fc_trace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char*,int,int ,int *,int *) ;
 TYPE_1__* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_1(void)
{
 VAR_7 = FUNC_0("fc_trace_enable",
     VAR_0|VAR_1|VAR_2,
     VAR_10,
     &(VAR_3->fc_trace),
     &VAR_8);

 VAR_5 = FUNC_0("fc_trace_clear",
     VAR_0|VAR_1|VAR_2,
     VAR_10,
     &(VAR_3->fc_clear),
     &VAR_8);

 VAR_4 =
  FUNC_0("fc_trace_rdata",
        VAR_0|VAR_1|VAR_2,
        VAR_10,
        &(VAR_3->fc_normal_file),
        &VAR_9);

 VAR_6 =
  FUNC_0("fc_trace",
        VAR_0|VAR_1|VAR_2,
        VAR_10,
        &(VAR_3->fc_row_file),
        &VAR_9);
}
