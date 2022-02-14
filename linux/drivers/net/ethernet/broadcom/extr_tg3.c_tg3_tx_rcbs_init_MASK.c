
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3_napi {int tx_desc_mapping; int tx_ring; } ;
struct tg3 {int irq_max; struct tg3_napi* napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct tg3*,int ) ;
 int FUNC_1 (struct tg3*,int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_2(struct tg3 *VAR_6)
{
 int VAR_7 = 0;
 u32 VAR_8 = VAR_2;

 if (FUNC_0(VAR_6, VAR_1))
  VAR_7++;

 for (; VAR_7 < VAR_6->irq_max; VAR_7++, VAR_8 += VAR_4) {
  struct tg3_napi *VAR_9 = &VAR_6->napi[VAR_7];

  if (!VAR_9->tx_ring)
   continue;

  FUNC_1(VAR_6, VAR_8, VAR_9->tx_desc_mapping,
          (VAR_5 << VAR_0),
          VAR_3);
 }
}
