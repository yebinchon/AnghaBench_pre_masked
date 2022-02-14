
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_net_hdr_mrg_rxbuf {int dummy; } ;
struct sk_buff {scalar_t__ cb; } ;



__attribute__((used)) static inline struct virtio_net_hdr_mrg_rxbuf *FUNC_0(struct sk_buff *VAR_0)
{
 return (struct virtio_net_hdr_mrg_rxbuf *)VAR_0->cb;
}
