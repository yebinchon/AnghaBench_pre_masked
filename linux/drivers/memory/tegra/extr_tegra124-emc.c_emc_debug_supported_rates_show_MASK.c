
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_emc {unsigned int num_timings; struct emc_timing* timings; } ;
struct seq_file {struct tegra_emc* private; } ;
struct emc_timing {int rate; } ;


 int FUNC_0 (struct seq_file*,char*,char const*,int ) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct tegra_emc *VAR_2 = VAR_0->private;
 const char *VAR_3 = "";
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_timings; VAR_4++) {
  struct emc_timing *VAR_5 = &VAR_2->timings[VAR_4];

  FUNC_0(VAR_0, "%s%lu", VAR_3, VAR_5->rate);

  VAR_3 = " ";
 }

 FUNC_1(VAR_0, "\n");

 return 0;
}
