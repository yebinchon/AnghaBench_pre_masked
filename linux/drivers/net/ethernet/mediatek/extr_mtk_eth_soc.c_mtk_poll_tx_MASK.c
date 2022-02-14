
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_tx_ring {scalar_t__ thresh; int free_count; } ;
struct mtk_eth {int * netdev; TYPE_1__* soc; struct mtk_tx_ring tx_ring; } ;
typedef int done ;
typedef int bytes ;
struct TYPE_2__ {int caps; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (unsigned int*,int ,int) ;
 int FUNC_3 (struct mtk_eth*,int,unsigned int*,unsigned int*) ;
 int FUNC_4 (struct mtk_eth*,int,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_5 (struct mtk_eth*) ;
 int FUNC_6 (struct mtk_eth*) ;
 int FUNC_7 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct mtk_eth *VAR_3, int VAR_4)
{
 struct mtk_tx_ring *VAR_5 = &VAR_3->tx_ring;
 unsigned int VAR_6[VAR_1];
 unsigned int VAR_7[VAR_1];
 int VAR_8 = 0, VAR_9;

 FUNC_2(VAR_6, 0, sizeof(VAR_6));
 FUNC_2(VAR_7, 0, sizeof(VAR_7));

 if (FUNC_0(VAR_3->soc->caps, VAR_2))
  VAR_4 = FUNC_4(VAR_3, VAR_4, VAR_6, VAR_7);
 else
  VAR_4 = FUNC_3(VAR_3, VAR_4, VAR_6, VAR_7);

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  if (!VAR_3->netdev[VAR_9] || !VAR_6[VAR_9])
   continue;
  FUNC_7(VAR_3->netdev[VAR_9], VAR_6[VAR_9], VAR_7[VAR_9]);
  VAR_8 += VAR_6[VAR_9];
 }

 if (FUNC_5(VAR_3) &&
     (FUNC_1(&VAR_5->free_count) > VAR_5->thresh))
  FUNC_6(VAR_3);

 return VAR_8;
}
