
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl12xx_rx_filter {int num_fields; TYPE_1__* fields; } ;
struct TYPE_2__ {struct wl12xx_rx_filter* pattern; } ;


 int FUNC_0 (struct wl12xx_rx_filter*) ;

void FUNC_1(struct wl12xx_rx_filter *VAR_0)
{
 int VAR_1;

 if (VAR_0 == ((void*)0))
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_fields; VAR_1++)
  FUNC_0(VAR_0->fields[VAR_1].pattern);

 FUNC_0(VAR_0);
}
