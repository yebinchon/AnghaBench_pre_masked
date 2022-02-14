
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct happy_meal_txd {int tx_flags; int tx_addr; } ;
struct happy_meal {int dma_dev; TYPE_1__* happy_block; } ;
struct TYPE_2__ {struct happy_meal_txd* happy_meal_txd; } ;


 int VAR_0 ;
 size_t FUNC_0 (size_t) ;
 size_t VAR_1 ;
 int FUNC_1 (int ,size_t,size_t,int ) ;
 int FUNC_2 (int ,size_t,size_t,int ) ;
 size_t FUNC_3 (struct happy_meal*,int *) ;

__attribute__((used)) static void FUNC_4(struct happy_meal *VAR_2, u32 VAR_3,
     u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct happy_meal_txd *VAR_7 = &VAR_2->happy_block->happy_meal_txd[0];

 FUNC_2(VAR_2->dma_dev, VAR_3, VAR_4, VAR_0);

 VAR_5 = FUNC_0(VAR_5);
 while (VAR_5 != VAR_6) {
  struct happy_meal_txd *VAR_8 = &VAR_7[VAR_5];
  u32 VAR_9, VAR_10;

  VAR_9 = FUNC_3(VAR_2, &VAR_8->tx_addr);
  VAR_10 = FUNC_3(VAR_2, &VAR_8->tx_flags);
  VAR_10 &= VAR_1;
  FUNC_1(VAR_2->dma_dev, VAR_9, VAR_10, VAR_0);
 }
}
