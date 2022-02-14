
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tw686x_video_channel {int device; } ;
struct tw686x_dev {TYPE_1__* dma_ops; struct tw686x_video_channel* video_channels; } ;
struct TYPE_2__ {int (* free ) (struct tw686x_video_channel*,unsigned int) ;} ;


 unsigned int FUNC_0 (struct tw686x_dev*) ;
 int FUNC_1 (struct tw686x_video_channel*,unsigned int) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct tw686x_dev *VAR_0)
{
 unsigned int VAR_1, VAR_2;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++) {
  struct tw686x_video_channel *VAR_3 = &VAR_0->video_channels[VAR_1];

  FUNC_2(VAR_3->device);

  if (VAR_0->dma_ops->free)
   for (VAR_2 = 0; VAR_2 < 2; VAR_2++)
    VAR_0->dma_ops->free(VAR_3, VAR_2);
 }
}
