
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_trace_flag_type {int fc_normal_file; int fnic_trace; int fc_trace; int fc_clear; scalar_t__ fc_row_file; } ;


 void* FUNC_0 (char*,int *) ;
 struct fc_trace_flag_type* VAR_0 ;
 void* VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2(void)
{
 VAR_2 = FUNC_0("fnic", ((void*)0));

 VAR_1 = FUNC_0("statistics",
      VAR_2);


 VAR_0 = (struct fc_trace_flag_type *)
  FUNC_1(sizeof(struct fc_trace_flag_type));

 if (VAR_0) {
  VAR_0->fc_row_file = 0;
  VAR_0->fc_normal_file = 1;
  VAR_0->fnic_trace = 2;
  VAR_0->fc_trace = 3;
  VAR_0->fc_clear = 4;
 }

 return 0;
}
