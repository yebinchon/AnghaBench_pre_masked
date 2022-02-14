
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tw686x_video_channel {TYPE_1__* dma_descs; } ;
struct tw686x_dev {struct tw686x_video_channel* video_channels; } ;
struct TYPE_2__ {unsigned int size; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (struct tw686x_dev*) ;
 unsigned int FUNC_1 (struct tw686x_dev*) ;

__attribute__((used)) static int FUNC_2(struct tw686x_dev *VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4, VAR_5;

 if (FUNC_0(VAR_1)) {




  VAR_5 = FUNC_1(VAR_1);
  VAR_2 = VAR_0;
 } else {





  VAR_5 = 1;
  VAR_2 = FUNC_1(VAR_1) * VAR_0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  struct tw686x_video_channel *VAR_6 = &VAR_1->video_channels[VAR_4];

  for (VAR_3 = 0; VAR_3 < 2; VAR_3++)
   VAR_6->dma_descs[VAR_3].size = VAR_2;
 }

 return 0;
}
