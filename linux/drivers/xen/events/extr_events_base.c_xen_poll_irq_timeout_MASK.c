
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sched_poll {int nr_ports; int ports; int timeout; } ;
typedef int evtchn_port_t ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,struct sched_poll*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(int VAR_1, u64 VAR_2)
{
 evtchn_port_t VAR_3 = FUNC_3(VAR_1);

 if (FUNC_2(VAR_3)) {
  struct sched_poll VAR_4;

  VAR_4.nr_ports = 1;
  VAR_4.timeout = VAR_2;
  FUNC_4(VAR_4.ports, &VAR_3);

  if (FUNC_1(VAR_0, &VAR_4) != 0)
   FUNC_0();
 }
}
