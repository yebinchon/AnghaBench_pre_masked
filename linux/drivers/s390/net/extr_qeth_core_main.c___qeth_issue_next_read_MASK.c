
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_cmd_buffer {int callback; int data; int length; struct qeth_channel* channel; } ;
struct qeth_channel {scalar_t__ state; int irq_pending; int ccwdev; } ;
struct qeth_card {int read_or_write_problem; int wait_q; struct qeth_cmd_buffer* read_cmd; } ;
struct ccw1 {int dummy; } ;
typedef int addr_t ;


 int FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 int FUNC_2 (int,char*,int,int ) ;
 struct ccw1* FUNC_3 (struct qeth_cmd_buffer*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,struct ccw1*,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct qeth_cmd_buffer*) ;
 int VAR_3 ;
 int FUNC_8 (struct qeth_cmd_buffer*) ;
 int FUNC_9 (struct qeth_card*) ;
 int FUNC_10 (struct ccw1*,int ,int ,int ,int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct qeth_card *VAR_4)
{
 struct qeth_cmd_buffer *VAR_5 = VAR_4->read_cmd;
 struct qeth_channel *VAR_6 = VAR_5->channel;
 struct ccw1 *VAR_7 = FUNC_3(VAR_5);
 int VAR_8;

 FUNC_1(VAR_4, 5, "issnxrd");
 if (VAR_6->state != VAR_1)
  return -VAR_2;

 FUNC_6(VAR_5->data, 0, VAR_5->length);
 FUNC_10(VAR_7, VAR_0, 0, VAR_5->length, VAR_5->data);
 VAR_5->callback = VAR_3;

 FUNC_7(VAR_5);

 FUNC_1(VAR_4, 6, "noirqpnd");
 VAR_8 = FUNC_5(VAR_6->ccwdev, VAR_7, (addr_t) VAR_5, 0, 0);
 if (VAR_8) {
  FUNC_2(2, "error %i on device %x when starting next read ccw!\n",
     VAR_8, FUNC_0(VAR_4));
  FUNC_4(&VAR_6->irq_pending, 0);
  FUNC_8(VAR_5);
  VAR_4->read_or_write_problem = 1;
  FUNC_9(VAR_4);
  FUNC_11(&VAR_4->wait_q);
 }
 return VAR_8;
}
