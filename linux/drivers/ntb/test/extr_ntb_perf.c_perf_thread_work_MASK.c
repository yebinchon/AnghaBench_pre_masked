
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct perf_thread {int status; } ;


 int FUNC_0 (struct perf_thread*) ;
 int FUNC_1 (struct perf_thread*) ;
 int FUNC_2 (struct perf_thread*) ;
 int FUNC_3 (struct perf_thread*) ;
 struct perf_thread* FUNC_4 (struct work_struct*) ;

__attribute__((used)) static void FUNC_5(struct work_struct *VAR_0)
{
 struct perf_thread *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;
 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2) {
  VAR_1->status = VAR_2;
  return;
 }

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  VAR_1->status = VAR_2;
  goto err_clear_test;
 }

 VAR_1->status = FUNC_3(VAR_1);

err_clear_test:
 FUNC_0(VAR_1);
}
