
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct telemetry_evtconfig {scalar_t__ num_evts; int period; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct telemetry_evtconfig,struct telemetry_evtconfig,int ) ;

__attribute__((used)) static int FUNC_3(struct telemetry_evtconfig VAR_2,
    struct telemetry_evtconfig VAR_3)
{
 int VAR_4;

 if ((VAR_2.num_evts > 0) &&
     (FUNC_0(VAR_2.period))) {
  FUNC_1("PSS Sampling Period Out of Range\n");
  return -VAR_0;
 }

 if ((VAR_3.num_evts > 0) &&
     (FUNC_0(VAR_3.period))) {
  FUNC_1("IOSS Sampling Period Out of Range\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_2(VAR_2, VAR_3,
     VAR_1);
 if (VAR_4)
  FUNC_1("TELEMETRY Config Failed\n");

 return VAR_4;
}
