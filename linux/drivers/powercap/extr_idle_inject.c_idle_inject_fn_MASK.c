
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idle_inject_thread {scalar_t__ should_run; } ;
struct idle_inject_device {int idle_duration_us; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct idle_inject_device* FUNC_1 (int ,unsigned int) ;
 struct idle_inject_thread* FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_2)
{
 struct idle_inject_device *VAR_3;
 struct idle_inject_thread *VAR_4;

 VAR_3 = FUNC_1(VAR_0, VAR_2);
 VAR_4 = FUNC_2(&VAR_1, VAR_2);




 VAR_4->should_run = 0;

 FUNC_3(FUNC_0(VAR_3->idle_duration_us));
}
