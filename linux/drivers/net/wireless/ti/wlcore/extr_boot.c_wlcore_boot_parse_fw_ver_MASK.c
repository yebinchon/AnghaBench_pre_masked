
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl1271_static_data {int fw_version; } ;
struct TYPE_2__ {char* fw_ver_str; int * fw_ver; } ;
struct wl1271 {TYPE_1__ chip; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (char*,char*,int *,int *,int *,int *,int *) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct wl1271*) ;

__attribute__((used)) static int FUNC_5(struct wl1271 *VAR_1,
        struct wl1271_static_data *VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_1->chip.fw_ver_str, VAR_2->fw_version,
  sizeof(VAR_1->chip.fw_ver_str));


 VAR_1->chip.fw_ver_str[sizeof(VAR_1->chip.fw_ver_str) - 1] = '\0';

 VAR_3 = FUNC_1(VAR_1->chip.fw_ver_str + 4, "%u.%u.%u.%u.%u",
       &VAR_1->chip.fw_ver[0], &VAR_1->chip.fw_ver[1],
       &VAR_1->chip.fw_ver[2], &VAR_1->chip.fw_ver[3],
       &VAR_1->chip.fw_ver[4]);

 if (VAR_3 != 5) {
  FUNC_3("fw version incorrect value");
  FUNC_0(VAR_1->chip.fw_ver, 0, sizeof(VAR_1->chip.fw_ver));
  VAR_3 = -VAR_0;
  goto out;
 }

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3 < 0)
  goto out;
out:
 return VAR_3;
}
