
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qeth_qdio_q {int next_buf_to_init; struct qdio_buffer** qdio_bufs; } ;
struct TYPE_6__ {struct qeth_qdio_q* c_q; } ;
struct qeth_card {TYPE_3__ qdio; TYPE_2__* gdev; int dev; } ;
struct qdio_buffer {TYPE_1__* element; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {scalar_t__ addr; } ;


 int FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 int FUNC_2 (struct qeth_card*,int,char*,unsigned int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int ,int ,unsigned int,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct qeth_card*,unsigned int) ;
 int FUNC_7 (struct qeth_card*,unsigned long) ;
 int FUNC_8 (struct qeth_card*) ;
 int FUNC_9 (struct qdio_buffer*,int) ;

__attribute__((used)) static void FUNC_10(struct qeth_card *VAR_3, unsigned int VAR_4,
     unsigned int VAR_5, int VAR_6,
     int VAR_7)
{
 struct qeth_qdio_q *VAR_8 = VAR_3->qdio.c_q;
 int VAR_9;
 int VAR_10;

 if (!FUNC_6(VAR_3, VAR_5))
  return;

 FUNC_2(VAR_3, 5, "qcqhe%d", VAR_6);
 FUNC_2(VAR_3, 5, "qcqhc%d", VAR_7);
 FUNC_2(VAR_3, 5, "qcqherr%d", VAR_4);

 if (VAR_4) {
  FUNC_5(VAR_3->dev);
  FUNC_8(VAR_3);
  return;
 }

 for (VAR_9 = VAR_6; VAR_9 < VAR_6 + VAR_7; ++VAR_9) {
  int VAR_11 = VAR_9 % VAR_1;
  struct qdio_buffer *VAR_12 = VAR_8->qdio_bufs[VAR_11];
  int VAR_13 = 0;

  while ((VAR_13 < VAR_2) &&
         VAR_12->element[VAR_13].addr) {
   unsigned long VAR_14;

   VAR_14 = (unsigned long) VAR_12->element[VAR_13].addr;
   FUNC_7(VAR_3, VAR_14);
   ++VAR_13;
  }
  FUNC_9(VAR_12, VAR_2);
 }
 VAR_10 = FUNC_4(FUNC_0(VAR_3), VAR_0, VAR_5,
      VAR_3->qdio.c_q->next_buf_to_init,
      VAR_7);
 if (VAR_10) {
  FUNC_3(&VAR_3->gdev->dev,
   "QDIO reported an error, rc=%i\n", VAR_10);
  FUNC_1(VAR_3, 2, "qcqherr");
 }
 VAR_3->qdio.c_q->next_buf_to_init = (VAR_3->qdio.c_q->next_buf_to_init
       + VAR_7) % VAR_1;
}
