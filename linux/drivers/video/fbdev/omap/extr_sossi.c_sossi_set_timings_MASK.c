
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct extif_timings {int * tim; int converted; } ;
struct TYPE_2__ {int clk_div; int * clk_tw1; int * clk_tw0; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_1(const struct extif_timings *VAR_3)
{
 FUNC_0(!VAR_3->converted);

 VAR_2.clk_tw0[VAR_0] = VAR_3->tim[0];
 VAR_2.clk_tw1[VAR_0] = VAR_3->tim[1];

 VAR_2.clk_tw0[VAR_1] = VAR_3->tim[2];
 VAR_2.clk_tw1[VAR_1] = VAR_3->tim[3];

 VAR_2.clk_div = VAR_3->tim[4];
}
