
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct telemetry_evtconfig {void* period; void* num_evts; int * evtmap; } ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct telemetry_evtconfig,struct telemetry_evtconfig,int ) ;

__attribute__((used)) static int FUNC_2(void)
{
 struct telemetry_evtconfig VAR_3, VAR_4;
 int VAR_5;

 VAR_3.evtmap = ((void*)0);
 VAR_3.num_evts = VAR_0;
 VAR_3.period = VAR_2;

 VAR_4.evtmap = ((void*)0);
 VAR_4.num_evts = VAR_0;
 VAR_4.period = VAR_2;

 VAR_5 = FUNC_1(VAR_3, VAR_4,
     VAR_1);
 if (VAR_5)
  FUNC_0("TELEMETRY Reset Failed\n");

 return VAR_5;
}
