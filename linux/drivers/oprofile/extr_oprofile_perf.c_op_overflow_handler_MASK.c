
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {int dummy; } ;
struct perf_sample_data {int dummy; } ;
struct perf_event {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_regs*,int) ;
 struct perf_event** FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct perf_event *VAR_2,
   struct perf_sample_data *VAR_3, struct pt_regs *VAR_4)
{
 int VAR_5;
 u32 VAR_6 = FUNC_3();

 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5)
  if (FUNC_1(VAR_1, VAR_6)[VAR_5] == VAR_2)
   break;

 if (VAR_5 != VAR_0)
  FUNC_0(VAR_4, VAR_5);
 else
  FUNC_2("oprofile: ignoring spurious overflow "
    "on cpu %u\n", VAR_6);
}
