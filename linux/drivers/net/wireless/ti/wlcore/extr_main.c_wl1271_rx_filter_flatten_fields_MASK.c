
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wl12xx_rx_filter_field {scalar_t__ len; int pattern; int flags; int offset; } ;
struct wl12xx_rx_filter {int num_fields; TYPE_1__* fields; } ;
struct TYPE_2__ {int pattern; scalar_t__ len; int flags; int offset; } ;


 int FUNC_0 (int *,int ,scalar_t__) ;

void FUNC_1(struct wl12xx_rx_filter *VAR_0,
        u8 *VAR_1)
{
 int VAR_2;
 struct wl12xx_rx_filter_field *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_fields; VAR_2++) {
  VAR_3 = (struct wl12xx_rx_filter_field *)VAR_1;

  VAR_3->offset = VAR_0->fields[VAR_2].offset;
  VAR_3->flags = VAR_0->fields[VAR_2].flags;
  VAR_3->len = VAR_0->fields[VAR_2].len;

  FUNC_0(&VAR_3->pattern, VAR_0->fields[VAR_2].pattern, VAR_3->len);
  VAR_1 += sizeof(struct wl12xx_rx_filter_field) -
   sizeof(u8 *) + VAR_3->len;
 }
}
