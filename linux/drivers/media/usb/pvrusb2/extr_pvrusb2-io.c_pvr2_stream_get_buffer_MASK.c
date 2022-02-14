
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_stream {int buffer_total_count; struct pvr2_buffer** buffers; } ;
struct pvr2_buffer {int dummy; } ;



struct pvr2_buffer *FUNC_0(struct pvr2_stream *VAR_0, int VAR_1)
{
 if (VAR_1 < 0) return ((void*)0);
 if (VAR_1 >= VAR_0->buffer_total_count) return ((void*)0);
 return VAR_0->buffers[VAR_1];
}
