
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct mei_device* private; } ;
struct mei_device {scalar_t__ hbm_state; int hbm_f_dr_supported; int hbm_f_os_supported; int hbm_f_fa_supported; int hbm_f_ev_supported; int hbm_f_dot_supported; int hbm_f_ie_supported; int hbm_f_dc_supported; int hbm_f_pg_supported; int dev_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct mei_device*) ;
 int FUNC_3 (struct mei_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct seq_file*,char*,char*,...) ;
 int FUNC_6 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_7(struct seq_file *VAR_2, void *VAR_3)
{
 struct mei_device *VAR_4 = VAR_2->private;

 FUNC_5(VAR_2, "dev: %s\n", FUNC_0(VAR_4->dev_state));
 FUNC_5(VAR_2, "hbm: %s\n", FUNC_1(VAR_4->hbm_state));

 if (VAR_4->hbm_state >= VAR_0 &&
     VAR_4->hbm_state <= VAR_1) {
  FUNC_6(VAR_2, "hbm features:\n");
  FUNC_5(VAR_2, "\tPG: %01d\n", VAR_4->hbm_f_pg_supported);
  FUNC_5(VAR_2, "\tDC: %01d\n", VAR_4->hbm_f_dc_supported);
  FUNC_5(VAR_2, "\tIE: %01d\n", VAR_4->hbm_f_ie_supported);
  FUNC_5(VAR_2, "\tDOT: %01d\n", VAR_4->hbm_f_dot_supported);
  FUNC_5(VAR_2, "\tEV: %01d\n", VAR_4->hbm_f_ev_supported);
  FUNC_5(VAR_2, "\tFA: %01d\n", VAR_4->hbm_f_fa_supported);
  FUNC_5(VAR_2, "\tOS: %01d\n", VAR_4->hbm_f_os_supported);
  FUNC_5(VAR_2, "\tDR: %01d\n", VAR_4->hbm_f_dr_supported);
 }

 FUNC_5(VAR_2, "pg:  %s, %s\n",
     FUNC_2(VAR_4) ? "ENABLED" : "DISABLED",
     FUNC_4(FUNC_3(VAR_4)));
 return 0;
}
