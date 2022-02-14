
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtnet_info {unsigned int hdr_len; scalar_t__ mergeable_rx_bufs; } ;
struct virtio_net_hdr_mrg_rxbuf {int dummy; } ;
struct sk_buff {TYPE_1__* dev; } ;
struct receive_queue {int napi; } ;
struct page {scalar_t__ private; } ;
struct padded_vnet_hdr {int dummy; } ;
struct TYPE_4__ {int nr_frags; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct receive_queue*,struct page*) ;
 int FUNC_3 (struct virtio_net_hdr_mrg_rxbuf*,char*,unsigned int) ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;
 struct sk_buff* FUNC_5 (int *,int ) ;
 int FUNC_6 (char*,int ) ;
 char* FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct sk_buff*,int ,struct page*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_10 (struct sk_buff*,char*,unsigned int) ;
 TYPE_2__* FUNC_11 (struct sk_buff*) ;
 unsigned int FUNC_12 (struct sk_buff*) ;
 struct virtio_net_hdr_mrg_rxbuf* FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_15(struct virtnet_info *VAR_3,
       struct receive_queue *VAR_4,
       struct page *VAR_5, unsigned int VAR_6,
       unsigned int VAR_7, unsigned int VAR_8,
       bool VAR_9)
{
 struct sk_buff *VAR_10;
 struct virtio_net_hdr_mrg_rxbuf *VAR_11;
 unsigned int VAR_12, VAR_13, VAR_14;
 char *VAR_15;

 VAR_15 = FUNC_7(VAR_5) + VAR_6;


 VAR_10 = FUNC_5(&VAR_4->napi, VAR_0);
 if (FUNC_14(!VAR_10))
  return ((void*)0);

 VAR_11 = FUNC_13(VAR_10);

 VAR_13 = VAR_3->hdr_len;
 if (VAR_3->mergeable_rx_bufs)
  VAR_14 = sizeof(*VAR_11);
 else
  VAR_14 = sizeof(struct padded_vnet_hdr);

 if (VAR_9)
  FUNC_3(VAR_11, VAR_15, VAR_13);

 VAR_7 -= VAR_13;
 VAR_6 += VAR_14;
 VAR_15 += VAR_14;

 VAR_12 = VAR_7;
 if (VAR_12 > FUNC_12(VAR_10))
  VAR_12 = FUNC_12(VAR_10);
 FUNC_10(VAR_10, VAR_15, VAR_12);

 VAR_7 -= VAR_12;
 VAR_6 += VAR_12;

 if (VAR_3->mergeable_rx_bufs) {
  if (VAR_7)
   FUNC_9(VAR_10, 0, VAR_5, VAR_6, VAR_7, VAR_8);
  else
   FUNC_8(VAR_5);
  return VAR_10;
 }







 if (FUNC_14(VAR_7 > VAR_1 * VAR_2)) {
  FUNC_6("%s: too much data\n", VAR_10->dev->name);
  FUNC_1(VAR_10);
  return ((void*)0);
 }
 FUNC_0(VAR_6 >= VAR_2);
 while (VAR_7) {
  unsigned int VAR_16 = FUNC_4((unsigned)VAR_2 - VAR_6, VAR_7);
  FUNC_9(VAR_10, FUNC_11(VAR_10)->nr_frags, VAR_5, VAR_6,
    VAR_16, VAR_8);
  VAR_7 -= VAR_16;
  VAR_5 = (struct page *)VAR_5->private;
  VAR_6 = 0;
 }

 if (VAR_5)
  FUNC_2(VAR_4, VAR_5);

 return VAR_10;
}
