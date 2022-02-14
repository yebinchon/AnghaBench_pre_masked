
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct qeth_qdio_out_q {int next_buf_to_fill; scalar_t__ max_elements; int set_pci_flags_count; int state; scalar_t__ do_pack; int used_buffers; struct qeth_qdio_out_buffer** bufs; } ;
struct qeth_qdio_out_buffer {scalar_t__ next_element_to_fill; int state; } ;
struct qeth_hdr {int dummy; } ;
struct qeth_card {int dev; } ;
struct netdev_queue {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct qeth_qdio_out_q*,int ,int) ;
 int FUNC_1 (struct qeth_qdio_out_q*,int) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *,int ) ;
 int VAR_7 ;
 struct netdev_queue* FUNC_8 (int ,int ) ;
 int FUNC_9 (struct netdev_queue*) ;
 int FUNC_10 (struct netdev_queue*) ;
 unsigned int FUNC_11 (struct qeth_qdio_out_buffer*,struct sk_buff*,struct qeth_hdr*,unsigned int,unsigned int) ;
 int FUNC_12 (struct qeth_qdio_out_q*,int,int) ;
 int FUNC_13 (struct qeth_qdio_out_q*) ;
 int FUNC_14 (struct qeth_qdio_out_q*) ;
 int FUNC_15 (struct qeth_qdio_out_q*) ;
 int FUNC_16 (struct qeth_qdio_out_q*) ;
 int FUNC_17 (struct sk_buff*) ;
 int VAR_8 ;

int FUNC_18(struct qeth_card *VAR_9, struct qeth_qdio_out_q *VAR_10,
   struct sk_buff *VAR_11, struct qeth_hdr *VAR_12,
   unsigned int VAR_13, unsigned int VAR_14,
   int VAR_15)
{
 struct qeth_qdio_out_buffer *VAR_16;
 unsigned int VAR_17;
 struct netdev_queue *VAR_18;
 bool VAR_19 = 0;
 int VAR_20;
 int VAR_21 = 0;
 int VAR_22 = 0;
 int VAR_23;
 int VAR_24 = 0;


 while (FUNC_2(&VAR_10->state, VAR_4,
         VAR_2) != VAR_4);
 VAR_20 = VAR_10->next_buf_to_fill;
 VAR_16 = VAR_10->bufs[VAR_10->next_buf_to_fill];




 if (FUNC_5(&VAR_16->state) != VAR_5) {
  FUNC_6(&VAR_10->state, VAR_4);
  return -VAR_0;
 }

 VAR_18 = FUNC_8(VAR_9->dev, FUNC_17(VAR_11));


 FUNC_16(VAR_10);
 if (VAR_10->do_pack) {
  VAR_22 = 1;

  if (VAR_16->next_element_to_fill + VAR_15 >
      VAR_10->max_elements) {

   FUNC_6(&VAR_16->state, VAR_6);
   VAR_21++;
   VAR_10->next_buf_to_fill =
    (VAR_10->next_buf_to_fill + 1) %
    VAR_1;
   VAR_16 = VAR_10->bufs[VAR_10->next_buf_to_fill];


   if (FUNC_5(&VAR_16->state) !=
       VAR_5) {
    FUNC_12(VAR_10, VAR_20,
          VAR_21);
    FUNC_6(&VAR_10->state,
      VAR_4);
    VAR_24 = -VAR_0;
    goto out;
   }
  }
 }

 if (VAR_16->next_element_to_fill == 0 &&
     FUNC_4(&VAR_10->used_buffers) >= VAR_1) {



  FUNC_1(VAR_10, VAR_19);
  FUNC_10(VAR_18);
  VAR_19 = 1;
 }

 VAR_17 = FUNC_11(VAR_16, VAR_11, VAR_12, VAR_13, VAR_14);

 if (VAR_10->do_pack)
  FUNC_1(VAR_10, VAR_8);
 if (!VAR_10->do_pack || VAR_19 || VAR_17 >= VAR_10->max_elements) {
  VAR_21++;
  FUNC_6(&VAR_16->state, VAR_6);
  VAR_10->next_buf_to_fill = (VAR_10->next_buf_to_fill + 1) %
       VAR_1;
 }

 if (VAR_21)
  FUNC_12(VAR_10, VAR_20, VAR_21);
 else if (!FUNC_5(&VAR_10->set_pci_flags_count))
  FUNC_7(&VAR_10->state, VAR_3);






 while (FUNC_3(&VAR_10->state)) {
  VAR_20 = VAR_10->next_buf_to_fill;

  VAR_23 = FUNC_15(VAR_10);




  if (!VAR_23 && !FUNC_5(&VAR_10->set_pci_flags_count))
   VAR_23 = FUNC_14(VAR_10);
  if (VAR_23) {
   FUNC_12(VAR_10, VAR_20, VAR_23);
   VAR_21 += VAR_23;
  }
 }
out:

 if (VAR_22)
  FUNC_0(VAR_10, VAR_7, VAR_21);

 if (VAR_19 && !FUNC_13(VAR_10))
  FUNC_9(VAR_18);
 return VAR_24;
}
