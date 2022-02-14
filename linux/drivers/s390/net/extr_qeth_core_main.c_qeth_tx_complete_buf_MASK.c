
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ ip_summed; } ;
struct qeth_qdio_out_q {int dummy; } ;
struct qeth_qdio_out_buffer {scalar_t__ next_element_to_fill; int skb_list; int state; struct qeth_qdio_out_q* q; } ;
struct TYPE_2__ {int gso_segs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct qeth_qdio_out_q*,int ,unsigned int) ;
 int FUNC_1 (struct qeth_qdio_out_q*,int ) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 struct sk_buff* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct sk_buff*,int) ;
 unsigned int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct qeth_qdio_out_q*,struct qeth_qdio_out_buffer*,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;
 TYPE_1__* FUNC_10 (struct sk_buff*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_11(struct qeth_qdio_out_buffer *VAR_13, bool VAR_14,
     int VAR_15)
{
 struct qeth_qdio_out_q *VAR_16 = VAR_13->q;
 struct sk_buff *VAR_17;


 FUNC_2(FUNC_4(&VAR_13->state) == VAR_1);

 if (FUNC_4(&VAR_13->state) == VAR_2)
  FUNC_7(VAR_16, VAR_13, VAR_3);


 if (VAR_13->next_element_to_fill == 0)
  return;

 FUNC_1(VAR_16, VAR_5);
 FUNC_0(VAR_16, VAR_4, VAR_13->next_element_to_fill);
 while ((VAR_17 = FUNC_3(&VAR_13->skb_list)) != ((void*)0)) {
  unsigned int VAR_18 = FUNC_6(VAR_17);
  bool VAR_19 = FUNC_8(VAR_17);
  unsigned int VAR_20;

  VAR_20 = VAR_19 ? FUNC_10(VAR_17)->gso_segs : 1;
  if (VAR_14) {
   FUNC_0(VAR_16, VAR_11, VAR_20);
  } else {
   FUNC_0(VAR_16, VAR_12, VAR_20);
   FUNC_0(VAR_16, VAR_10, VAR_18);
   if (VAR_17->ip_summed == VAR_0)
    FUNC_0(VAR_16, VAR_6, VAR_20);
   if (FUNC_9(VAR_17))
    FUNC_1(VAR_16, VAR_7);
   if (VAR_19) {
    FUNC_1(VAR_16, VAR_8);
    FUNC_0(VAR_16, VAR_9, VAR_18);
   }
  }

  FUNC_5(VAR_17, VAR_15);
 }
}
