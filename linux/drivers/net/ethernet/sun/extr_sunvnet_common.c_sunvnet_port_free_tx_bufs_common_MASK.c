
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int lp; struct vio_dring_state* drings; } ;
struct vnet_port {TYPE_3__ vio; TYPE_1__* tx_bufs; } ;
struct TYPE_5__ {int state; } ;
struct vio_net_desc {TYPE_2__ hdr; } ;
struct vio_dring_state {int entry_size; int num_entries; scalar_t__ ncookies; scalar_t__ pending; int * base; int cookies; } ;
struct TYPE_4__ {int * skb; int ncookies; int cookies; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ,int *,int,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,int ) ;
 struct vio_net_desc* FUNC_3 (struct vio_dring_state*,int) ;

void FUNC_4(struct vnet_port *VAR_3)
{
 struct vio_dring_state *VAR_4;
 int VAR_5;

 VAR_4 = &VAR_3->vio.drings[VAR_1];

 if (!VAR_4->base)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  struct vio_net_desc *VAR_6;
  void *VAR_7 = VAR_3->tx_bufs[VAR_5].skb;

  if (!VAR_7)
   continue;

  VAR_6 = FUNC_3(VAR_4, VAR_5);

  FUNC_2(VAR_3->vio.lp,
     VAR_3->tx_bufs[VAR_5].cookies,
     VAR_3->tx_bufs[VAR_5].ncookies);
  FUNC_0(VAR_7);
  VAR_3->tx_bufs[VAR_5].skb = ((void*)0);
  VAR_6->hdr.state = VAR_0;
 }
 FUNC_1(VAR_3->vio.lp, VAR_4->base,
      (VAR_4->entry_size * VAR_4->num_entries),
      VAR_4->cookies, VAR_4->ncookies);
 VAR_4->base = ((void*)0);
 VAR_4->entry_size = 0;
 VAR_4->num_entries = 0;
 VAR_4->pending = 0;
 VAR_4->ncookies = 0;
}
