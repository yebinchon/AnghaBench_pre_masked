
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct TYPE_2__ {int pktsz; int va; int wptr; int memsz; int reg_WPTR; } ;
struct rxf_fifo {TYPE_1__ m; } ;
struct rxf_desc {int va_lo; void* len; void* pa_hi; void* pa_lo; void* info; } ;
struct rxdb {int dummy; } ;
struct rx_map {int dma; struct sk_buff* skb; } ;
struct bdx_priv {int pdev; int ndev; struct rxdb* rxdb; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 () ;
 int VAR_3 ;
 int FUNC_5 (struct bdx_priv*,int ,int) ;
 struct rx_map* FUNC_6 (struct rxdb*,int) ;
 int FUNC_7 (struct rxdb*) ;
 int FUNC_8 (struct rxdb*) ;
 int FUNC_9 (int,int,int) ;
 struct sk_buff* FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int ,int,int ) ;
 int FUNC_12 (struct rxf_desc*) ;
 int FUNC_13 (struct sk_buff*,int) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static void FUNC_15(struct bdx_priv *VAR_4, struct rxf_fifo *VAR_5)
{
 struct sk_buff *VAR_6;
 struct rxf_desc *VAR_7;
 struct rx_map *VAR_8;
 int VAR_9, VAR_10, VAR_11;
 struct rxdb *VAR_12 = VAR_4->rxdb;

 VAR_0;
 VAR_9 = FUNC_8(VAR_12) - 1;
 while (VAR_9 > 0) {
  VAR_6 = FUNC_10(VAR_4->ndev, VAR_5->m.pktsz + VAR_1);
  if (!VAR_6)
   break;

  FUNC_13(VAR_6, VAR_1);

  VAR_11 = FUNC_7(VAR_12);
  VAR_8 = FUNC_6(VAR_12, VAR_11);
  VAR_8->dma = FUNC_11(VAR_4->pdev,
      VAR_6->data, VAR_5->m.pktsz,
      VAR_2);
  VAR_8->skb = VAR_6;
  VAR_7 = (struct rxf_desc *)(VAR_5->m.va + VAR_5->m.wptr);
  VAR_7->info = FUNC_0(0x10003);
  VAR_7->va_lo = VAR_11;
  VAR_7->pa_lo = FUNC_0(FUNC_3(VAR_8->dma));
  VAR_7->pa_hi = FUNC_0(FUNC_2(VAR_8->dma));
  VAR_7->len = FUNC_0(VAR_5->m.pktsz);
  FUNC_12(VAR_7);

  VAR_5->m.wptr += sizeof(struct rxf_desc);
  VAR_10 = VAR_5->m.wptr - VAR_5->m.memsz;
  if (FUNC_14(VAR_10 >= 0)) {
   VAR_5->m.wptr = VAR_10;
   if (VAR_10 > 0) {
    FUNC_9(VAR_5->m.va, VAR_5->m.va + VAR_5->m.memsz, VAR_10);
    FUNC_1("wrapped descriptor\n");
   }
  }
  VAR_9--;
 }

 FUNC_5(VAR_4, VAR_5->m.reg_WPTR, VAR_5->m.wptr & VAR_3);
 FUNC_4();
}
