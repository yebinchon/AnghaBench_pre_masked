
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;
typedef enum omap_dss_clk_source { ____Placeholder_omap_dss_clk_source } omap_dss_clk_source ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct seq_file*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct seq_file*,char*,...) ;

void FUNC_11(struct seq_file *VAR_7)
{
 int VAR_8;
 u32 VAR_9;
 enum omap_dss_clk_source VAR_10 = FUNC_7();

 if (FUNC_4())
  return;

 FUNC_10(VAR_7, "- DISPC -\n");

 FUNC_10(VAR_7, "dispc fclk source = %s (%s)\n",
   FUNC_8(VAR_10),
   FUNC_6(VAR_10));

 FUNC_10(VAR_7, "fck\t\t%-16lu\n", FUNC_2());

 if (FUNC_9(VAR_1)) {
  FUNC_10(VAR_7, "- DISPC-CORE-CLK -\n");
  VAR_9 = FUNC_3(VAR_0);
  VAR_8 = FUNC_0(VAR_9, 23, 16);

  FUNC_10(VAR_7, "lck\t\t%-16lulck div\t%u\n",
    (FUNC_2()/VAR_8), VAR_8);
 }

 FUNC_1(VAR_7, VAR_4);

 if (FUNC_9(VAR_2))
  FUNC_1(VAR_7, VAR_5);
 if (FUNC_9(VAR_3))
  FUNC_1(VAR_7, VAR_6);

 FUNC_5();
}
