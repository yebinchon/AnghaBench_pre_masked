
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;


 char* FUNC_0 (struct trace_seq*) ;
 int FUNC_1 (struct trace_seq*,char*,unsigned int) ;
 int FUNC_2 (struct trace_seq*,int ) ;

__attribute__((used)) static const char *
FUNC_3(struct trace_seq *VAR_0, unsigned char *VAR_1, int VAR_2)
{
 const char *VAR_3 = FUNC_0(VAR_0);
 unsigned int VAR_4 = VAR_1[7] << 8 | VAR_1[8];

 FUNC_1(VAR_0, "regions=%u", (VAR_4 - 8) / 16);
 FUNC_2(VAR_0, 0);

 return VAR_3;
}
