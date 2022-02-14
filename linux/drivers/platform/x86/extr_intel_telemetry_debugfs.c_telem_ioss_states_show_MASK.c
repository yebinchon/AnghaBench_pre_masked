
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct telemetry_evtlog {int telem_evtlog; } ;
struct seq_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct seq_file*,char*,char const*,int ) ;
 int FUNC_1 (struct seq_file*,char*) ;
 int FUNC_2 (int ,char const**,int) ;
 int FUNC_3 (int ,struct telemetry_evtlog*,int) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_2, void *VAR_3)
{
 struct telemetry_evtlog VAR_4[VAR_1];
 const char *VAR_5[VAR_1];
 int VAR_6, VAR_7, VAR_8;

 VAR_7 = FUNC_3(VAR_0, VAR_4,
          VAR_1);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_8 = FUNC_2(VAR_0, VAR_5,
        VAR_1);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_1(VAR_2, "--------------------------------------\n");
 FUNC_1(VAR_2, "\tI0SS TELEMETRY EVENTLOG\n");
 FUNC_1(VAR_2, "--------------------------------------\n");
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  FUNC_0(VAR_2, "%-32s 0x%llx\n",
      VAR_5[VAR_6], VAR_4[VAR_6].telem_evtlog);
 }

 return 0;
}
