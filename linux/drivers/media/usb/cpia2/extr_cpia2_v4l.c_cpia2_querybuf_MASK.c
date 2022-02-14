
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ offset; } ;
struct v4l2_buffer {scalar_t__ type; size_t index; int bytesused; int sequence; int flags; TYPE_2__ m; int timestamp; int memory; int length; } ;
struct file {int dummy; } ;
struct camera_data {size_t num_frames; TYPE_1__* buffers; scalar_t__ mmapped; int frame_size; scalar_t__ frame_buffer; } ;
struct TYPE_3__ {int status; int seq; int ts; int length; scalar_t__ data; } ;


 int FUNC_0 (char*,size_t,scalar_t__,int ,int ,int ) ;
 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 struct camera_data* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_7, void *VAR_8, struct v4l2_buffer *VAR_9)
{
 struct camera_data *VAR_10 = FUNC_2(VAR_7);

 if(VAR_9->type != VAR_5 ||
    VAR_9->index >= VAR_10->num_frames)
  return -VAR_0;

 VAR_9->m.offset = VAR_10->buffers[VAR_9->index].data - VAR_10->frame_buffer;
 VAR_9->length = VAR_10->frame_size;

 VAR_9->memory = VAR_6;

 if(VAR_10->mmapped)
  VAR_9->flags = VAR_2;
 else
  VAR_9->flags = 0;

 VAR_9->flags |= VAR_4;

 switch (VAR_10->buffers[VAR_9->index].status) {
 case 131:
 case 130:
 case 129:
  VAR_9->bytesused = 0;
  VAR_9->flags = VAR_3;
  break;
 case 128:
  VAR_9->bytesused = VAR_10->buffers[VAR_9->index].length;
  VAR_9->timestamp = FUNC_1(VAR_10->buffers[VAR_9->index].ts);
  VAR_9->sequence = VAR_10->buffers[VAR_9->index].seq;
  VAR_9->flags = VAR_1;
  break;
 }

 FUNC_0("QUERYBUF index:%d offset:%d flags:%d seq:%d bytesused:%d\n",
      VAR_9->index, VAR_9->m.offset, VAR_9->flags, VAR_9->sequence,
      VAR_9->bytesused);

 return 0;
}
