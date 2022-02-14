
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct trace_seq {int dummy; } ;


 char* FUNC_0 (struct trace_seq*) ;
 int FUNC_1 (struct trace_seq*,char*,int,int *) ;
 int FUNC_2 (struct trace_seq*,int ) ;

__attribute__((used)) static const char *FUNC_3(struct trace_seq *VAR_0, u8 *VAR_1)
{
 const char *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, "specific=%*ph", 24, VAR_1);
 FUNC_2(VAR_0, 0);
 return VAR_2;
}
