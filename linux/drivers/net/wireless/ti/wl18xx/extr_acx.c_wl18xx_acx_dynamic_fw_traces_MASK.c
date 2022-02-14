
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int dynamic_fw_traces; } ;
struct acx_dynamic_fw_traces_cfg {int dynamic_fw_traces; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct acx_dynamic_fw_traces_cfg*) ;
 struct acx_dynamic_fw_traces_cfg* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct acx_dynamic_fw_traces_cfg*,int) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_4)
{
 struct acx_dynamic_fw_traces_cfg *VAR_5;
 int VAR_6;

 FUNC_4(VAR_1, "acx dynamic fw traces config %d",
       VAR_4->dynamic_fw_traces);

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_3);
 if (!VAR_5) {
  VAR_6 = -VAR_2;
  goto out;
 }

 VAR_5->dynamic_fw_traces = FUNC_0(VAR_4->dynamic_fw_traces);

 VAR_6 = FUNC_3(VAR_4, VAR_0,
       VAR_5, sizeof(*VAR_5));
 if (VAR_6 < 0) {
  FUNC_5("acx config dynamic fw traces failed: %d", VAR_6);
  goto out;
 }
out:
 FUNC_1(VAR_5);
 return VAR_6;
}
