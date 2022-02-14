
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tg3_rx_prodring_set {scalar_t__ rx_std_prod_idx; scalar_t__ rx_jmb_prod_idx; } ;
struct tg3_napi {scalar_t__ tx_cons; scalar_t__* rx_rcb_prod_idx; scalar_t__ rx_rcb_ptr; struct tg3_rx_prodring_set prodring; TYPE_2__* hw_status; struct tg3* tp; } ;
struct tg3 {int rx_refill; int rxq_cnt; int coal_now; struct tg3_napi* napi; } ;
struct TYPE_4__ {TYPE_1__* idx; } ;
struct TYPE_3__ {scalar_t__ tx_consumer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct tg3*,int ) ;
 scalar_t__ FUNC_1 (struct tg3_napi*,int) ;
 int FUNC_2 (struct tg3*,struct tg3_rx_prodring_set*,struct tg3_rx_prodring_set*) ;
 int FUNC_3 (struct tg3_napi*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct tg3_napi *VAR_5, int VAR_6, int VAR_7)
{
 struct tg3 *VAR_8 = VAR_5->tp;


 if (VAR_5->hw_status->idx[0].tx_consumer != VAR_5->tx_cons) {
  FUNC_3(VAR_5);
  if (FUNC_6(FUNC_0(VAR_8, VAR_4)))
   return VAR_6;
 }

 if (!VAR_5->rx_rcb_prod_idx)
  return VAR_6;





 if (*(VAR_5->rx_rcb_prod_idx) != VAR_5->rx_rcb_ptr)
  VAR_6 += FUNC_1(VAR_5, VAR_7 - VAR_6);

 if (FUNC_0(VAR_8, VAR_0) && VAR_5 == &VAR_8->napi[1]) {
  struct tg3_rx_prodring_set *VAR_9 = &VAR_8->napi[0].prodring;
  int VAR_10, VAR_11 = 0;
  u32 VAR_12 = VAR_9->rx_std_prod_idx;
  u32 VAR_13 = VAR_9->rx_jmb_prod_idx;

  VAR_8->rx_refill = 0;
  for (VAR_10 = 1; VAR_10 <= VAR_8->rxq_cnt; VAR_10++)
   VAR_11 |= FUNC_2(VAR_8, VAR_9,
          &VAR_8->napi[VAR_10].prodring);

  FUNC_7();

  if (VAR_12 != VAR_9->rx_std_prod_idx)
   FUNC_5(VAR_3,
         VAR_9->rx_std_prod_idx);

  if (VAR_13 != VAR_9->rx_jmb_prod_idx)
   FUNC_5(VAR_2,
         VAR_9->rx_jmb_prod_idx);

  if (VAR_11)
   FUNC_4(VAR_1, VAR_8->coal_now);
 }

 return VAR_6;
}
