
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ offset; } ;
struct v4l2_buffer {scalar_t__ type; scalar_t__ memory; int index; int flags; int bytesused; int sequence; int timecode; scalar_t__ request_fd; scalar_t__ reserved2; int length; TYPE_1__ m; int timestamp; int field; } ;
struct framebuf {scalar_t__ status; int num; } ;
struct file {int f_flags; } ;
struct camera_data {TYPE_2__* buffers; int frame_size; scalar_t__ frame_buffer; int vdev; int v4l2_lock; struct framebuf* curbuff; int wq_stream; } ;
struct TYPE_4__ {int status; scalar_t__ data; int seq; int ts; int length; } ;


 int FUNC_0 (char*,size_t,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct camera_data*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 struct camera_data* FUNC_7 (struct file*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_13, void *VAR_14, struct v4l2_buffer *VAR_15)
{
 struct camera_data *VAR_16 = FUNC_7(VAR_13);
 int VAR_17;

 if(VAR_15->type != VAR_9 ||
    VAR_15->memory != VAR_11)
  return -VAR_1;

 VAR_17 = FUNC_1(VAR_16);

 if(VAR_17 < 0 && VAR_13->f_flags&VAR_5)
  return -VAR_0;

 if(VAR_17 < 0) {

  struct framebuf *VAR_18=VAR_16->curbuff;
  FUNC_4(&VAR_16->v4l2_lock);
  FUNC_9(VAR_16->wq_stream,
      !FUNC_8(&VAR_16->vdev) ||
      (VAR_18=VAR_16->curbuff)->status == VAR_4);
  FUNC_3(&VAR_16->v4l2_lock);
  if (FUNC_6(VAR_12))
   return -VAR_3;
  if (!FUNC_8(&VAR_16->vdev))
   return -VAR_2;
  VAR_17 = VAR_18->num;
 }


 VAR_15->index = VAR_17;
 VAR_15->bytesused = VAR_16->buffers[VAR_15->index].length;
 VAR_15->flags = VAR_7 | VAR_6
  | VAR_8;
 VAR_15->field = VAR_10;
 VAR_15->timestamp = FUNC_5(VAR_16->buffers[VAR_15->index].ts);
 VAR_15->sequence = VAR_16->buffers[VAR_15->index].seq;
 VAR_15->m.offset = VAR_16->buffers[VAR_15->index].data - VAR_16->frame_buffer;
 VAR_15->length = VAR_16->frame_size;
 VAR_15->reserved2 = 0;
 VAR_15->request_fd = 0;
 FUNC_2(&VAR_15->timecode, 0, sizeof(VAR_15->timecode));

 FUNC_0("DQBUF #%d status:%d seq:%d length:%d\n", VAR_15->index,
     VAR_16->buffers[VAR_15->index].status, VAR_15->sequence, VAR_15->bytesused);

 return 0;
}
