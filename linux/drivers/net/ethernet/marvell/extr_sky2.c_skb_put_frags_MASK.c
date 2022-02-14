
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {unsigned int tail; unsigned int len; unsigned int data_len; int truesize; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (int *,unsigned int) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_1, unsigned int VAR_2,
     unsigned int VAR_3)
{
 int VAR_4, VAR_5;
 unsigned int VAR_6;


 VAR_6 = FUNC_1(VAR_3, VAR_2);
 VAR_1->tail += VAR_6;
 VAR_1->len += VAR_6;
 VAR_3 -= VAR_6;

 VAR_5 = FUNC_3(VAR_1)->nr_frags;
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  skb_frag_t *VAR_7 = &FUNC_3(VAR_1)->frags[VAR_4];

  if (VAR_3 == 0) {

   FUNC_0(VAR_7);
   --FUNC_3(VAR_1)->nr_frags;
  } else {
   VAR_6 = FUNC_1(VAR_3, (unsigned) VAR_0);

   FUNC_2(VAR_7, VAR_6);
   VAR_1->data_len += VAR_6;
   VAR_1->truesize += VAR_0;
   VAR_1->len += VAR_6;
   VAR_3 -= VAR_6;
  }
 }
}
