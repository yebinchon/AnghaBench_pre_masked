
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_route_tables {int dummy; } ;
struct TYPE_2__ {struct ni_route_tables routing_tables; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int ,int ,struct ni_route_tables const*) ;
 int FUNC_3 (int,char*) ;

void FUNC_4(void)
{
 const struct ni_route_tables *VAR_1 = &VAR_0.routing_tables;

 FUNC_1();
 FUNC_3(!FUNC_2(FUNC_0(0), FUNC_0(0), VAR_1),
   "check for bad route 0-->0\n");
 FUNC_3(FUNC_2(FUNC_0(0), FUNC_0(1), VAR_1),
   "validate first destination\n");
 FUNC_3(FUNC_2(FUNC_0(5), FUNC_0(6), VAR_1),
   "validate middle destination\n");
 FUNC_3(FUNC_2(FUNC_0(8), FUNC_0(9), VAR_1),
   "validate last destination\n");
}
