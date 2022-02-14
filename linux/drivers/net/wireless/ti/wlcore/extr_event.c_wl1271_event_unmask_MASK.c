
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int event_mask; } ;


 int VAR_0 ;
 int FUNC_0 (struct wl1271*,int ) ;
 int FUNC_1 (int ,char*,int ) ;

int FUNC_2(struct wl1271 *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_0, "unmasking event_mask 0x%x", VAR_1->event_mask);
 VAR_2 = FUNC_0(VAR_1, ~(VAR_1->event_mask));
 if (VAR_2 < 0)
  return VAR_2;

 return 0;
}
