
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct tcphdr {int doff; } ;
struct sk_buff {scalar_t__ ip_summed; unsigned char* data; scalar_t__ encapsulation; } ;
struct fm10k_tx_desc {int hdrlen; int mss; } ;
struct fm10k_tx_buffer {int bytecount; int gso_segs; int tx_flags; struct sk_buff* skb; } ;
struct fm10k_ring {TYPE_2__* netdev; int next_to_use; } ;
struct TYPE_4__ {int features; } ;
struct TYPE_3__ {int gso_size; int gso_segs; } ;


 scalar_t__ VAR_0 ;
 struct fm10k_tx_desc* FUNC_0 (struct fm10k_ring*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (TYPE_2__*,char*) ;
 unsigned char* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 TYPE_1__* FUNC_7 (struct sk_buff*) ;
 unsigned char* FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct fm10k_ring *VAR_3,
       struct fm10k_tx_buffer *VAR_4)
{
 struct sk_buff *VAR_5 = VAR_4->skb;
 struct fm10k_tx_desc *VAR_6;
 unsigned char *VAR_7;
 u8 VAR_8;

 if (VAR_5->ip_summed != VAR_0)
  return 0;

 if (!FUNC_6(VAR_5))
  return 0;


 if (VAR_5->encapsulation) {
  if (!FUNC_2(VAR_5))
   goto err_vxlan;
  VAR_7 = FUNC_5(VAR_5);
 } else {
  VAR_7 = FUNC_8(VAR_5);
 }


 VAR_8 = (VAR_7 - VAR_5->data) + (((struct tcphdr *)VAR_7)->doff << 2);

 VAR_4->tx_flags |= VAR_1;


 VAR_4->gso_segs = FUNC_7(VAR_5)->gso_segs;
 VAR_4->bytecount += (VAR_4->gso_segs - 1) * VAR_8;


 VAR_6 = FUNC_0(VAR_3, VAR_3->next_to_use);
 VAR_6->hdrlen = VAR_8;
 VAR_6->mss = FUNC_1(FUNC_7(VAR_5)->gso_size);

 return 1;

err_vxlan:
 VAR_3->netdev->features &= ~VAR_2;
 if (FUNC_3())
  FUNC_4(VAR_3->netdev,
      "TSO requested for unsupported tunnel, disabling offload\n");
 return -1;
}
