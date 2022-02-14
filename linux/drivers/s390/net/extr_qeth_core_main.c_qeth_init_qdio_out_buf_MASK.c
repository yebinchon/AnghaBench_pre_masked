
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_qdio_out_q {struct qeth_qdio_out_buffer** bufs; int * qdio_bufs; } ;
struct TYPE_2__ {int lock; } ;
struct qeth_qdio_out_buffer {int state; struct qeth_qdio_out_buffer* next_pending; struct qeth_qdio_out_q* q; TYPE_1__ skb_list; int buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 struct qeth_qdio_out_buffer* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct qeth_qdio_out_q *VAR_5, int VAR_6)
{
 struct qeth_qdio_out_buffer *VAR_7;

 VAR_7 = FUNC_1(VAR_4, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->buffer = VAR_5->qdio_bufs[VAR_6];
 FUNC_3(&VAR_7->skb_list);
 FUNC_2(&VAR_7->skb_list.lock, &VAR_3);
 VAR_7->q = VAR_5;
 VAR_7->next_pending = VAR_5->bufs[VAR_6];
 FUNC_0(&VAR_7->state, VAR_2);
 VAR_5->bufs[VAR_6] = VAR_7;
 return 0;
}
