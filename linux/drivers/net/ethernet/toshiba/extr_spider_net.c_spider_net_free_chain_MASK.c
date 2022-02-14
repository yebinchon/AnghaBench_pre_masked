
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spider_net_descr_chain {int dma_addr; int hwring; int num_desc; struct spider_net_descr* ring; } ;
struct spider_net_descr {struct spider_net_descr* next; TYPE_2__* hwdescr; scalar_t__ bus_addr; } ;
struct spider_net_card {TYPE_1__* pdev; } ;
struct TYPE_4__ {scalar_t__ next_descr_addr; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct spider_net_card *VAR_0,
        struct spider_net_descr_chain *VAR_1)
{
 struct spider_net_descr *VAR_2;

 VAR_2 = VAR_1->ring;
 do {
  VAR_2->bus_addr = 0;
  VAR_2->hwdescr->next_descr_addr = 0;
  VAR_2 = VAR_2->next;
 } while (VAR_2 != VAR_1->ring);

 FUNC_0(&VAR_0->pdev->dev, VAR_1->num_desc,
     VAR_1->hwring, VAR_1->dma_addr);
}
