
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271_rx_descriptor {int status; } ;
struct wl1271 {int dummy; } ;
struct sk_buff {int ip_summed; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct wl1271 *VAR_2,
          struct wl1271_rx_descriptor *VAR_3,
          struct sk_buff *VAR_4)
{
 if (VAR_3->status & VAR_1)
  VAR_4->ip_summed = VAR_0;
}
