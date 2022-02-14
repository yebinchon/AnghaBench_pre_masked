
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_buffer {scalar_t__ type; scalar_t__ memory; size_t index; } ;
struct file {int dummy; } ;
struct camera_data {size_t num_frames; TYPE_1__* buffers; } ;
struct TYPE_2__ {scalar_t__ status; } ;


 int FUNC_0 (char*,size_t) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct camera_data* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_5, void *VAR_6, struct v4l2_buffer *VAR_7)
{
 struct camera_data *VAR_8 = FUNC_1(VAR_5);

 if(VAR_7->type != VAR_3 ||
    VAR_7->memory != VAR_4 ||
    VAR_7->index >= VAR_8->num_frames)
  return -VAR_0;

 FUNC_0("QBUF #%d\n", VAR_7->index);

 if(VAR_8->buffers[VAR_7->index].status == VAR_2)
  VAR_8->buffers[VAR_7->index].status = VAR_1;

 return 0;
}
