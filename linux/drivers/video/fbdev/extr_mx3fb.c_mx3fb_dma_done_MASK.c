
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mx3fb_info {int flip_cmpl; } ;
struct mx3fb_data {int dev; TYPE_2__* fbi; } ;
struct TYPE_3__ {struct dma_chan* chan; } ;
struct idmac_tx_desc {TYPE_1__ txd; } ;
struct idmac_channel {int eof_irq; struct mx3fb_data* client; } ;
struct dma_chan {int dummy; } ;
struct TYPE_4__ {struct mx3fb_info* par; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ) ;
 struct idmac_channel* FUNC_3 (struct dma_chan*) ;
 struct idmac_tx_desc* FUNC_4 (void*) ;

__attribute__((used)) static void FUNC_5(void *VAR_0)
{
 struct idmac_tx_desc *VAR_1 = FUNC_4(VAR_0);
 struct dma_chan *VAR_2 = VAR_1->txd.chan;
 struct idmac_channel *VAR_3 = FUNC_3(VAR_2);
 struct mx3fb_data *VAR_4 = VAR_3->client;
 struct mx3fb_info *VAR_5 = VAR_4->fbi->par;

 FUNC_1(VAR_4->dev, "irq %d callback\n", VAR_3->eof_irq);


 FUNC_2(VAR_3->eof_irq);

 FUNC_0(&VAR_5->flip_cmpl);
}
