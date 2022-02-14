
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;

void FUNC_3(void)
{
 FUNC_0();
 FUNC_2(FUNC_1(VAR_1),
   "check that AI/SampleClock is cmd destination\n");
 FUNC_2(FUNC_1(VAR_2),
   "check that AI/StartTrigger is cmd destination\n");
 FUNC_2(FUNC_1(VAR_0),
   "check that AI/ConvertClock is cmd destination\n");
 FUNC_2(FUNC_1(VAR_3),
   "check that AO/SampleClock is cmd destination\n");
 FUNC_2(FUNC_1(VAR_5),
   "check that DO/SampleClock is cmd destination\n");
 FUNC_2(!FUNC_1(VAR_4),
   "check that AO/SampleClockTimebase _not_ cmd destination\n");
}
