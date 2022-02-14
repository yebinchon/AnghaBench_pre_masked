
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_route_tables {int dummy; } ;
struct TYPE_2__ {struct ni_route_tables routing_tables; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int,struct ni_route_tables const*) ;
 int FUNC_3 (int,int,struct ni_route_tables const*,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_4 (int,char*) ;

void FUNC_5(void)
{
 const struct ni_route_tables *VAR_1 = &VAR_0.routing_tables;

 FUNC_1();
 FUNC_4(FUNC_2(0, FUNC_0(0), VAR_1) == -1,
   "check bad direct trigger arg for first reg->dest\n");
 FUNC_4(FUNC_2(0, FUNC_0(1), VAR_1) == 0,
   "check direct trigger arg for first reg->dest\n");
 FUNC_4(FUNC_2(4, FUNC_0(6), VAR_1) == 4,
   "check direct trigger arg for middle reg->dest\n");
 FUNC_4(FUNC_2(9, FUNC_0(8), VAR_1) == 9,
   "check direct trigger arg for last reg->dest\n");

 FUNC_4(FUNC_3(-1, FUNC_0(0), VAR_1, 1) == -1,
   "check bad direct trigger arg for first reg->dest w/offs\n");
 FUNC_4(FUNC_3(0, FUNC_0(1), VAR_1, 0) == 0,
   "check direct trigger arg for first reg->dest w/offs\n");
 FUNC_4(FUNC_3(3, FUNC_0(6), VAR_1, 1) == 4,
   "check direct trigger arg for middle reg->dest w/offs\n");
 FUNC_4(FUNC_3(7, FUNC_0(8), VAR_1, 2) == 9,
   "check direct trigger arg for last reg->dest w/offs\n");

 FUNC_4(FUNC_2(FUNC_0(0), FUNC_0(0), VAR_1) == -1,
   "check bad trigger arg for first src->dest\n");
 FUNC_4(FUNC_2(FUNC_0(0), FUNC_0(1), VAR_1) == 0,
   "check trigger arg for first src->dest\n");
 FUNC_4(FUNC_2(FUNC_0(5), FUNC_0(6), VAR_1) == 5,
   "check trigger arg for middle src->dest\n");
 FUNC_4(FUNC_2(FUNC_0(8), FUNC_0(9), VAR_1) == 8,
   "check trigger arg for last src->dest\n");
}
