
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pt_regs {int dummy; } ;
struct perf_sample_data {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,struct perf_sample_data*,struct pt_regs*) ;
 int FUNC_2 (struct perf_sample_data*,int ,int ) ;

void FUNC_3(u32 VAR_1, u64 VAR_2, struct pt_regs *VAR_3, u64 VAR_4)
{
 struct perf_sample_data VAR_5;

 if (FUNC_0(!VAR_3))
  return;

 FUNC_2(&VAR_5, VAR_4, 0);
 FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_5, VAR_3);
}
