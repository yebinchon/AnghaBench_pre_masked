
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl1271 {int dummy; } ;
typedef enum wlcore_wait_event { ____Placeholder_wlcore_wait_event } wlcore_wait_event ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct wl1271*,int ,int*) ;

int FUNC_1(struct wl1271 *VAR_2, enum wlcore_wait_event VAR_3,
     bool *VAR_4)
{
 u32 VAR_5;

 switch (VAR_3) {
 case 128:
  VAR_5 = VAR_1;
  break;

 case 129:
  VAR_5 = VAR_0;
  break;

 default:

  return 0;
 }
 return FUNC_0(VAR_2, VAR_5, VAR_4);
}
