
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ulptx_sge_pair {void** addr; void** len; } ;
typedef struct ulptx_sge_pair u8 ;
typedef scalar_t__ u64 ;
struct ulptx_sgl {struct ulptx_sge_pair* sge; void* cmd_nsge; void* addr0; void* len0; } ;
struct skb_shared_info {unsigned int nr_frags; int * frags; } ;
struct sk_buff {int dummy; } ;
struct sge_txq {struct ulptx_sge_pair* desc; scalar_t__ stat; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 void* FUNC_2 (unsigned int) ;
 void* FUNC_3 (scalar_t__ const) ;
 void* FUNC_4 (unsigned int) ;
 scalar_t__ FUNC_5 (unsigned int) ;
 int FUNC_6 (struct ulptx_sge_pair*,struct ulptx_sge_pair*,unsigned int) ;
 unsigned int FUNC_7 (int *) ;
 unsigned int FUNC_8 (struct sk_buff const*) ;
 struct skb_shared_info* FUNC_9 (struct sk_buff const*) ;
 scalar_t__ FUNC_10 (int) ;

void FUNC_11(const struct sk_buff *VAR_2, struct sge_txq *VAR_3,
       struct ulptx_sgl *VAR_4, u64 *VAR_5, unsigned int VAR_6,
       const dma_addr_t *VAR_7)
{
 unsigned int VAR_8, VAR_9;
 struct ulptx_sge_pair *VAR_10;
 const struct skb_shared_info *VAR_11 = FUNC_9(VAR_2);
 unsigned int VAR_12 = VAR_11->nr_frags;
 struct ulptx_sge_pair VAR_13[VAR_0 / 2 + 1];

 VAR_9 = FUNC_8(VAR_2) - VAR_6;
 if (FUNC_5(VAR_9)) {
  VAR_4->len0 = FUNC_4(VAR_9);
  VAR_4->addr0 = FUNC_3(VAR_7[0] + VAR_6);
  VAR_12++;
 } else {
  VAR_4->len0 = FUNC_4(FUNC_7(&VAR_11->frags[0]));
  VAR_4->addr0 = FUNC_3(VAR_7[1]);
 }

 VAR_4->cmd_nsge = FUNC_4(FUNC_0(VAR_1) |
         FUNC_1(VAR_12));
 if (FUNC_5(--VAR_12 == 0))
  return;





 VAR_10 = (u8 *)VAR_5 > (u8 *)VAR_3->stat ? VAR_13 : VAR_4->sge;

 for (VAR_8 = (VAR_12 != VAR_11->nr_frags); VAR_12 >= 2; VAR_12 -= 2, VAR_10++) {
  VAR_10->len[0] = FUNC_2(FUNC_7(&VAR_11->frags[VAR_8]));
  VAR_10->len[1] = FUNC_2(FUNC_7(&VAR_11->frags[++VAR_8]));
  VAR_10->addr[0] = FUNC_3(VAR_7[VAR_8]);
  VAR_10->addr[1] = FUNC_3(VAR_7[++VAR_8]);
 }
 if (VAR_12) {
  VAR_10->len[0] = FUNC_2(FUNC_7(&VAR_11->frags[VAR_8]));
  VAR_10->len[1] = FUNC_2(0);
  VAR_10->addr[0] = FUNC_3(VAR_7[VAR_8 + 1]);
 }
 if (FUNC_10((u8 *)VAR_5 > (u8 *)VAR_3->stat)) {
  unsigned int VAR_14 = (u8 *)VAR_3->stat - (u8 *)VAR_4->sge, VAR_15;

  if (FUNC_5(VAR_14))
   FUNC_6(VAR_4->sge, VAR_13, VAR_14);
  VAR_15 = (u8 *)VAR_5 - (u8 *)VAR_3->stat;
  FUNC_6(VAR_3->desc, (u8 *)VAR_13 + VAR_14, VAR_15);
  VAR_5 = (void *)VAR_3->desc + VAR_15;
 }
 if ((uintptr_t)VAR_5 & 8)
  *VAR_5 = 0;
}
