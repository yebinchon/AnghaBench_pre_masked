
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_route_tables {int dummy; } ;
struct TYPE_2__ {struct ni_route_tables routing_tables; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,struct ni_route_tables const*) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int,char*) ;

void FUNC_6(void)
{
 const struct ni_route_tables *VAR_7 = &VAR_4.routing_tables;

 FUNC_3();
 FUNC_5(FUNC_4(FUNC_1(0), FUNC_1(0), VAR_7) == -VAR_0,
   "check for bad route 0-->0\n");
 FUNC_5(FUNC_4(FUNC_1(1), FUNC_1(0), VAR_7) == 1,
   "validate first destination\n");
 FUNC_5(FUNC_4(FUNC_1(6), FUNC_1(5), VAR_7) == 6,
   "validate middle destination\n");
 FUNC_5(FUNC_4(FUNC_1(8), FUNC_1(9), VAR_7) == 8,
   "validate last destination\n");
 FUNC_5(FUNC_4(FUNC_1(10), FUNC_1(9), VAR_7) == -VAR_0,
   "lookup invalid destination\n");

 FUNC_5(FUNC_4(VAR_5, FUNC_2(0), VAR_7) ==
   -VAR_0,
   "rgout0_src0: no direct lookup of indirect route\n");
 FUNC_5(FUNC_4(VAR_5, VAR_1, VAR_7) == 0,
   "rgout0_src0: lookup indirect route register\n");
 FUNC_5(FUNC_4(VAR_6, FUNC_2(2), VAR_7) ==
   -VAR_0,
   "rgout0_src1: no direct lookup of indirect route\n");
 FUNC_5(FUNC_4(VAR_6, VAR_1, VAR_7) == 1,
   "rgout0_src1: lookup indirect route register\n");

 FUNC_5(FUNC_4(VAR_2, FUNC_2(4), VAR_7) ==
   -VAR_0,
   "brd0_src0: no direct lookup of indirect route\n");
 FUNC_5(FUNC_4(VAR_2, FUNC_0(0), VAR_7) == 0,
   "brd0_src0: lookup indirect route register\n");
 FUNC_5(FUNC_4(VAR_3, FUNC_2(4), VAR_7) ==
   -VAR_0,
   "brd0_src1: no direct lookup of indirect route\n");
 FUNC_5(FUNC_4(VAR_3, FUNC_0(0), VAR_7) == 1,
   "brd0_src1: lookup indirect route register\n");
}
