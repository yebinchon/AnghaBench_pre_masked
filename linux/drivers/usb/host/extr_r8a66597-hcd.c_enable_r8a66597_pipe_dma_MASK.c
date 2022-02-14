
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int pipe; } ;
struct r8a66597_pipe_info {unsigned short pipenum; scalar_t__ type; scalar_t__ epnum; scalar_t__ dir_in; } ;
struct r8a66597_pipe {int fifoctr; struct r8a66597_pipe_info info; int fifosel; } ;
struct r8a66597_device {int dma_map; TYPE_2__* udev; } ;
struct r8a66597 {int dma_map; TYPE_1__* pdata; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ on_chip; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct r8a66597*,int ) ;
 int FUNC_1 (int *,char*,int ,scalar_t__) ;
 unsigned short FUNC_2 (struct r8a66597*) ;
 int FUNC_3 (struct r8a66597*,int ,int ) ;
 int FUNC_4 (struct r8a66597*,unsigned short,unsigned short,int ) ;
 int FUNC_5 (struct r8a66597*,int ,unsigned short,unsigned short) ;
 int FUNC_6 (struct r8a66597_pipe*,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct r8a66597 *VAR_5,
         struct r8a66597_device *VAR_6,
         struct r8a66597_pipe *VAR_7,
         struct urb *VAR_8)
{
 int VAR_9;
 struct r8a66597_pipe_info *VAR_10 = &VAR_7->info;
 unsigned short VAR_11 = FUNC_2(VAR_5);


 if (VAR_5->pdata->on_chip)
  return;

 if ((VAR_7->info.pipenum != 0) && (VAR_10->type != VAR_2)) {
  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
   if ((VAR_5->dma_map & (1 << VAR_9)) != 0)
    continue;

   FUNC_1(&VAR_6->udev->dev,
     "address %d, EndpointAddress 0x%02x use "
     "DMA FIFO\n", FUNC_7(VAR_8->pipe),
     VAR_10->dir_in ?
      VAR_4 + VAR_10->epnum
     : VAR_10->epnum);

   VAR_5->dma_map |= 1 << VAR_9;
   VAR_6->dma_map |= 1 << VAR_9;
   FUNC_6(VAR_7, VAR_9);

   FUNC_0(VAR_5, 0);
   FUNC_4(VAR_5, VAR_11 | VAR_7->info.pipenum,
          VAR_11 | VAR_1, VAR_7->fifosel);

   FUNC_5(VAR_5, VAR_7->fifosel, VAR_1,
       VAR_7->info.pipenum);
   FUNC_3(VAR_5, VAR_0, VAR_7->fifoctr);
   break;
  }
 }
}
