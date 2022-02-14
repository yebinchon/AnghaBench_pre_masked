
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_reply {int (* callback ) (struct qeth_card*,struct qeth_reply*,unsigned long) ;void* param; } ;
struct qeth_cmd_buffer {long timeout; int rc; int lock; int done; int length; int data; int (* finalize ) (struct qeth_card*,struct qeth_cmd_buffer*) ;struct qeth_reply reply; struct qeth_channel* channel; } ;
struct qeth_channel {int irq_pending; int ccwdev; } ;
struct qeth_card {int wait_q; } ;
typedef int addr_t ;


 int FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 int FUNC_2 (struct qeth_card*,int,char*,int) ;
 int VAR_4 ;
 int FUNC_3 (int ,int,int ,int ) ;
 int FUNC_4 (int,char*,int ,int) ;
 int FUNC_5 (struct qeth_cmd_buffer*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,int ,int ,int ,int ,long) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct qeth_card*,struct qeth_cmd_buffer*) ;
 int FUNC_11 (struct qeth_card*,struct qeth_cmd_buffer*) ;
 int FUNC_12 (struct qeth_cmd_buffer*) ;
 int FUNC_13 (struct qeth_cmd_buffer*) ;
 int FUNC_14 (struct qeth_channel*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct qeth_card*,struct qeth_cmd_buffer*) ;
 long FUNC_18 (int ,int ,long) ;
 long FUNC_19 (int *,long) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int FUNC_21(struct qeth_card *VAR_5,
      struct qeth_cmd_buffer *VAR_6,
      int (*VAR_7)(struct qeth_card *VAR_8,
        struct qeth_reply *VAR_9,
        unsigned long VAR_10),
      void *VAR_11)
{
 struct qeth_channel *VAR_12 = VAR_6->channel;
 struct qeth_reply *VAR_13 = &VAR_6->reply;
 long VAR_14 = VAR_6->timeout;
 int VAR_15;

 FUNC_1(VAR_5, 2, "sendctl");

 VAR_13->callback = VAR_7;
 VAR_13->param = VAR_11;

 VAR_14 = FUNC_18(VAR_5->wait_q,
         FUNC_14(VAR_12),
         VAR_14);
 if (VAR_14 <= 0) {
  FUNC_13(VAR_6);
  return (VAR_14 == -VAR_2) ? -VAR_1 : -VAR_3;
 }

 if (VAR_6->finalize)
  VAR_6->finalize(VAR_5, VAR_6);
 FUNC_3(VAR_0, 2, VAR_6->data, FUNC_9(VAR_6->length, VAR_4));

 FUNC_11(VAR_5, VAR_6);


 FUNC_12(VAR_6);

 FUNC_1(VAR_5, 6, "noirqpnd");
 FUNC_15(FUNC_8(VAR_12->ccwdev));
 VAR_15 = FUNC_7(VAR_12->ccwdev, FUNC_5(VAR_6),
          (addr_t) VAR_6, 0, 0, VAR_14);
 FUNC_16(FUNC_8(VAR_12->ccwdev));
 if (VAR_15) {
  FUNC_4(2, "qeth_send_control_data on device %x: ccw_device_start rc = %i\n",
     FUNC_0(VAR_5), VAR_15);
  FUNC_2(VAR_5, 2, " err%d", VAR_15);
  FUNC_10(VAR_5, VAR_6);
  FUNC_13(VAR_6);
  FUNC_6(&VAR_12->irq_pending, 0);
  FUNC_20(&VAR_5->wait_q);
  goto out;
 }

 VAR_14 = FUNC_19(&VAR_6->done,
           VAR_14);
 if (VAR_14 <= 0)
  VAR_15 = (VAR_14 == -VAR_2) ? -VAR_1 : -VAR_3;

 FUNC_10(VAR_5, VAR_6);

 if (VAR_7) {

  FUNC_15(&VAR_6->lock);
  if (VAR_15)

   VAR_6->rc = VAR_15;
  FUNC_16(&VAR_6->lock);
 }

 if (!VAR_15)
  VAR_15 = VAR_6->rc;

out:
 FUNC_13(VAR_6);
 return VAR_15;
}
