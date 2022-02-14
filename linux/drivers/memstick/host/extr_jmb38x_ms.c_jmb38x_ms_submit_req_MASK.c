
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memstick_host {int dummy; } ;
struct jmb38x_ms_host {int notify; } ;


 struct jmb38x_ms_host* FUNC_0 (struct memstick_host*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct memstick_host *VAR_0)
{
 struct jmb38x_ms_host *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->notify);
}
