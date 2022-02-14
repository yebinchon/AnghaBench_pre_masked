
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int dma_addr; void* addr; } ;
struct TYPE_6__ {int dma_addr; void* addr; } ;
struct tw5864_h264_frame {TYPE_3__ mv; TYPE_1__ vlc; } ;
struct tw5864_dev {size_t h264_buf_w_index; int irqmask; struct tw5864_h264_frame* h264_buf; TYPE_2__* pci; int tasklet; TYPE_4__* inputs; int slock; scalar_t__ h264_buf_r_index; scalar_t__ encoder_busy; } ;
struct TYPE_9__ {int nr; struct tw5864_dev* root; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_1 (int *,char*) ;
 void* FUNC_2 (int *,int ,int*,int) ;
 int FUNC_3 (int *,int ,void*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,int ,unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct tw5864_dev*) ;
 int VAR_42 ;
 int FUNC_10 (struct tw5864_dev*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*,int) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ,int) ;

int FUNC_15(struct tw5864_dev *VAR_43, int *VAR_44)
{
 int VAR_45;
 int VAR_46;
 unsigned long VAR_47;
 int VAR_48 = -1;
 int VAR_49 = -1;

 for (VAR_45 = 0; VAR_45 < VAR_3; VAR_45++) {
  struct tw5864_h264_frame *VAR_50 = &VAR_43->h264_buf[VAR_45];

  VAR_50->vlc.addr = FUNC_2(&VAR_43->pci->dev,
           VAR_5,
           &VAR_50->vlc.dma_addr,
           VAR_2 | VAR_1);
  if (!VAR_50->vlc.addr) {
   FUNC_1(&VAR_43->pci->dev, "dma alloc fail\n");
   VAR_46 = -VAR_0;
   goto free_dma;
  }
  VAR_50->mv.addr = FUNC_2(&VAR_43->pci->dev,
          VAR_4,
          &VAR_50->mv.dma_addr,
          VAR_2 | VAR_1);
  if (!VAR_50->mv.addr) {
   FUNC_1(&VAR_43->pci->dev, "dma alloc fail\n");
   VAR_46 = -VAR_0;
   FUNC_3(&VAR_43->pci->dev, VAR_5,
       VAR_50->vlc.addr, VAR_50->vlc.dma_addr);
   goto free_dma;
  }
  VAR_48 = VAR_45;
 }

 FUNC_9(VAR_43);



 FUNC_13(VAR_26, VAR_27);
 FUNC_13(VAR_14, 0x00);

 FUNC_13(VAR_16, 0x02);
 FUNC_13(VAR_17, 0x02);
 FUNC_13(VAR_15, 0x02);
 FUNC_13(VAR_19, 0x02);
 FUNC_13(VAR_20, 0x02);
 FUNC_13(VAR_18, 0x02);


 FUNC_13(VAR_22, 0);
 FUNC_13(VAR_22, VAR_25 |
   VAR_23 | VAR_24);
 FUNC_4(20);
 FUNC_14(VAR_8, 0);

 FUNC_13(VAR_21,
   FUNC_0(0) |
   FUNC_0(1) |
   FUNC_0(2) |
   FUNC_0(3));

 FUNC_5(&VAR_43->slock, VAR_47);
 VAR_43->encoder_busy = 0;
 VAR_43->h264_buf_r_index = 0;
 VAR_43->h264_buf_w_index = 0;
 FUNC_14(VAR_41,
    VAR_43->h264_buf[VAR_43->h264_buf_w_index].vlc.dma_addr);
 FUNC_14(VAR_34,
    VAR_43->h264_buf[VAR_43->h264_buf_w_index].mv.dma_addr);
 FUNC_6(&VAR_43->slock, VAR_47);

 FUNC_14(VAR_39, 0x000f);
 FUNC_14(VAR_13, 0x000f);

 FUNC_14(VAR_9, 0x00000000);
 FUNC_14(VAR_10, 0x00001111);
 FUNC_14(VAR_11, 0x00002222);
 FUNC_14(VAR_12, 0x00003333);
 FUNC_14(VAR_7, 0x00ff);
 FUNC_14(VAR_36, 0);

 FUNC_14(VAR_29, VAR_6);
 FUNC_14(VAR_32, VAR_38);
 FUNC_14(VAR_35,
    VAR_40 | VAR_37 |
    VAR_33);

 VAR_43->irqmask |= VAR_31 | VAR_30;
 FUNC_10(VAR_43);

 FUNC_7(&VAR_43->tasklet, VAR_42,
       (unsigned long)VAR_43);

 for (VAR_45 = 0; VAR_45 < VAR_28; VAR_45++) {
  VAR_43->inputs[VAR_45].root = VAR_43;
  VAR_43->inputs[VAR_45].nr = VAR_45;
  VAR_46 = FUNC_12(&VAR_43->inputs[VAR_45], VAR_44[VAR_45]);
  if (VAR_46)
   goto fini_video_inputs;
  VAR_49 = VAR_45;
 }

 return 0;

fini_video_inputs:
 for (VAR_45 = VAR_49; VAR_45 >= 0; VAR_45--)
  FUNC_11(&VAR_43->inputs[VAR_45]);

 FUNC_8(&VAR_43->tasklet);

free_dma:
 for (VAR_45 = VAR_48; VAR_45 >= 0; VAR_45--) {
  FUNC_3(&VAR_43->pci->dev, VAR_5,
      VAR_43->h264_buf[VAR_45].vlc.addr,
      VAR_43->h264_buf[VAR_45].vlc.dma_addr);
  FUNC_3(&VAR_43->pci->dev, VAR_4,
      VAR_43->h264_buf[VAR_45].mv.addr,
      VAR_43->h264_buf[VAR_45].mv.dma_addr);
 }

 return VAR_46;
}
