
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_6__ {int index; int timestamp; TYPE_2__* planes; } ;
struct vb2_v4l2_buffer {int field; TYPE_3__ vb2_buf; int flags; scalar_t__ sequence; } ;
struct v4l2_event {int type; } ;
struct device {int dummy; } ;
struct amvdec_session {int pixfmt_cap; int esparser_queue_work; int esparser_queued_bufs; scalar_t__ should_stop; int fh; int sequence_cap; TYPE_1__* core; } ;
struct TYPE_5__ {int bytesused; } ;
struct TYPE_4__ {struct device* dev_dec; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (struct amvdec_session*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct v4l2_event const*) ;
 int FUNC_5 (struct vb2_v4l2_buffer*,int ) ;

__attribute__((used)) static void FUNC_6(struct amvdec_session *VAR_3,
    struct vb2_v4l2_buffer *VAR_4,
    u32 VAR_5,
    u64 VAR_6)
{
 struct device *VAR_7 = VAR_3->core->dev_dec;
 u32 VAR_8 = FUNC_0(VAR_3);

 switch (VAR_3->pixfmt_cap) {
 case 129:
  VAR_4->vb2_buf.planes[0].bytesused = VAR_8;
  VAR_4->vb2_buf.planes[1].bytesused = VAR_8 / 2;
  break;
 case 128:
  VAR_4->vb2_buf.planes[0].bytesused = VAR_8;
  VAR_4->vb2_buf.planes[1].bytesused = VAR_8 / 4;
  VAR_4->vb2_buf.planes[2].bytesused = VAR_8 / 4;
  break;
 }

 VAR_4->vb2_buf.timestamp = VAR_6;
 VAR_4->sequence = VAR_3->sequence_cap++;

 if (VAR_3->should_stop &&
     FUNC_1(&VAR_3->esparser_queued_bufs) <= 2) {
  const struct v4l2_event VAR_9 = { .type = VAR_1 };

  FUNC_2(VAR_7, "Signaling EOS\n");
  FUNC_4(&VAR_3->fh, &VAR_9);
  VAR_4->flags |= VAR_0;
 } else if (VAR_3->should_stop)
  FUNC_2(VAR_7, "should_stop, %u bufs remain\n",
   FUNC_1(&VAR_3->esparser_queued_bufs));

 FUNC_2(VAR_7, "Buffer %u done\n", VAR_4->vb2_buf.index);
 VAR_4->field = VAR_5;
 FUNC_5(VAR_4, VAR_2);


 FUNC_3(&VAR_3->esparser_queue_work);
}
