
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct hnae_ring {int max_desc_num_per_pkt; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct hnae_ring*) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sk_buff*) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(
 struct sk_buff **VAR_4, int *VAR_5, struct hnae_ring *VAR_6)
{
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 struct sk_buff *VAR_11 = *VAR_4;
 struct sk_buff *VAR_12 = ((void*)0);
 skb_frag_t *VAR_13;

 VAR_8 = FUNC_4(VAR_11);
 VAR_9 = (VAR_8 + VAR_0 - 1) / VAR_0;

 VAR_10 = FUNC_5(VAR_11)->nr_frags;
 for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++) {
  VAR_13 = &FUNC_5(VAR_11)->frags[VAR_7];
  VAR_8 = FUNC_3(VAR_13);
  VAR_9 += (VAR_8 + VAR_0 - 1) / VAR_0;
 }

 if (FUNC_6(VAR_9 > VAR_6->max_desc_num_per_pkt)) {
  VAR_9 = (VAR_11->len + VAR_0 - 1) / VAR_0;
  if (FUNC_1(VAR_6) < VAR_9)
   return -VAR_1;

  VAR_12 = FUNC_2(VAR_11, VAR_3);
  if (!VAR_12)
   return -VAR_2;
  FUNC_0(VAR_11);
  *VAR_4 = VAR_12;

 } else if (FUNC_1(VAR_6) < VAR_9) {
  return -VAR_1;
 }

 *VAR_5 = VAR_9;
 return 0;
}
