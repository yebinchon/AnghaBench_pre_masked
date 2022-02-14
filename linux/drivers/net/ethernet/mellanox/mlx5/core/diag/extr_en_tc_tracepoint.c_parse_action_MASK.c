
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;


 int * VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct trace_seq*) ;
 int FUNC_1 (struct trace_seq*,char*,...) ;
 int FUNC_2 (struct trace_seq*,int ) ;

const char *FUNC_3(struct trace_seq *VAR_2,
    int *VAR_3,
    unsigned int VAR_4)
{
 const char *VAR_5 = FUNC_0(VAR_2);
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  if (VAR_3[VAR_6] < VAR_1)
   FUNC_1(VAR_2, "%s ", VAR_0[VAR_3[VAR_6]]);
  else
   FUNC_1(VAR_2, "UNKNOWN ");
 }

 FUNC_2(VAR_2, 0);
 return VAR_5;
}
