
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251_rx_descriptor {int dummy; } ;
struct wl1251 {scalar_t__ state; struct wl1251_rx_descriptor* rx_descriptor; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct wl1251*) ;
 int FUNC_1 (struct wl1251*,struct wl1251_rx_descriptor*) ;
 int FUNC_2 (struct wl1251*,struct wl1251_rx_descriptor*) ;

void FUNC_3(struct wl1251 *VAR_1)
{
 struct wl1251_rx_descriptor *VAR_2;

 if (VAR_1->state != VAR_0)
  return;

 VAR_2 = VAR_1->rx_descriptor;


 FUNC_2(VAR_1, VAR_2);


 FUNC_1(VAR_1, VAR_2);


 FUNC_0(VAR_1);
}
