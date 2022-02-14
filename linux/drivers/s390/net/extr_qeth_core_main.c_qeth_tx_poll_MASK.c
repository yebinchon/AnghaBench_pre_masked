
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_qdio_out_q {unsigned int queue_no; int used_buffers; struct qeth_qdio_out_buffer** bufs; struct qeth_card* card; } ;
struct qeth_qdio_out_buffer {scalar_t__ bytes; int skb_list; } ;
struct qeth_card {struct net_device* dev; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
struct napi_struct {int dummy; } ;


 int FUNC_0 (struct qeth_card*) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_2 (struct qeth_qdio_out_q*,int ) ;
 int FUNC_3 (int,int *) ;
 int VAR_1 ;
 int FUNC_4 (struct napi_struct*) ;
 scalar_t__ FUNC_5 (struct napi_struct*,int ) ;
 int FUNC_6 (struct napi_struct*) ;
 struct netdev_queue* FUNC_7 (struct net_device*,int ) ;
 int FUNC_8 (struct netdev_queue*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_9 (struct netdev_queue*) ;
 int FUNC_10 (struct netdev_queue*) ;
 int FUNC_11 (int ,unsigned int,int,unsigned int*,unsigned int*) ;
 int FUNC_12 (struct qeth_qdio_out_q*,unsigned int,int) ;
 int FUNC_13 (struct qeth_card*,struct qeth_qdio_out_buffer*,unsigned int) ;
 int FUNC_14 (struct net_device*,unsigned int) ;
 int FUNC_15 (struct qeth_qdio_out_q*,unsigned int,unsigned int,int) ;
 struct qeth_qdio_out_q* FUNC_16 (struct napi_struct*) ;
 scalar_t__ FUNC_17 (struct qeth_qdio_out_q*) ;
 int FUNC_18 (struct qeth_qdio_out_q*) ;
 int FUNC_19 (struct qeth_qdio_out_q*) ;
 scalar_t__ FUNC_20 (int *) ;

__attribute__((used)) static int FUNC_21(struct napi_struct *VAR_2, int VAR_3)
{
 struct qeth_qdio_out_q *VAR_4 = FUNC_16(VAR_2);
 unsigned int VAR_5 = VAR_4->queue_no;
 struct qeth_card *VAR_6 = VAR_4->card;
 struct net_device *VAR_7 = VAR_6->dev;
 unsigned int VAR_8 = 0;
 struct netdev_queue *VAR_9;

 VAR_9 = FUNC_7(VAR_7, FUNC_14(VAR_7, VAR_5));

 while (1) {
  unsigned int VAR_10, VAR_11, VAR_12;
  unsigned int VAR_13 = 0;
  unsigned int VAR_14 = 0;
  int VAR_15;

  if (FUNC_17(VAR_4)) {
   FUNC_4(VAR_2);
   return 0;
  }


  if (VAR_8 >= VAR_0) {
   FUNC_2(VAR_4, VAR_1);
   if (FUNC_5(VAR_2, 0))
    FUNC_6(VAR_2);
   return 0;
  }

  VAR_15 = FUNC_11(FUNC_0(VAR_6), VAR_5, 0,
            &VAR_10, &VAR_11);
  if (VAR_15 <= 0) {

   if (FUNC_5(VAR_2, 0))
    FUNC_19(VAR_4);
   return 0;
  }

  for (VAR_12 = VAR_10; VAR_12 < VAR_10 + VAR_15; VAR_12++) {
   struct qeth_qdio_out_buffer *VAR_16;
   unsigned int VAR_17 = FUNC_1(VAR_12);

   VAR_16 = VAR_4->bufs[VAR_17];
   VAR_13 += FUNC_20(&VAR_16->skb_list);
   VAR_14 += VAR_16->bytes;

   FUNC_13(VAR_6, VAR_16, VAR_11);
   FUNC_15(VAR_4, VAR_17, VAR_11, VAR_3);
   FUNC_12(VAR_4, VAR_17, 0);
  }

  FUNC_8(VAR_9, VAR_13, VAR_14);
  FUNC_3(VAR_15, &VAR_4->used_buffers);
  VAR_8 += VAR_15;






  if (FUNC_9(VAR_9) &&
      !FUNC_18(VAR_4))
   FUNC_10(VAR_9);
 }
}
