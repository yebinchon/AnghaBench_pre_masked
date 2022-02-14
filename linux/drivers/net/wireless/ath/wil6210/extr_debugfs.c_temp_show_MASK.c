
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_temp_sense_all_done_event {int rf_bitmap; int * rf_t1000; int baseband_t1000; } ;
struct wil6210_priv {int fw_capabilities; } ;
struct seq_file {struct wil6210_priv* private; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;
 int FUNC_2 (struct seq_file*,char*,int) ;
 int FUNC_3 (struct seq_file*,char*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (struct wil6210_priv*,char*) ;
 int FUNC_6 (struct wil6210_priv*,struct wmi_temp_sense_all_done_event*) ;
 int FUNC_7 (struct wil6210_priv*,int *,int *) ;

__attribute__((used)) static int FUNC_8(struct seq_file *VAR_2, void *VAR_3)
{
 struct wil6210_priv *VAR_4 = VAR_2->private;
 int VAR_5, VAR_6;

 if (FUNC_4(VAR_0,
       VAR_4->fw_capabilities)) {
  struct wmi_temp_sense_all_done_event VAR_7;

  FUNC_5(VAR_4,
        "WMI_FW_CAPABILITY_TEMPERATURE_ALL_RF is supported");
  VAR_5 = FUNC_6(VAR_4, &VAR_7);
  if (VAR_5) {
   FUNC_3(VAR_2, "Failed\n");
   return 0;
  }
  FUNC_1(VAR_2, "T_mac   =",
      FUNC_0(VAR_7.baseband_t1000));
  FUNC_2(VAR_2, "Connected RFs [0x%08x]\n",
      VAR_7.rf_bitmap);
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
   FUNC_2(VAR_2, "RF[%d]   = ", VAR_6);
   FUNC_1(VAR_2, "",
       FUNC_0(VAR_7.rf_t1000[VAR_6]));
  }
 } else {
  s32 VAR_8, VAR_9;

  FUNC_5(VAR_4,
        "WMI_FW_CAPABILITY_TEMPERATURE_ALL_RF is not supported");
  VAR_5 = FUNC_7(VAR_4, &VAR_8, &VAR_9);
  if (VAR_5) {
   FUNC_3(VAR_2, "Failed\n");
   return 0;
  }
  FUNC_1(VAR_2, "T_mac   =", VAR_8);
  FUNC_1(VAR_2, "T_radio =", VAR_9);
 }
 return 0;
}
