
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef long u32 ;
struct file {int dummy; } ;
struct TYPE_3__ {unsigned long a_suspend_req_inf; unsigned long a_bus_drop; unsigned long a_bus_req; unsigned long b_bus_req; } ;
struct TYPE_4__ {long host_working; TYPE_1__ fsm; } ;







 TYPE_2__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static long FUNC_1(struct file *VAR_1, unsigned int VAR_2,
     unsigned long VAR_3)
{
 u32 VAR_4 = 0;

 switch (VAR_2) {
 case 132:
  VAR_4 = VAR_0->host_working;
  break;

 case 129:
  VAR_0->fsm.a_suspend_req_inf = VAR_3;
  break;

 case 131:
  VAR_0->fsm.a_bus_drop = VAR_3;
  break;

 case 130:
  VAR_0->fsm.a_bus_req = VAR_3;
  break;

 case 128:
  VAR_0->fsm.b_bus_req = VAR_3;
  break;

 default:
  break;
 }

 FUNC_0(&VAR_0->fsm);

 return VAR_4;
}
