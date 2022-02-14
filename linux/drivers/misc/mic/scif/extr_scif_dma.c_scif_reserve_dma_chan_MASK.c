
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scif_hw_dev {int num_dma_ch; struct dma_chan** dma_ch; } ;
struct TYPE_3__ {int rma_lock; struct dma_chan* dma_chan; } ;
struct scif_endpt {TYPE_1__ rma_info; struct scif_dev* remote_dev; } ;
struct scif_dev {size_t dma_ch_idx; struct scif_hw_dev* sdev; } ;
struct dma_chan {int dummy; } ;
struct TYPE_4__ {scalar_t__ nodeid; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct scif_dev* VAR_1 ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_2 (struct scif_dev*) ;

int FUNC_3(struct scif_endpt *VAR_3)
{
 int VAR_4 = 0;
 struct scif_dev *VAR_5;
 struct scif_hw_dev *VAR_6;
 struct dma_chan *VAR_7;


 if (!VAR_2.nodeid && FUNC_2(VAR_3->remote_dev))
  return 0;
 if (VAR_2.nodeid)
  VAR_5 = &VAR_1[0];
 else
  VAR_5 = VAR_3->remote_dev;
 VAR_6 = VAR_5->sdev;
 if (!VAR_6->num_dma_ch)
  return -VAR_0;
 VAR_7 = VAR_6->dma_ch[VAR_5->dma_ch_idx];
 VAR_5->dma_ch_idx = (VAR_5->dma_ch_idx + 1) % VAR_6->num_dma_ch;
 FUNC_0(&VAR_3->rma_info.rma_lock);
 VAR_3->rma_info.dma_chan = VAR_7;
 FUNC_1(&VAR_3->rma_info.rma_lock);
 return VAR_4;
}
