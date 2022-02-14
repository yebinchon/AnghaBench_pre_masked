
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct seq_file {struct adapter* private; } ;
struct TYPE_2__ {int chip; } ;
struct adapter {TYPE_1__ params; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct seq_file*,char*,char const* const,char*,...) ;
 int FUNC_2 (struct adapter*,int *,int *) ;
 int FUNC_3 (struct adapter*,int *,int *) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_3, void *VAR_4)
{
 static const char * const VAR_5[] = {
  "Read:", "Write bypass:", "Write mem:", "Bypass + mem:"
 };
 static const char * const VAR_6[] = {
  "Read:", "Write bypass:", "Write mem:", "Flush:"
 };

 int VAR_7;
 u32 VAR_8[VAR_2], VAR_9[VAR_2];
 u64 VAR_10[VAR_2], VAR_11[VAR_2];
 struct adapter *VAR_12 = VAR_3->private;

 FUNC_3(VAR_12, VAR_8, VAR_10);
 FUNC_2(VAR_12, VAR_9, VAR_11);

 FUNC_1(VAR_3, "%13s %10s  %20s\n", " ", "Tx pcmds", "Tx bytes");
 for (VAR_7 = 0; VAR_7 < VAR_1 - 1; VAR_7++)
  FUNC_1(VAR_3, "%-13s %10u  %20llu\n",
      VAR_5[VAR_7], VAR_8[VAR_7], VAR_10[VAR_7]);

 FUNC_1(VAR_3, "%13s %10s  %20s\n", " ", "Rx pcmds", "Rx bytes");
 for (VAR_7 = 0; VAR_7 < VAR_1 - 1; VAR_7++)
  FUNC_1(VAR_3, "%-13s %10u  %20llu\n",
      VAR_6[VAR_7], VAR_9[VAR_7], VAR_11[VAR_7]);

 if (FUNC_0(VAR_12->params.chip) > VAR_0) {




  FUNC_1(VAR_3, "%13s %10s  %20s\n",
      " ", "Total wait", "Total Occupancy");
  FUNC_1(VAR_3, "Tx FIFO wait  %10u  %20llu\n",
      VAR_8[VAR_7], VAR_10[VAR_7]);
  FUNC_1(VAR_3, "Rx FIFO wait  %10u  %20llu\n",
      VAR_9[VAR_7], VAR_11[VAR_7]);


  VAR_7 += 2;




  FUNC_1(VAR_3, "%13s %10s  %20s\n",
      " ", "Reads", "Total wait");
  FUNC_1(VAR_3, "Tx latency    %10u  %20llu\n",
      VAR_8[VAR_7], VAR_10[VAR_7]);
  FUNC_1(VAR_3, "Rx latency    %10u  %20llu\n",
      VAR_9[VAR_7], VAR_11[VAR_7]);
 }
 return 0;
}
