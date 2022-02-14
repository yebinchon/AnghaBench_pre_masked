
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct trace_seq {int dummy; } ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (struct trace_seq*) ;
 int FUNC_2 (struct trace_seq*,char*,int ,int ,int ,int ) ;
 int FUNC_3 (struct trace_seq*,int ) ;

__attribute__((used)) static const char *FUNC_4(struct trace_seq *VAR_0, u8 *VAR_1)
{
 const char *VAR_2 = FUNC_1(VAR_0);
 u16 VAR_3 = FUNC_0(VAR_1);
 u16 VAR_4 = FUNC_0(VAR_1 + 2);
 u16 VAR_5 = FUNC_0(VAR_1 + 4);
 u16 VAR_6 = FUNC_0(VAR_1 + 6);

 FUNC_2(VAR_0, "cqid=%u, qsize=%u, cq_flags=0x%x, irq_vector=%u",
    VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_3(VAR_0, 0);

 return VAR_2;
}
