
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int dummy; } ;
struct acx_ctsprotect {int ctsprotect; } ;
typedef enum acx_ctsprotect_type { ____Placeholder_acx_ctsprotect_type } acx_ctsprotect_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct acx_ctsprotect*) ;
 struct acx_ctsprotect* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int ,struct acx_ctsprotect*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1251 *VAR_4,
      enum acx_ctsprotect_type VAR_5)
{
 struct acx_ctsprotect *VAR_6;
 int VAR_7;

 FUNC_3(VAR_1, "acx_set_ctsprotect");

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  return -VAR_2;

 VAR_6->ctsprotect = VAR_5;

 VAR_7 = FUNC_2(VAR_4, VAR_0, VAR_6, sizeof(*VAR_6));
 if (VAR_7 < 0) {
  FUNC_4("Setting of ctsprotect failed: %d", VAR_7);
  goto out;
 }

out:
 FUNC_0(VAR_6);
 return VAR_7;
}
