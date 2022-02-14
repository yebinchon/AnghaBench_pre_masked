
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpmc_bool_timings {int cycle2cyclediffcsen; int cycle2cyclesamecsen; int we_extra_delay; int oe_extra_delay; int adv_extra_delay; int cs_extra_delay; int time_para_granularity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(int VAR_12, const struct gpmc_bool_timings *VAR_13)
{
 FUNC_0(VAR_12, VAR_7,
      VAR_0,
      VAR_13->time_para_granularity);
 FUNC_0(VAR_12, VAR_8,
      VAR_1, VAR_13->cs_extra_delay);
 FUNC_0(VAR_12, VAR_9,
      VAR_2, VAR_13->adv_extra_delay);
 FUNC_0(VAR_12, VAR_10,
      VAR_3, VAR_13->oe_extra_delay);
 FUNC_0(VAR_12, VAR_10,
      VAR_4, VAR_13->we_extra_delay);
 FUNC_0(VAR_12, VAR_11,
      VAR_6,
      VAR_13->cycle2cyclesamecsen);
 FUNC_0(VAR_12, VAR_11,
      VAR_5,
      VAR_13->cycle2cyclediffcsen);
}
