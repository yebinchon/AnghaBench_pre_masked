
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct sg_ent {void** len; void** addr; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {unsigned int nr_frags; int * frags; } ;


 void* FUNC_0 (unsigned int) ;
 void* FUNC_1 (int const) ;
 unsigned int FUNC_2 (int const*) ;
 TYPE_1__* FUNC_3 (struct sk_buff const*) ;

__attribute__((used)) static inline unsigned int FUNC_4(const struct sk_buff *VAR_0,
         struct sg_ent *VAR_1, unsigned char *VAR_2,
         unsigned int VAR_3, const dma_addr_t *VAR_4)
{
 unsigned int VAR_5, VAR_6 = 0, VAR_7 = 0, VAR_8;

 if (VAR_3) {
  VAR_1->len[0] = FUNC_0(VAR_3);
  VAR_1->addr[VAR_6++] = FUNC_1(VAR_4[VAR_7++]);
 }

 VAR_8 = FUNC_3(VAR_0)->nr_frags;
 for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++) {
  const skb_frag_t *VAR_9 = &FUNC_3(VAR_0)->frags[VAR_5];

  VAR_1->len[VAR_6] = FUNC_0(FUNC_2(VAR_9));
  VAR_1->addr[VAR_6] = FUNC_1(VAR_4[VAR_7++]);
  VAR_6 ^= 1;
  if (VAR_6 == 0)
   ++VAR_1;
 }
 if (VAR_6)
  VAR_1->len[VAR_6] = 0;
 return ((VAR_8 + (VAR_3 != 0)) * 3) / 2 + VAR_6;
}
