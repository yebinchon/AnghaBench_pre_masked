
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tw5864_dev {TYPE_4__* h264_buf; TYPE_2__* pci; int * inputs; int tasklet; } ;
struct TYPE_7__ {int dma_addr; int addr; } ;
struct TYPE_5__ {int dma_addr; int addr; } ;
struct TYPE_8__ {TYPE_3__ mv; TYPE_1__ vlc; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct tw5864_dev *VAR_4)
{
 int VAR_5;

 FUNC_1(&VAR_4->tasklet);

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  FUNC_2(&VAR_4->inputs[VAR_5]);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_0(&VAR_4->pci->dev, VAR_2,
      VAR_4->h264_buf[VAR_5].vlc.addr,
      VAR_4->h264_buf[VAR_5].vlc.dma_addr);
  FUNC_0(&VAR_4->pci->dev, VAR_1,
      VAR_4->h264_buf[VAR_5].mv.addr,
      VAR_4->h264_buf[VAR_5].mv.dma_addr);
 }
}
