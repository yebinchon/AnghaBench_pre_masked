
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lp; struct vio_dring_state* drings; } ;
struct vnet_port {TYPE_2__* tx_bufs; TYPE_1__ vio; } ;
struct TYPE_6__ {scalar_t__ state; } ;
struct vio_net_desc {TYPE_3__ hdr; } ;
struct vio_dring_state {int prod; } ;
struct sk_buff {struct sk_buff* next; } ;
struct TYPE_5__ {int ncookies; int cookies; struct sk_buff* skb; } ;


 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*,scalar_t__) ;
 struct vio_net_desc* FUNC_3 (struct vio_dring_state*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_4(struct vnet_port *VAR_5,
       unsigned *VAR_6)
{
 struct vio_dring_state *VAR_7 = &VAR_5->vio.drings[VAR_3];
 struct sk_buff *VAR_8 = ((void*)0);
 int VAR_9, VAR_10;

 *VAR_6 = 0;

 VAR_10 = VAR_7->prod;
 for (VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9) {
  struct vio_net_desc *VAR_11;

  --VAR_10;
  if (VAR_10 < 0)
   VAR_10 = VAR_4 - 1;

  VAR_11 = FUNC_3(VAR_7, VAR_10);

  if (VAR_11->hdr.state == VAR_2) {
   (*VAR_6)++;
   continue;
  }
  if (VAR_5->tx_bufs[VAR_10].skb) {
   if (VAR_11->hdr.state != VAR_0)
    FUNC_2("invalid ring buffer state %d\n",
       VAR_11->hdr.state);
   FUNC_0(VAR_5->tx_bufs[VAR_10].skb->next);

   VAR_5->tx_bufs[VAR_10].skb->next = VAR_8;
   VAR_8 = VAR_5->tx_bufs[VAR_10].skb;
   VAR_5->tx_bufs[VAR_10].skb = ((void*)0);

   FUNC_1(VAR_5->vio.lp,
      VAR_5->tx_bufs[VAR_10].cookies,
      VAR_5->tx_bufs[VAR_10].ncookies);
  } else if (VAR_11->hdr.state == VAR_1) {
   break;
  }
  VAR_11->hdr.state = VAR_1;
 }
 return VAR_8;
}
