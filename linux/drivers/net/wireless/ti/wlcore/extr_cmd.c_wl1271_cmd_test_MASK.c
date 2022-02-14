
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wl1271*,int ,void*,size_t,size_t) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct wl1271 *VAR_2, void *VAR_3, size_t VAR_4, u8 VAR_5)
{
 int VAR_6;
 size_t VAR_7 = 0;

 FUNC_1(VAR_1, "cmd test");

 if (VAR_5)
  VAR_7 = VAR_4;

 VAR_6 = FUNC_0(VAR_2, VAR_0, VAR_3, VAR_4, VAR_7);

 if (VAR_6 < 0) {
  FUNC_2("TEST command failed");
  return VAR_6;
 }

 return VAR_6;
}
