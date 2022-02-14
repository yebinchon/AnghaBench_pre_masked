
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct trace_seq {int dummy; } ;






 char const* FUNC_0 (struct trace_seq*,int*) ;
 char const* FUNC_1 (struct trace_seq*,int*) ;
 char const* FUNC_2 (struct trace_seq*,int*) ;

const char *FUNC_3(struct trace_seq *VAR_0,
         u8 VAR_1, u8 *VAR_2)
{
 switch (VAR_1) {
 case 130:
 case 129:
 case 128:
  return FUNC_2(VAR_0, VAR_2);
 case 131:
  return FUNC_1(VAR_0, VAR_2);
 default:
  return FUNC_0(VAR_0, VAR_2);
 }
}
