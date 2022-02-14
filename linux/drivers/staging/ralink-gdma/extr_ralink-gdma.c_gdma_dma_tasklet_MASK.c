
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gdma_dmaengine_chan {int id; scalar_t__ desc; } ;
struct TYPE_4__ {int dev; } ;
struct gdma_dma_dev {int chan_issued; TYPE_2__ ddev; int cnt; struct gdma_dmaengine_chan* chan; TYPE_1__* data; } ;
struct TYPE_3__ {int chancnt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct gdma_dma_dev*,struct gdma_dmaengine_chan*) ;
 scalar_t__ FUNC_4 (unsigned int,int *) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_0)
{
 struct gdma_dma_dev *VAR_1 = (struct gdma_dma_dev *)VAR_0;
 struct gdma_dmaengine_chan *VAR_2;
 static unsigned int VAR_3;
 unsigned int VAR_4, VAR_5;


 VAR_4 = VAR_3;
 VAR_5 = VAR_1->data->chancnt - 1;
 do {






  if (FUNC_1(&VAR_1->cnt) >= 2) {
   VAR_3 = VAR_4;
   break;
  }

  if (FUNC_4(VAR_4, &VAR_1->chan_issued)) {
   VAR_2 = &VAR_1->chan[VAR_4];
   if (VAR_2->desc) {
    FUNC_0(&VAR_1->cnt);
    FUNC_3(VAR_1, VAR_2);
   } else {
    FUNC_2(VAR_1->ddev.dev,
     "chan %d no desc to issue\n",
     VAR_2->id);
   }
   if (!VAR_1->chan_issued)
    break;
  }

  VAR_4 = (VAR_4 + 1) & VAR_5;
 } while (VAR_4 != VAR_3);
}
