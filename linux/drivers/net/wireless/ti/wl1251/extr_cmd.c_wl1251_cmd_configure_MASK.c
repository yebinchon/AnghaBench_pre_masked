
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wl1251 {int dummy; } ;
struct acx_header {size_t len; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wl1251*,int ,struct acx_header*,size_t) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct wl1251 *VAR_2, u16 VAR_3, void *VAR_4, size_t VAR_5)
{
 struct acx_header *VAR_6 = VAR_4;
 int VAR_7;

 FUNC_1(VAR_1, "cmd configure");

 VAR_6->id = VAR_3;


 VAR_6->len = VAR_5 - sizeof(*VAR_6);

 VAR_7 = FUNC_0(VAR_2, VAR_0, VAR_6, VAR_5);
 if (VAR_7 < 0) {
  FUNC_2("CONFIGURE command NOK");
  return VAR_7;
 }

 return 0;
}
