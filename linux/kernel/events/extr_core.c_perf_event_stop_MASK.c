
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stop_event_data {int restart; struct perf_event* event; } ;
struct perf_event {int oncpu; int state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int ,struct stop_event_data*) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct perf_event *VAR_3, int VAR_4)
{
 struct stop_event_data VAR_5 = {
  .event = VAR_3,
  .restart = VAR_4,
 };
 int VAR_6 = 0;

 do {
  if (FUNC_0(VAR_3->state) != VAR_1)
   return 0;


  FUNC_2();






  VAR_6 = FUNC_1(FUNC_0(VAR_3->oncpu),
     VAR_2, &VAR_5);
 } while (VAR_6 == -VAR_0);

 return VAR_6;
}
