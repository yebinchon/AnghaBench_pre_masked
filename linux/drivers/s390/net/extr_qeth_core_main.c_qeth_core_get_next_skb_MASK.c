
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct qeth_qdio_buffer {struct sk_buff* rx_skb; struct qdio_buffer* buffer; } ;
struct TYPE_9__ {int pdu_length; } ;
struct TYPE_8__ {int length; } ;
struct TYPE_7__ {int id; int pkt_length; } ;
struct TYPE_10__ {TYPE_3__ osn; TYPE_2__ l3; TYPE_1__ l2; } ;
struct qeth_hdr {TYPE_4__ hdr; } ;
struct TYPE_11__ {int rx_sg_cb; scalar_t__ cq; } ;
struct qeth_card {int napi; TYPE_5__ options; int force_alloc_skb; } ;
struct qdio_buffer_element {int length; struct qeth_hdr* addr; } ;
struct qdio_buffer {int dummy; } ;
struct TYPE_12__ {int nr_frags; } ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (struct qeth_card*,int,struct qdio_buffer*,int) ;
 int FUNC_2 (struct qeth_card*,int ,int ) ;
 int FUNC_3 (struct qeth_card*,int ) ;
 int FUNC_4 (struct qeth_card*,int,char*) ;
 scalar_t__ VAR_1 ;



 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int,int) ;
 struct sk_buff* FUNC_8 (int *,unsigned int) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (struct qdio_buffer_element*,struct sk_buff*,int,int) ;
 scalar_t__ FUNC_11 (struct qdio_buffer_element*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (struct sk_buff*,void*,int) ;
 int FUNC_13 (struct sk_buff*,int) ;
 TYPE_6__* FUNC_14 (struct sk_buff*) ;

struct sk_buff *FUNC_15(struct qeth_card *VAR_7,
  struct qeth_qdio_buffer *VAR_8,
  struct qdio_buffer_element **VAR_9, int *VAR_10,
  struct qeth_hdr **VAR_11)
{
 struct qdio_buffer_element *VAR_12 = *VAR_9;
 struct qdio_buffer *VAR_13 = VAR_8->buffer;
 int VAR_14 = *VAR_10;
 struct sk_buff *VAR_15;
 int VAR_16 = 0;
 void *VAR_17;
 int VAR_18;
 int VAR_19 = 0;
 int VAR_20 = 0;


 while (VAR_12->length < VAR_14 + sizeof(struct qeth_hdr)) {
  if (FUNC_11(VAR_12))
   return ((void*)0);
  VAR_12++;
  VAR_14 = 0;
 }
 *VAR_11 = VAR_12->addr + VAR_14;

 VAR_14 += sizeof(struct qeth_hdr);
 switch ((*VAR_11)->hdr.l2.id) {
 case 130:
  VAR_16 = (*VAR_11)->hdr.l2.pkt_length;
  break;
 case 129:
  VAR_16 = (*VAR_11)->hdr.l3.length;
  VAR_19 = VAR_0;
  break;
 case 128:
  VAR_16 = (*VAR_11)->hdr.osn.pdu_length;
  VAR_19 = sizeof(struct qeth_hdr);
  break;
 default:
  break;
 }

 if (!VAR_16)
  return ((void*)0);

 if (((VAR_16 >= VAR_7->options.rx_sg_cb) &&
      !FUNC_0(VAR_7) &&
      (!FUNC_5(&VAR_7->force_alloc_skb))) ||
     (VAR_7->options.cq == VAR_1))
  VAR_20 = 1;

 if (VAR_20 && VAR_8->rx_skb) {

  VAR_15 = VAR_8->rx_skb;
  VAR_8->rx_skb = ((void*)0);
 } else {
  unsigned int VAR_21 = (VAR_20) ? VAR_2 : VAR_16;

  VAR_15 = FUNC_8(&VAR_7->napi, VAR_21 + VAR_19);
 }
 if (!VAR_15)
  goto no_mem;
 if (VAR_19)
  FUNC_13(VAR_15, VAR_19);

 VAR_17 = VAR_12->addr + VAR_14;
 while (VAR_16) {
  VAR_18 = FUNC_7(VAR_16, (int)(VAR_12->length - VAR_14));
  if (VAR_18) {
   if (VAR_20)
    FUNC_10(VAR_12, VAR_15, VAR_14,
           VAR_18);
   else
    FUNC_12(VAR_15, VAR_17, VAR_18);
  }
  VAR_16 -= VAR_18;
  if (VAR_16) {
   if (FUNC_11(VAR_12)) {
    FUNC_4(VAR_7, 4, "unexeob");
    FUNC_1(VAR_7, 2, VAR_13, sizeof(void *));
    FUNC_6(VAR_15);
    FUNC_3(VAR_7, VAR_4);
    return ((void*)0);
   }
   VAR_12++;
   VAR_14 = 0;
   VAR_17 = VAR_12->addr;
  } else {
   VAR_14 += VAR_18;
  }
 }
 *VAR_9 = VAR_12;
 *VAR_10 = VAR_14;
 if (VAR_20) {
  FUNC_3(VAR_7, VAR_6);
  FUNC_2(VAR_7, VAR_5,
       FUNC_14(VAR_15)->nr_frags);
 }
 return VAR_15;
no_mem:
 if (FUNC_9()) {
  FUNC_4(VAR_7, 2, "noskbmem");
 }
 FUNC_3(VAR_7, VAR_3);
 return ((void*)0);
}
