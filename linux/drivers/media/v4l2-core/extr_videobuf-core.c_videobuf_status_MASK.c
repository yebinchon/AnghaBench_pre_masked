
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct videobuf_queue {TYPE_1__* int_ops; } ;
struct videobuf_buffer {int memory; int state; int field_count; int size; int ts; int field; scalar_t__ map; int boff; int bsize; int baddr; int i; int magic; } ;
struct TYPE_4__ {int offset; int userptr; } ;
struct v4l2_buffer {int type; int memory; int sequence; int bytesused; int timestamp; int field; int flags; TYPE_2__ m; int length; int index; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_3__ {int magic; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct videobuf_queue *VAR_7, struct v4l2_buffer *VAR_8,
       struct videobuf_buffer *VAR_9, enum v4l2_buf_type VAR_10)
{
 FUNC_0(VAR_9->magic, VAR_0);
 FUNC_0(VAR_7->int_ops->magic, VAR_1);

 VAR_8->index = VAR_9->i;
 VAR_8->type = VAR_10;

 VAR_8->memory = VAR_9->memory;
 switch (VAR_8->memory) {
 case 137:
  VAR_8->m.offset = VAR_9->boff;
  VAR_8->length = VAR_9->bsize;
  break;
 case 135:
  VAR_8->m.userptr = VAR_9->baddr;
  VAR_8->length = VAR_9->bsize;
  break;
 case 136:
  VAR_8->m.offset = VAR_9->boff;
  break;
 case 138:

  break;
 }

 VAR_8->flags = VAR_6;
 if (VAR_9->map)
  VAR_8->flags |= VAR_4;

 switch (VAR_9->state) {
 case 129:
 case 128:
 case 134:
  VAR_8->flags |= VAR_5;
  break;
 case 132:
  VAR_8->flags |= VAR_3;

 case 133:
  VAR_8->flags |= VAR_2;
  break;
 case 130:
 case 131:

  break;
 }

 VAR_8->field = VAR_9->field;
 VAR_8->timestamp = FUNC_1(VAR_9->ts);
 VAR_8->bytesused = VAR_9->size;
 VAR_8->sequence = VAR_9->field_count >> 1;
}
