
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slave {int bond; } ;
struct port {int actor_oper_port_state; scalar_t__ aggregator; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct port port; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_1 (struct slave*) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct slave *VAR_1, char *VAR_2)
{
 const struct port *VAR_3;

 if (FUNC_0(VAR_1->bond) == VAR_0) {
  VAR_3 = &FUNC_1(VAR_1)->port;
  if (VAR_3->aggregator)
   return FUNC_2(VAR_2, "%u\n",
           VAR_3->actor_oper_port_state);
 }

 return FUNC_2(VAR_2, "N/A\n");
}
