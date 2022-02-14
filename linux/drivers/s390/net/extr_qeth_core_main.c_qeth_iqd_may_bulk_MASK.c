
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct qeth_qdio_out_q {struct qeth_hdr* prev_hdr; } ;
struct qeth_qdio_out_buffer {int skb_list; } ;
struct TYPE_6__ {scalar_t__ id; } ;
struct TYPE_5__ {int l3; TYPE_2__ l2; } ;
struct qeth_hdr {TYPE_1__ hdr; } ;
struct TYPE_7__ {int h_dest; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 struct sk_buff* FUNC_5 (int *) ;

__attribute__((used)) static bool FUNC_6(struct qeth_qdio_out_q *VAR_1,
         struct qeth_qdio_out_buffer *VAR_2,
         struct sk_buff *VAR_3,
         struct qeth_hdr *VAR_4)
{
 struct qeth_hdr *VAR_5 = VAR_1->prev_hdr;

 if (!VAR_5)
  return 1;


 if (VAR_4->hdr.l2.id == VAR_0) {
  struct sk_buff *VAR_6 = FUNC_5(&VAR_2->skb_list);

  return FUNC_1(FUNC_0(VAR_6)->h_dest,
     FUNC_0(VAR_3)->h_dest) &&
         FUNC_2(&VAR_5->hdr.l2, &VAR_4->hdr.l2);
 }

 return FUNC_4(&VAR_5->hdr.l3, &VAR_4->hdr.l3) &&
        FUNC_3(&VAR_5->hdr.l3, &VAR_4->hdr.l3);
}
