
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct perf_ctx {int busy_flag; scalar_t__ tcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct perf_ctx *VAR_3, u8 VAR_4)
{
 if (VAR_4 == 0 || VAR_4 > VAR_2)
  return -VAR_1;

 if (FUNC_1(0, &VAR_3->busy_flag))
  return -VAR_0;

 VAR_3->tcnt = VAR_4;

 FUNC_0(0, &VAR_3->busy_flag);

 return 0;
}
