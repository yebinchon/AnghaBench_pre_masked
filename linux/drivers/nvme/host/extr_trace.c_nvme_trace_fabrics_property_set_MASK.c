
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct trace_seq {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (struct trace_seq*) ;
 int FUNC_3 (struct trace_seq*,char*,int ,int ,int ) ;
 int FUNC_4 (struct trace_seq*,int ) ;

__attribute__((used)) static const char *FUNC_5(struct trace_seq *VAR_0, u8 *VAR_1)
{
 const char *VAR_2 = FUNC_2(VAR_0);
 u8 VAR_3 = VAR_1[0];
 u32 VAR_4 = FUNC_0(VAR_1 + 4);
 u64 VAR_5 = FUNC_1(VAR_1 + 8);

 FUNC_3(VAR_0, "attrib=%u, ofst=0x%x, value=0x%llx",
    VAR_3, VAR_4, VAR_5);
 FUNC_4(VAR_0, 0);
 return VAR_2;
}
