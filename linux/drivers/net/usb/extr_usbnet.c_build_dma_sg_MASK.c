
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {unsigned int num_sgs; unsigned int transfer_buffer_length; int * sg; } ;
struct sk_buff {int data; } ;
struct scatterlist {int dummy; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (unsigned int,int,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 int FUNC_3 (int *,int ,scalar_t__,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct sk_buff const*) ;
 TYPE_1__* FUNC_8 (struct sk_buff const*) ;

__attribute__((used)) static int FUNC_9(const struct sk_buff *VAR_2, struct urb *VAR_3)
{
 unsigned VAR_4, VAR_5 = 0;
 int VAR_6, VAR_7 = 0;

 VAR_4 = FUNC_8(VAR_2)->nr_frags + 1;
 if (VAR_4 == 1)
  return 0;


 VAR_3->sg = FUNC_0(VAR_4 + 1, sizeof(struct scatterlist),
    VAR_1);
 if (!VAR_3->sg)
  return -VAR_0;

 VAR_3->num_sgs = VAR_4;
 FUNC_1(VAR_3->sg, VAR_3->num_sgs + 1);

 FUNC_2(&VAR_3->sg[VAR_7++], VAR_2->data, FUNC_7(VAR_2));
 VAR_5 += FUNC_7(VAR_2);

 for (VAR_6 = 0; VAR_6 < FUNC_8(VAR_2)->nr_frags; VAR_6++) {
  skb_frag_t *VAR_8 = &FUNC_8(VAR_2)->frags[VAR_6];

  VAR_5 += FUNC_6(VAR_8);
  FUNC_3(&VAR_3->sg[VAR_6 + VAR_7], FUNC_5(VAR_8), FUNC_6(VAR_8),
       FUNC_4(VAR_8));
 }
 VAR_3->transfer_buffer_length = VAR_5;

 return 1;
}
