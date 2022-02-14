
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
typedef enum omap_dss_clk_source { ____Placeholder_omap_dss_clk_source } omap_dss_clk_source ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int,int*,int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_6 (struct seq_file*,char*,int ,...) ;

__attribute__((used)) static void FUNC_7(struct seq_file *VAR_1, enum omap_channel VAR_2)
{
 int VAR_3, VAR_4;
 enum omap_dss_clk_source VAR_5;

 FUNC_6(VAR_1, "- %s -\n", VAR_0[VAR_2].name);

 VAR_5 = FUNC_5(VAR_2);

 FUNC_6(VAR_1, "%s clk source = %s (%s)\n", VAR_0[VAR_2].name,
  FUNC_4(VAR_5),
  FUNC_3(VAR_5));

 FUNC_0(VAR_2, &VAR_3, &VAR_4);

 FUNC_6(VAR_1, "lck\t\t%-16lulck div\t%u\n",
  FUNC_1(VAR_2), VAR_3);
 FUNC_6(VAR_1, "pck\t\t%-16lupck div\t%u\n",
  FUNC_2(VAR_2), VAR_4);
}
