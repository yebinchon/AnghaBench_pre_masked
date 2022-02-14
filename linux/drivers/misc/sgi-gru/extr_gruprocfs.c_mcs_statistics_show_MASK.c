
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {unsigned long max; int total; int count; } ;


 unsigned long FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct seq_file*,char*,char*,...) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_2, void *VAR_3)
{
 int VAR_4;
 unsigned long VAR_5, VAR_6, VAR_7;
 static char *VAR_8[] = {"cch_allocate", "cch_start", "cch_interrupt",
  "cch_interrupt_sync", "cch_deallocate", "tfh_write_only",
  "tfh_write_restart", "tgh_invalidate"};

 FUNC_1(VAR_2, "%-20s%12s%12s%12s\n", "#id", "count", "aver-clks", "max-clks");
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_6 = FUNC_0(&VAR_0[VAR_4].count);
  VAR_5 = FUNC_0(&VAR_0[VAR_4].total);
  VAR_7 = VAR_0[VAR_4].max;
  FUNC_1(VAR_2, "%-20s%12ld%12ld%12ld\n", VAR_8[VAR_4], VAR_6,
      VAR_6 ? VAR_5 / VAR_6 : 0, VAR_7);
 }
 return 0;
}
