
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int event_mask; } ;


 int FUNC_0 (struct wl1251*,int ) ;

int FUNC_1(struct wl1251 *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0, ~(VAR_0->event_mask));
 if (VAR_1 < 0)
  return VAR_1;

 return 0;
}
