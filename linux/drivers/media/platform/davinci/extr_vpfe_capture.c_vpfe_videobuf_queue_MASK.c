
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpfe_fh {struct vpfe_device* vpfe_dev; } ;
struct vpfe_device {int dma_queue_lock; int dma_queue; int v4l2_dev; } ;
struct videobuf_queue {struct vpfe_fh* priv_data; } ;
struct videobuf_buffer {int state; int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,int ,int *,char*) ;

__attribute__((used)) static void FUNC_4(struct videobuf_queue *VAR_2,
    struct videobuf_buffer *VAR_3)
{

 struct vpfe_fh *VAR_4 = VAR_2->priv_data;
 struct vpfe_device *VAR_5 = VAR_4->vpfe_dev;
 unsigned long VAR_6;

 FUNC_3(1, VAR_1, &VAR_5->v4l2_dev, "vpfe_buffer_queue\n");


 FUNC_1(&VAR_5->dma_queue_lock, VAR_6);
 FUNC_0(&VAR_3->queue, &VAR_5->dma_queue);
 FUNC_2(&VAR_5->dma_queue_lock, VAR_6);


 VAR_3->state = VAR_0;
}
