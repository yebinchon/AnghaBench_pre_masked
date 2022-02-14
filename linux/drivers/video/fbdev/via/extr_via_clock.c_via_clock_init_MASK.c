
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_clock {void* set_secondary_clock_state; void* set_primary_clock_state; int set_engine_pll; void* set_engine_pll_state; int set_secondary_pll; void* set_secondary_pll_state; void* set_secondary_clock_source; int set_primary_pll; void* set_primary_pll_state; void* set_primary_clock_source; } ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 () ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

void FUNC_1(struct via_clock *VAR_20, int VAR_21)
{
 switch (VAR_21) {
 case 140:
 case 136:
  VAR_20->set_primary_clock_state = VAR_3;
  VAR_20->set_primary_clock_source = VAR_2;
  VAR_20->set_primary_pll_state = VAR_5;
  VAR_20->set_primary_pll = VAR_0;

  VAR_20->set_secondary_clock_state = VAR_3;
  VAR_20->set_secondary_clock_source = VAR_2;
  VAR_20->set_secondary_pll_state = VAR_5;
  VAR_20->set_secondary_pll = VAR_1;

  VAR_20->set_engine_pll_state = VAR_5;
  VAR_20->set_engine_pll = VAR_4;
  break;
 case 135:
 case 131:
 case 139:
 case 137:
 case 138:
 case 134:
 case 133:
 case 132:
 case 130:
  VAR_20->set_primary_clock_state = VAR_12;
  VAR_20->set_primary_clock_source = VAR_11;
  VAR_20->set_primary_pll_state = VAR_13;
  VAR_20->set_primary_pll = VAR_7;

  VAR_20->set_secondary_clock_state = VAR_15;
  VAR_20->set_secondary_clock_source = VAR_14;
  VAR_20->set_secondary_pll_state = VAR_16;
  VAR_20->set_secondary_pll = VAR_8;

  VAR_20->set_engine_pll_state = VAR_10;
  VAR_20->set_engine_pll = VAR_6;
  break;
 case 129:
 case 128:
  VAR_20->set_primary_clock_state = VAR_12;
  VAR_20->set_primary_clock_source = VAR_11;
  VAR_20->set_primary_pll_state = VAR_13;
  VAR_20->set_primary_pll = VAR_18;

  VAR_20->set_secondary_clock_state = VAR_15;
  VAR_20->set_secondary_clock_source = VAR_14;
  VAR_20->set_secondary_pll_state = VAR_16;
  VAR_20->set_secondary_pll = VAR_19;

  VAR_20->set_engine_pll_state = VAR_10;
  VAR_20->set_engine_pll = VAR_17;
  break;

 }

 if (FUNC_0()) {
  VAR_20->set_primary_clock_state = VAR_9;
  VAR_20->set_secondary_clock_state = VAR_9;
 }
}
