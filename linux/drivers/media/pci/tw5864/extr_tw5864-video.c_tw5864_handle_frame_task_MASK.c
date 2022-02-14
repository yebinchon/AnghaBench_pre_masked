
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int dma_addr; } ;
struct TYPE_4__ {int dma_addr; } ;
struct tw5864_h264_frame {TYPE_3__ mv; TYPE_1__ vlc; } ;
struct tw5864_dev {size_t h264_buf_r_index; size_t h264_buf_w_index; int slock; TYPE_2__* pci; struct tw5864_h264_frame* h264_buf; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct tw5864_h264_frame*) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_4)
{
 struct tw5864_dev *VAR_5 = (struct tw5864_dev *)VAR_4;
 unsigned long VAR_6;
 int VAR_7 = VAR_1;

 FUNC_2(&VAR_5->slock, VAR_6);
 while (VAR_5->h264_buf_r_index != VAR_5->h264_buf_w_index && VAR_7--) {
  struct tw5864_h264_frame *VAR_8 =
   &VAR_5->h264_buf[VAR_5->h264_buf_r_index];

  FUNC_3(&VAR_5->slock, VAR_6);
  FUNC_0(&VAR_5->pci->dev, VAR_8->vlc.dma_addr,
     VAR_3, VAR_0);
  FUNC_0(&VAR_5->pci->dev, VAR_8->mv.dma_addr,
     VAR_2, VAR_0);
  FUNC_4(VAR_8);
  FUNC_1(&VAR_5->pci->dev, VAR_8->vlc.dma_addr,
        VAR_3, VAR_0);
  FUNC_1(&VAR_5->pci->dev, VAR_8->mv.dma_addr,
        VAR_2, VAR_0);
  FUNC_2(&VAR_5->slock, VAR_6);

  VAR_5->h264_buf_r_index++;
  VAR_5->h264_buf_r_index %= VAR_1;
 }
 FUNC_3(&VAR_5->slock, VAR_6);
}
