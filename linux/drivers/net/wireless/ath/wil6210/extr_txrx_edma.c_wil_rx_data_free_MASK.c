
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * skb; } ;
struct wil_status_ring {TYPE_1__ rx_data; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct wil_status_ring *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0->rx_data.skb);
 VAR_0->rx_data.skb = ((void*)0);
}
