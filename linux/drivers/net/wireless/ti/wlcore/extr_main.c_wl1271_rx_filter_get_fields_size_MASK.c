
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wl12xx_rx_filter_field {int dummy; } ;
struct wl12xx_rx_filter {int num_fields; TYPE_1__* fields; } ;
struct TYPE_2__ {int len; } ;



int FUNC_0(struct wl12xx_rx_filter *VAR_0)
{
 int VAR_1, VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_fields; VAR_1++)
  VAR_2 += VAR_0->fields[VAR_1].len +
   sizeof(struct wl12xx_rx_filter_field) -
   sizeof(u8 *);

 return VAR_2;
}
