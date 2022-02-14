
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3_napi {int rx_rcb_mapping; int rx_rcb; } ;
struct tg3 {int irq_max; int rx_ret_ring_mask; struct tg3_napi* napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct tg3*,int ) ;
 int FUNC_1 (struct tg3*,int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_2(struct tg3 *VAR_4)
{
 int VAR_5 = 0;
 u32 VAR_6 = VAR_2;

 if (FUNC_0(VAR_4, VAR_1))
  VAR_5++;

 for (; VAR_5 < VAR_4->irq_max; VAR_5++, VAR_6 += VAR_3) {
  struct tg3_napi *VAR_7 = &VAR_4->napi[VAR_5];

  if (!VAR_7->rx_rcb)
   continue;

  FUNC_1(VAR_4, VAR_6, VAR_7->rx_rcb_mapping,
          (VAR_4->rx_ret_ring_mask + 1) <<
    VAR_0, 0);
 }
}
