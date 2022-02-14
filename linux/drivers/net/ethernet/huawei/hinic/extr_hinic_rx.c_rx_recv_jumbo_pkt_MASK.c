
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ truesize; scalar_t__ len; int data_len; struct sk_buff* next; int data; } ;
struct hinic_sge {int dummy; } ;
struct hinic_rxq {int rq; } ;
struct hinic_rq_wqe {int dummy; } ;
struct TYPE_2__ {struct sk_buff* frag_list; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct sk_buff*,unsigned int) ;
 int FUNC_1 (int ,struct hinic_rq_wqe*,int ,struct hinic_sge*) ;
 struct hinic_rq_wqe* FUNC_2 (int ,int ,struct sk_buff**,int *) ;
 int FUNC_3 (struct hinic_sge*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct hinic_rxq*,int ) ;
 TYPE_1__* FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct hinic_rxq *VAR_2, struct sk_buff *VAR_3,
        unsigned int VAR_4, u16 VAR_5)
{
 struct sk_buff *VAR_6, *VAR_7 = VAR_3;
 struct hinic_rq_wqe *VAR_8;
 unsigned int VAR_9;
 struct hinic_sge VAR_10;
 int VAR_11 = 0;

 while (VAR_4 > 0) {
  VAR_8 = FUNC_2(VAR_2->rq, VAR_0,
      &VAR_6, &VAR_5);

  VAR_11++;

  FUNC_1(VAR_2->rq, VAR_8, VAR_5, &VAR_10);

  FUNC_5(VAR_2, FUNC_3(&VAR_10));

  FUNC_4(VAR_6->data);

  VAR_9 = (VAR_4 > VAR_1) ? VAR_1 :
       VAR_4;

  VAR_4 -= VAR_9;

  FUNC_0(VAR_6, VAR_9);

  if (VAR_7 == VAR_3)
   FUNC_6(VAR_3)->frag_list = VAR_6;
  else
   VAR_7->next = VAR_6;

  VAR_3->len += VAR_6->len;
  VAR_3->data_len += VAR_6->len;
  VAR_3->truesize += VAR_6->truesize;

  VAR_7 = VAR_6;
 }

 return VAR_11;
}
