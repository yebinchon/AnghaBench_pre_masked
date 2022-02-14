
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int staterr; } ;
union fm10k_rx_desc {TYPE_1__ d; } ;
typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {unsigned int packets; unsigned int bytes; } ;
struct fm10k_ring {int syncp; TYPE_2__ stats; struct sk_buff* skb; int next_to_clean; } ;
struct TYPE_6__ {unsigned int total_packets; unsigned int total_bytes; } ;
struct fm10k_q_vector {TYPE_3__ rx; } ;


 scalar_t__ VAR_0 ;
 union fm10k_rx_desc* FUNC_0 (struct fm10k_ring*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct fm10k_ring*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct fm10k_ring*,union fm10k_rx_desc*,struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct fm10k_ring*) ;
 struct sk_buff* FUNC_5 (struct fm10k_ring*,union fm10k_rx_desc*,struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct fm10k_ring*,union fm10k_rx_desc*) ;
 scalar_t__ FUNC_7 (struct fm10k_ring*,union fm10k_rx_desc*,struct sk_buff*) ;
 int FUNC_8 (struct fm10k_q_vector*,struct sk_buff*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct fm10k_q_vector *VAR_1,
         struct fm10k_ring *VAR_2,
         int VAR_3)
{
 struct sk_buff *VAR_4 = VAR_2->skb;
 unsigned int VAR_5 = 0, VAR_6 = 0;
 u16 VAR_7 = FUNC_4(VAR_2);

 while (FUNC_9(VAR_6 < VAR_3)) {
  union fm10k_rx_desc *VAR_8;


  if (VAR_7 >= VAR_0) {
   FUNC_2(VAR_2, VAR_7);
   VAR_7 = 0;
  }

  VAR_8 = FUNC_0(VAR_2, VAR_2->next_to_clean);

  if (!VAR_8->d.staterr)
   break;





  FUNC_1();


  VAR_4 = FUNC_5(VAR_2, VAR_8, VAR_4);


  if (!VAR_4)
   break;

  VAR_7++;


  if (FUNC_6(VAR_2, VAR_8))
   continue;


  if (FUNC_3(VAR_2, VAR_8, VAR_4)) {
   VAR_4 = ((void*)0);
   continue;
  }


  VAR_5 += FUNC_7(VAR_2, VAR_8, VAR_4);

  FUNC_8(VAR_1, VAR_4);


  VAR_4 = ((void*)0);


  VAR_6++;
 }


 VAR_2->skb = VAR_4;

 FUNC_10(&VAR_2->syncp);
 VAR_2->stats.packets += VAR_6;
 VAR_2->stats.bytes += VAR_5;
 FUNC_11(&VAR_2->syncp);
 VAR_1->rx.total_packets += VAR_6;
 VAR_1->rx.total_bytes += VAR_5;

 return VAR_6;
}
