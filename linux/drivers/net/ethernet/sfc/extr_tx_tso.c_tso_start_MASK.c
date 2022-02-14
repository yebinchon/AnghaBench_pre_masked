
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tso_state {unsigned int ip_off; unsigned int tcp_off; unsigned int header_len; unsigned int in_len; scalar_t__ protocol; unsigned int ip_base_len; unsigned int header_unmap_len; scalar_t__ unmap_len; void* dma_addr; void* header_dma_addr; scalar_t__ out_len; int seqnum; scalar_t__ ipv4_id; } ;
struct sk_buff {unsigned int data; scalar_t__ len; } ;
struct efx_tx_queue {int dummy; } ;
struct efx_nic {TYPE_1__* pci_dev; } ;
struct device {int dummy; } ;
typedef void* dma_addr_t ;
struct TYPE_6__ {int id; } ;
struct TYPE_5__ {unsigned int doff; int rst; int syn; int urg; int seq; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (struct device*,unsigned int,unsigned int,int ) ;
 int FUNC_2 (struct device*,void*) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (struct sk_buff const*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 unsigned int FUNC_7 (struct sk_buff const*) ;
 unsigned int FUNC_8 (struct sk_buff const*) ;
 unsigned int FUNC_9 (struct sk_buff const*) ;
 TYPE_2__* FUNC_10 (struct sk_buff const*) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct tso_state *VAR_3, struct efx_nic *VAR_4,
       struct efx_tx_queue *VAR_5,
       const struct sk_buff *VAR_6)
{
 struct device *VAR_7 = &VAR_4->pci_dev->dev;
 unsigned int VAR_8, VAR_9;
 dma_addr_t VAR_10;

 VAR_3->ip_off = FUNC_8(VAR_6) - VAR_6->data;
 VAR_3->tcp_off = FUNC_9(VAR_6) - VAR_6->data;
 VAR_8 = VAR_3->tcp_off + (FUNC_10(VAR_6)->doff << 2u);
 VAR_9 = FUNC_7(VAR_6) - VAR_8;
 VAR_3->header_len = VAR_8;
 VAR_3->in_len = VAR_9;
 if (VAR_3->protocol == FUNC_3(VAR_2)) {
  VAR_3->ip_base_len = VAR_3->header_len - VAR_3->ip_off;
  VAR_3->ipv4_id = FUNC_6(FUNC_4(VAR_6)->id);
 } else {
  VAR_3->ip_base_len = VAR_3->header_len - VAR_3->tcp_off;
  VAR_3->ipv4_id = 0;
 }
 VAR_3->seqnum = FUNC_5(FUNC_10(VAR_6)->seq);

 FUNC_0(FUNC_10(VAR_6)->urg);
 FUNC_0(FUNC_10(VAR_6)->syn);
 FUNC_0(FUNC_10(VAR_6)->rst);

 VAR_3->out_len = VAR_6->len - VAR_8;

 VAR_10 = FUNC_1(VAR_7, VAR_6->data,
      FUNC_7(VAR_6), VAR_0);
 VAR_3->header_dma_addr = VAR_10;
 VAR_3->header_unmap_len = FUNC_7(VAR_6);
 VAR_3->dma_addr = VAR_10 + VAR_8;
 VAR_3->unmap_len = 0;

 return FUNC_11(FUNC_2(VAR_7, VAR_10)) ? -VAR_1 : 0;
}
