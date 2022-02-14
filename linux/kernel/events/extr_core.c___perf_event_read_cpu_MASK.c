
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct perf_event {int group_caps; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct perf_event *VAR_1, int VAR_2)
{
 u16 VAR_3, VAR_4;

 if (VAR_1->group_caps & VAR_0) {
  int VAR_5 = FUNC_0();

  VAR_4 = FUNC_1(VAR_2);
  VAR_3 = FUNC_1(VAR_5);

  if (VAR_4 == VAR_3)
   return VAR_5;
 }

 return VAR_2;
}
