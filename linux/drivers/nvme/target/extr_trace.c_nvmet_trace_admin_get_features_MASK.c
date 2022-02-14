
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct trace_seq {int dummy; } ;


 int FUNC_0 (int*) ;
 char* FUNC_1 (struct trace_seq*) ;
 int FUNC_2 (struct trace_seq*,char*,int,int,int ) ;
 int FUNC_3 (struct trace_seq*,int ) ;

__attribute__((used)) static const char *FUNC_4(struct trace_seq *VAR_0,
       u8 *VAR_1)
{
 const char *VAR_2 = FUNC_1(VAR_0);
 u8 VAR_3 = VAR_1[0];
 u8 VAR_4 = VAR_1[1] & 0x7;
 u32 VAR_5 = FUNC_0(VAR_1 + 4);

 FUNC_2(VAR_0, "fid=0x%x sel=0x%x cdw11=0x%x", VAR_3, VAR_4, VAR_5);
 FUNC_3(VAR_0, 0);

 return VAR_2;
}
