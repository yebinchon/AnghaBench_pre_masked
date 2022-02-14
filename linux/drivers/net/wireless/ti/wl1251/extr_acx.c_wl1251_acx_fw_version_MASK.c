
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int dummy; } ;
struct acx_revision {int fw_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct acx_revision*) ;
 struct acx_revision* FUNC_1 (int,int ) ;
 int FUNC_2 (size_t,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct wl1251*,int ,struct acx_revision*,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*) ;

int FUNC_7(struct wl1251 *VAR_4, char *VAR_5, size_t VAR_6)
{
 struct acx_revision *VAR_7;
 int VAR_8;

 FUNC_5(VAR_1, "acx fw rev");

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_2;

 VAR_8 = FUNC_4(VAR_4, VAR_0, VAR_7, sizeof(*VAR_7));
 if (VAR_8 < 0) {
  FUNC_6("ACX_FW_REV interrogate failed");
  goto out;
 }


 FUNC_3(VAR_5, VAR_7->fw_version, FUNC_2(VAR_6, sizeof(VAR_7->fw_version)));






 VAR_5[FUNC_2(VAR_6, sizeof(VAR_7->fw_version)) - 1] = '\0';

out:
 FUNC_0(VAR_7);
 return VAR_8;
}
