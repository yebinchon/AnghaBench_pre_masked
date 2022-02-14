
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_9)
{


 if (FUNC_2())
  return;

 FUNC_0(VAR_9, "%-35s %08x\n", "DSS_REVISION", FUNC_0(VAR_2));
 FUNC_0(VAR_9, "%-35s %08x\n", "DSS_SYSCONFIG", FUNC_0(VAR_5));
 FUNC_0(VAR_9, "%-35s %08x\n", "DSS_SYSSTATUS", FUNC_0(VAR_6));
 FUNC_0(VAR_9, "%-35s %08x\n", "DSS_CONTROL", FUNC_0(VAR_0));

 if (FUNC_1(VAR_8) &
   VAR_7) {
  FUNC_0(VAR_9, "%-35s %08x\n", "DSS_SDI_CONTROL", FUNC_0(VAR_3));
  FUNC_0(VAR_9, "%-35s %08x\n", "DSS_PLL_CONTROL", FUNC_0(VAR_1));
  FUNC_0(VAR_9, "%-35s %08x\n", "DSS_SDI_STATUS", FUNC_0(VAR_4));
 }

 FUNC_3();

}
