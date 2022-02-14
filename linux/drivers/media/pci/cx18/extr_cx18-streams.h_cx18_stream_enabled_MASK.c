
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ v4l2_dev; } ;
struct cx18_stream {size_t type; TYPE_3__* cx; TYPE_2__* dvb; TYPE_1__ video_dev; } ;
struct TYPE_6__ {scalar_t__* stream_buffers; } ;
struct TYPE_5__ {scalar_t__ enabled; } ;


 size_t VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct cx18_stream *VAR_1)
{
 return VAR_1->video_dev.v4l2_dev ||
        (VAR_1->dvb && VAR_1->dvb->enabled) ||
        (VAR_1->type == VAR_0 &&
  VAR_1->cx->stream_buffers[VAR_0] != 0);
}
