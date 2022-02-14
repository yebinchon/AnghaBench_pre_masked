
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_qdio_out_q {int used_buffers; struct qeth_qdio_out_buffer** bufs; } ;
struct qeth_qdio_out_buffer {int dummy; } ;
struct TYPE_2__ {struct qeth_qdio_out_q** out_qs; } ;
struct qeth_card {struct net_device* dev; TYPE_1__ qdio; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
struct ccw_device {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (int,int *) ;
 struct netdev_queue* FUNC_2 (struct net_device*,int) ;
 scalar_t__ FUNC_3 (struct netdev_queue*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct netdev_queue*) ;
 int FUNC_6 (struct qeth_qdio_out_q*) ;
 int FUNC_7 (struct qeth_qdio_out_q*,struct qeth_qdio_out_buffer*,unsigned int,int ) ;
 int FUNC_8 (struct qeth_card*,struct qeth_qdio_out_buffer*,unsigned int) ;
 int FUNC_9 (struct qeth_qdio_out_q*) ;
 int FUNC_10 (struct qeth_card*) ;

__attribute__((used)) static void FUNC_11(struct ccw_device *VAR_2,
         unsigned int VAR_3, int VAR_4,
         int VAR_5, int VAR_6,
         unsigned long VAR_7)
{
 struct qeth_card *VAR_8 = (struct qeth_card *) VAR_7;
 struct qeth_qdio_out_q *VAR_9 = VAR_8->qdio.out_qs[VAR_4];
 struct qeth_qdio_out_buffer *VAR_10;
 struct net_device *VAR_11 = VAR_8->dev;
 struct netdev_queue *VAR_12;
 int VAR_13;

 FUNC_0(VAR_8, 6, "qdouhdl");
 if (VAR_3 & VAR_0) {
  FUNC_0(VAR_8, 2, "achkcond");
  FUNC_4(VAR_11);
  FUNC_10(VAR_8);
  return;
 }

 for (VAR_13 = VAR_5; VAR_13 < (VAR_5 + VAR_6); ++VAR_13) {
  int VAR_14 = VAR_13 % VAR_1;
  VAR_10 = VAR_9->bufs[VAR_14];
  FUNC_8(VAR_8, VAR_10, VAR_3);
  FUNC_7(VAR_9, VAR_10, VAR_3, 0);
 }

 FUNC_1(VAR_6, &VAR_9->used_buffers);
 FUNC_6(VAR_9);

 VAR_12 = FUNC_2(VAR_11, VAR_4);




 if (FUNC_3(VAR_12) && !FUNC_9(VAR_9))
  FUNC_5(VAR_12);
}
