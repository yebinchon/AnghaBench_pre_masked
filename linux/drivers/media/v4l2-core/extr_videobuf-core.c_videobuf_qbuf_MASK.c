
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct videobuf_queue {scalar_t__ type; int wait; int irqlock; TYPE_3__* ops; scalar_t__ streaming; int stream; struct videobuf_buffer** bufs; scalar_t__ reading; TYPE_1__* int_ops; } ;
struct videobuf_buffer {int memory; scalar_t__ state; int stream; int boff; int baddr; int bsize; int ts; int field; int size; int magic; } ;
struct TYPE_7__ {int offset; int userptr; } ;
struct v4l2_buffer {int memory; scalar_t__ type; size_t index; TYPE_2__ m; int length; int timestamp; int field; int bytesused; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_10__ {TYPE_4__* mm; } ;
struct TYPE_9__ {int mmap_sem; } ;
struct TYPE_8__ {int (* buf_prepare ) (struct videobuf_queue*,struct videobuf_buffer*,int) ;int (* buf_queue ) (struct videobuf_queue*,struct videobuf_buffer*) ;int (* buf_release ) (struct videobuf_queue*,struct videobuf_buffer*) ;} ;
struct TYPE_6__ {int magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;



 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 size_t VAR_10 ;
 TYPE_5__* VAR_11 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (struct videobuf_queue*,struct videobuf_buffer*) ;
 int FUNC_7 (struct videobuf_queue*,struct videobuf_buffer*,int) ;
 int FUNC_8 (struct videobuf_queue*,struct videobuf_buffer*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct videobuf_queue*) ;
 int FUNC_12 (struct videobuf_queue*) ;
 int FUNC_13 (struct videobuf_queue*) ;
 int FUNC_14 (int *) ;

int FUNC_15(struct videobuf_queue *VAR_12, struct v4l2_buffer *VAR_13)
{
 struct videobuf_buffer *VAR_14;
 enum v4l2_field VAR_15;
 unsigned long VAR_16 = 0;
 int VAR_17;

 FUNC_0(VAR_12->int_ops->magic, VAR_3);

 if (VAR_13->memory == 130)
  FUNC_1(&VAR_11->mm->mmap_sem);

 FUNC_12(VAR_12);
 VAR_17 = -VAR_0;
 if (VAR_12->reading) {
  FUNC_2(1, "qbuf: Reading running...\n");
  goto done;
 }
 VAR_17 = -VAR_1;
 if (VAR_13->type != VAR_12->type) {
  FUNC_2(1, "qbuf: Wrong type.\n");
  goto done;
 }
 if (VAR_13->index >= VAR_10) {
  FUNC_2(1, "qbuf: index out of range.\n");
  goto done;
 }
 VAR_14 = VAR_12->bufs[VAR_13->index];
 if (((void*)0) == VAR_14) {
  FUNC_2(1, "qbuf: buffer is null.\n");
  goto done;
 }
 FUNC_0(VAR_14->magic, VAR_2);
 if (VAR_14->memory != VAR_13->memory) {
  FUNC_2(1, "qbuf: memory type is wrong.\n");
  goto done;
 }
 if (VAR_14->state != VAR_9 && VAR_14->state != VAR_8) {
  FUNC_2(1, "qbuf: buffer is already queued or active.\n");
  goto done;
 }

 switch (VAR_13->memory) {
 case 130:
  if (0 == VAR_14->baddr) {
   FUNC_2(1, "qbuf: mmap requested but buffer addr is zero!\n");
   goto done;
  }
  if (VAR_12->type == VAR_7
      || VAR_12->type == VAR_6
      || VAR_12->type == VAR_5
      || VAR_12->type == VAR_4) {
   VAR_14->size = VAR_13->bytesused;
   VAR_14->field = VAR_13->field;
   VAR_14->ts = FUNC_10(&VAR_13->timestamp);
  }
  break;
 case 128:
  if (VAR_13->length < VAR_14->bsize) {
   FUNC_2(1, "qbuf: buffer length is not enough\n");
   goto done;
  }
  if (VAR_9 != VAR_14->state &&
      VAR_14->baddr != VAR_13->m.userptr)
   VAR_12->ops->buf_release(VAR_12, VAR_14);
  VAR_14->baddr = VAR_13->m.userptr;
  break;
 case 129:
  VAR_14->boff = VAR_13->m.offset;
  break;
 default:
  FUNC_2(1, "qbuf: wrong memory type\n");
  goto done;
 }

 FUNC_2(1, "qbuf: requesting next field\n");
 VAR_15 = FUNC_11(VAR_12);
 VAR_17 = VAR_12->ops->buf_prepare(VAR_12, VAR_14, VAR_15);
 if (0 != VAR_17) {
  FUNC_2(1, "qbuf: buffer_prepare returned %d\n", VAR_17);
  goto done;
 }

 FUNC_3(&VAR_14->stream, &VAR_12->stream);
 if (VAR_12->streaming) {
  FUNC_4(VAR_12->irqlock, VAR_16);
  VAR_12->ops->buf_queue(VAR_12, VAR_14);
  FUNC_5(VAR_12->irqlock, VAR_16);
 }
 FUNC_2(1, "qbuf: succeeded\n");
 VAR_17 = 0;
 FUNC_14(&VAR_12->wait);

done:
 FUNC_13(VAR_12);

 if (VAR_13->memory == 130)
  FUNC_9(&VAR_11->mm->mmap_sem);

 return VAR_17;
}
