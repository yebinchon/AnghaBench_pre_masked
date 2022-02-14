
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_qdio_out_buffer {int state; scalar_t__* is_header; int q; } ;
struct qeth_card {int dummy; } ;
struct qaob {unsigned long user1; unsigned long aorc; unsigned int sb_count; scalar_t__* sba; } ;
typedef enum iucv_tx_notify { ____Placeholder_iucv_tx_notify } iucv_tx_notify ;


 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (struct qeth_card*,int,char*,unsigned long) ;
 unsigned int FUNC_2 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,void*) ;
 scalar_t__ FUNC_8 (unsigned long) ;
 int FUNC_9 (struct qaob*) ;
 int FUNC_10 (unsigned long,int) ;
 int VAR_6 ;
 int FUNC_11 (int ,struct qeth_qdio_out_buffer*,int) ;

__attribute__((used)) static void FUNC_12(struct qeth_card *VAR_7,
     unsigned long VAR_8)
{
 struct qaob *VAR_9;
 struct qeth_qdio_out_buffer *VAR_10;
 enum iucv_tx_notify VAR_11;
 unsigned int VAR_12;

 VAR_9 = (struct qaob *) FUNC_8(VAR_8);
 FUNC_0(VAR_7, 5, "haob");
 FUNC_1(VAR_7, 5, "%lx", VAR_8);
 VAR_10 = (struct qeth_qdio_out_buffer *) VAR_9->user1;
 FUNC_1(VAR_7, 5, "%lx", VAR_9->user1);

 if (FUNC_4(&VAR_10->state, VAR_3,
      VAR_1) == VAR_3) {
  VAR_11 = VAR_5;
 } else {
  FUNC_3(FUNC_5(&VAR_10->state) !=
       VAR_2);
  FUNC_6(&VAR_10->state, VAR_1);
  VAR_11 = VAR_4;
 }

 if (VAR_9->aorc != 0) {
  FUNC_1(VAR_7, 2, "aorc%02X", VAR_9->aorc);
  VAR_11 = FUNC_10(VAR_9->aorc, 1);
 }
 FUNC_11(VAR_10->q, VAR_10, VAR_11);




 for (VAR_12 = 0;
      VAR_12 < VAR_9->sb_count && VAR_12 < FUNC_2(VAR_7);
      VAR_12++) {
  if (VAR_9->sba[VAR_12] && VAR_10->is_header[VAR_12])
   FUNC_7(VAR_6,
     (void *) VAR_9->sba[VAR_12]);
 }
 FUNC_6(&VAR_10->state, VAR_0);

 FUNC_9(VAR_9);
}
