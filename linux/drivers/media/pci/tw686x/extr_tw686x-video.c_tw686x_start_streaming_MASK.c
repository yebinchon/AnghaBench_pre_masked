
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct tw686x_video_channel {int qlock; int ch; int pb; scalar_t__ sequence; int num; TYPE_1__* dma_descs; struct tw686x_dev* dev; } ;
struct tw686x_dev {scalar_t__ dma_mode; int dma_delay_timer; int lock; TYPE_2__* dma_ops; int v4l2_dev; struct pci_dev* pci_dev; } ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {int (* buf_refill ) (struct tw686x_video_channel*,int) ;} ;
struct TYPE_3__ {int virt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct tw686x_video_channel*,int) ;
 int FUNC_5 (struct tw686x_video_channel*,int ) ;
 int FUNC_6 (struct tw686x_dev*,int ) ;
 int FUNC_7 (int *,char*,int ) ;
 struct tw686x_video_channel* FUNC_8 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_9(struct vb2_queue *VAR_5, unsigned int VAR_6)
{
 struct tw686x_video_channel *VAR_7 = FUNC_8(VAR_5);
 struct tw686x_dev *VAR_8 = VAR_7->dev;
 struct pci_dev *VAR_9;
 unsigned long VAR_10;
 int VAR_11, VAR_12;


 FUNC_2(&VAR_8->lock, VAR_10);
 VAR_9 = VAR_8->pci_dev;
 FUNC_3(&VAR_8->lock, VAR_10);
 if (!VAR_9) {
  VAR_12 = -VAR_0;
  goto err_clear_queue;
 }

 FUNC_2(&VAR_7->qlock, VAR_10);


 if (VAR_8->dma_mode == VAR_2 &&
     (!VAR_7->dma_descs[0].virt || !VAR_7->dma_descs[1].virt)) {
  FUNC_3(&VAR_7->qlock, VAR_10);
  FUNC_7(&VAR_8->v4l2_dev,
    "video%d: refusing to start without DMA buffers\n",
    VAR_7->num);
  VAR_12 = -VAR_1;
  goto err_clear_queue;
 }

 for (VAR_11 = 0; VAR_11 < 2; VAR_11++)
  VAR_8->dma_ops->buf_refill(VAR_7, VAR_11);
 FUNC_3(&VAR_7->qlock, VAR_10);

 VAR_7->sequence = 0;
 VAR_7->pb = 0;

 FUNC_2(&VAR_8->lock, VAR_10);
 FUNC_6(VAR_8, VAR_7->ch);
 FUNC_3(&VAR_8->lock, VAR_10);

 FUNC_0(&VAR_8->dma_delay_timer, VAR_4 + FUNC_1(100));

 return 0;

err_clear_queue:
 FUNC_2(&VAR_7->qlock, VAR_10);
 FUNC_5(VAR_7, VAR_3);
 FUNC_3(&VAR_7->qlock, VAR_10);
 return VAR_12;
}
