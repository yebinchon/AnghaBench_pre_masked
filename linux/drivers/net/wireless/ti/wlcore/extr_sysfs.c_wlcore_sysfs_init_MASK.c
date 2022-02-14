
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;

int FUNC_4(struct wl1271 *VAR_3)
{
 int VAR_4;


 VAR_4 = FUNC_1(VAR_3->dev, &VAR_0);
 if (VAR_4 < 0) {
  FUNC_3("failed to create sysfs file bt_coex_state");
  goto out;
 }


 VAR_4 = FUNC_1(VAR_3->dev, &VAR_1);
 if (VAR_4 < 0) {
  FUNC_3("failed to create sysfs file hw_pg_ver");
  goto out_bt_coex_state;
 }


 VAR_4 = FUNC_0(VAR_3->dev, &VAR_2);
 if (VAR_4 < 0) {
  FUNC_3("failed to create sysfs file fwlog");
  goto out_hw_pg_ver;
 }

 goto out;

out_hw_pg_ver:
 FUNC_2(VAR_3->dev, &VAR_1);

out_bt_coex_state:
 FUNC_2(VAR_3->dev, &VAR_0);

out:
 return VAR_4;
}
