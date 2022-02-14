
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tw5864_input {scalar_t__ frame_gop_seqno; scalar_t__ gop; int slock; int frame_seqno; } ;
struct TYPE_6__ {int dma_addr; } ;
struct TYPE_5__ {int dma_addr; } ;
struct tw5864_h264_frame {int vlc_len; int checksum; scalar_t__ gop_seqno; TYPE_3__ mv; TYPE_2__ vlc; int seqno; int timestamp; struct tw5864_input* input; } ;
struct tw5864_dev {int h264_buf_w_index; int h264_buf_r_index; int slock; scalar_t__ encoder_busy; TYPE_1__* pci; int tasklet; struct tw5864_h264_frame* h264_buf; struct tw5864_input* inputs; } ;
struct TYPE_4__ {int dev; } ;


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
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static void FUNC_9(struct tw5864_dev *VAR_10)
{
 int VAR_11 = FUNC_7(VAR_1) & VAR_2;
 struct tw5864_input *VAR_12 = &VAR_10->inputs[VAR_11];
 int VAR_13, VAR_14;
 struct tw5864_h264_frame *VAR_15, *VAR_16;
 unsigned long VAR_17;

 FUNC_3(&VAR_10->slock, VAR_17);

 VAR_13 = VAR_10->h264_buf_w_index;
 VAR_14 = (VAR_13 + 1) % VAR_0;
 VAR_15 = &VAR_10->h264_buf[VAR_13];
 VAR_16 = &VAR_10->h264_buf[VAR_14];

 if (VAR_14 != VAR_10->h264_buf_r_index) {
  VAR_15->vlc_len = FUNC_7(VAR_8) << 2;
  VAR_15->checksum = FUNC_7(VAR_5);
  VAR_15->input = VAR_12;
  VAR_15->timestamp = FUNC_1();
  VAR_15->seqno = VAR_12->frame_seqno;
  VAR_15->gop_seqno = VAR_12->frame_gop_seqno;

  VAR_10->h264_buf_w_index = VAR_14;
  FUNC_6(&VAR_10->tasklet);

  VAR_15 = VAR_16;

  FUNC_2(&VAR_12->slock);
  VAR_12->frame_seqno++;
  VAR_12->frame_gop_seqno++;
  if (VAR_12->frame_gop_seqno >= VAR_12->gop)
   VAR_12->frame_gop_seqno = 0;
  FUNC_4(&VAR_12->slock);
 } else {
  FUNC_0(&VAR_10->pci->dev,
   "Skipped frame on input %d because all buffers busy\n",
   VAR_11);
 }

 VAR_10->encoder_busy = 0;

 FUNC_5(&VAR_10->slock, VAR_17);

 FUNC_8(VAR_9, VAR_15->vlc.dma_addr);
 FUNC_8(VAR_3, VAR_15->mv.dma_addr);


 FUNC_8(VAR_7, 0x00000001);
 FUNC_8(VAR_4, VAR_6);
}
