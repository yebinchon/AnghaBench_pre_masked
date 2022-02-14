
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int dummy; } ;


 struct perf_event** FUNC_0 (int ,int) ;
 int FUNC_1 (struct perf_event*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(int VAR_1, int VAR_2)
{
 struct perf_event *VAR_3 = FUNC_0(VAR_0, VAR_1)[VAR_2];

 if (VAR_3) {
  FUNC_1(VAR_3);
  FUNC_0(VAR_0, VAR_1)[VAR_2] = ((void*)0);
 }
}
