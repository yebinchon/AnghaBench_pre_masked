
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wil_ring {size_t swhead; TYPE_2__* va; } ;
struct wil6210_priv {struct wil_ring ring_rx; } ;
struct TYPE_6__ {int status; } ;
struct vring_rx_desc {TYPE_3__ dma; } ;
struct TYPE_4__ {int legacy; } ;
struct TYPE_5__ {TYPE_1__ rx; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct wil6210_priv *VAR_1)
{
 struct vring_rx_desc *VAR_2;
 struct wil_ring *VAR_3 = &VAR_1->ring_rx;

 VAR_2 = (struct vring_rx_desc *)&VAR_3->va[VAR_3->swhead].rx.legacy;
 if (VAR_2->dma.status & VAR_0)
  return 0;

 return 1;
}
