
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int dss_clk; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 TYPE_1__ VAR_1 ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct seq_file*,char*,...) ;

void FUNC_6(struct seq_file *VAR_2)
{
 const char *VAR_3, *VAR_4;
 unsigned long VAR_5;

 if (FUNC_3())
  return;

 FUNC_5(VAR_2, "- DSS -\n");

 VAR_3 = FUNC_2(VAR_0);
 VAR_4 = FUNC_1(VAR_0);
 VAR_5 = FUNC_0(VAR_1.dss_clk);

 FUNC_5(VAR_2, "%s (%s) = %lu\n",
   VAR_3, VAR_4,
   VAR_5);

 FUNC_4();
}
