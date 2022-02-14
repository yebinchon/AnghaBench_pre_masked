
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int offset; } ;
struct v4l2_buffer {unsigned int index; int flags; unsigned int length; TYPE_2__ m; int memory; int sequence; int timestamp; int field; int bytesused; } ;
struct file {int dummy; } ;
struct TYPE_6__ {TYPE_1__* grab_buffer; } ;
struct TYPE_4__ {scalar_t__ state; int sequence; int ts; int size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 TYPE_3__ VAR_11 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_12, void *VAR_13, struct v4l2_buffer *VAR_14)
{
 unsigned int VAR_15 = VAR_14->index;

 if (VAR_15 >= VAR_9)
  return -VAR_0;

 VAR_14->bytesused = VAR_11.grab_buffer[VAR_15].size;
 VAR_14->flags = VAR_4 | VAR_6;

 if (VAR_11.grab_buffer[VAR_15].state == VAR_2)
  VAR_14->flags |= VAR_5;

 if (VAR_11.grab_buffer[VAR_15].state == VAR_1)
  VAR_14->flags |= VAR_3;

 VAR_14->field = VAR_7;
 VAR_14->timestamp = FUNC_0(VAR_11.grab_buffer[VAR_15].ts);
 VAR_14->sequence = VAR_11.grab_buffer[VAR_15].sequence;
 VAR_14->memory = VAR_8;
 VAR_14->m.offset = VAR_15 * VAR_10;
 VAR_14->length = VAR_10;

 return 0;
}
