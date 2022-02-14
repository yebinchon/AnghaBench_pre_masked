
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int default_key; } ;


 int FUNC_0 (struct wl1251*,int ) ;
 int FUNC_1 (struct wl1251*,int ) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct wl1251 *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0, 0);
 if (VAR_1 < 0) {
  FUNC_2("couldn't set feature config");
  return VAR_1;
 }

 VAR_1 = FUNC_0(VAR_0, VAR_0->default_key);
 if (VAR_1 < 0) {
  FUNC_2("couldn't set default key");
  return VAR_1;
 }

 return 0;
}
