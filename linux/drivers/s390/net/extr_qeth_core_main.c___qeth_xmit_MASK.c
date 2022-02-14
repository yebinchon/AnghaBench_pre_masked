
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct qeth_qdio_out_q {size_t bulk_start; unsigned int max_elements; struct qeth_hdr* prev_hdr; int used_buffers; struct qeth_qdio_out_buffer** bufs; } ;
struct qeth_qdio_out_buffer {unsigned int next_element_to_fill; unsigned int bytes; int state; } ;
struct qeth_hdr {int dummy; } ;
struct qeth_card {int dev; } ;
struct netdev_queue {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qeth_qdio_out_q*,int) ;
 int FUNC_1 (struct netdev_queue*,unsigned int,int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 struct netdev_queue* FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (struct netdev_queue*) ;
 int FUNC_8 (struct netdev_queue*) ;
 unsigned int FUNC_9 (struct sk_buff*) ;
 unsigned int FUNC_10 (struct qeth_qdio_out_buffer*,struct sk_buff*,struct qeth_hdr*,unsigned int,unsigned int) ;
 int FUNC_11 (struct qeth_qdio_out_q*) ;
 int FUNC_12 (struct qeth_qdio_out_q*,struct qeth_qdio_out_buffer*,struct sk_buff*,struct qeth_hdr*) ;
 int FUNC_13 (struct qeth_qdio_out_q*) ;
 int FUNC_14 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_15(struct qeth_card *VAR_4, struct qeth_qdio_out_q *VAR_5,
         struct sk_buff *VAR_6, unsigned int VAR_7,
         struct qeth_hdr *VAR_8, unsigned int VAR_9,
         unsigned int VAR_10)
{
 struct qeth_qdio_out_buffer *VAR_11 = VAR_5->bufs[VAR_5->bulk_start];
 unsigned int VAR_12 = FUNC_9(VAR_6);
 unsigned int VAR_13;
 struct netdev_queue *VAR_14;
 bool VAR_15 = 0;
 bool VAR_16;

 VAR_14 = FUNC_5(VAR_4->dev, FUNC_14(VAR_6));




 if (FUNC_3(&VAR_11->state) != VAR_2)
  return -VAR_0;

 if ((VAR_11->next_element_to_fill + VAR_7 > VAR_5->max_elements) ||
     !FUNC_12(VAR_5, VAR_11, VAR_6, VAR_8)) {
  FUNC_4(&VAR_11->state, VAR_3);
  FUNC_11(VAR_5);
  VAR_11 = VAR_5->bufs[VAR_5->bulk_start];


  if (FUNC_3(&VAR_11->state) != VAR_2)
   return -VAR_0;
 }

 if (VAR_11->next_element_to_fill == 0 &&
     FUNC_2(&VAR_5->used_buffers) >= VAR_1) {



  FUNC_0(VAR_5, VAR_15);
  FUNC_8(VAR_14);
  VAR_15 = 1;
 }

 VAR_13 = FUNC_10(VAR_11, VAR_6, VAR_8, VAR_9, VAR_10);
 VAR_11->bytes += VAR_12;
 VAR_5->prev_hdr = VAR_8;

 VAR_16 = FUNC_1(VAR_14, VAR_12,
           !VAR_15 && FUNC_6());

 if (VAR_16 || VAR_13 >= VAR_5->max_elements) {
  FUNC_4(&VAR_11->state, VAR_3);
  FUNC_11(VAR_5);
 }

 if (VAR_15 && !FUNC_13(VAR_5))
  FUNC_7(VAR_14);
 return 0;
}
