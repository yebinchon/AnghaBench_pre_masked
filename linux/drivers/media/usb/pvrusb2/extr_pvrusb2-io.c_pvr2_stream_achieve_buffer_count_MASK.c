
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_stream {unsigned int buffer_total_count; unsigned int buffer_target_count; struct pvr2_buffer** buffers; } ;
struct pvr2_buffer {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pvr2_stream*,unsigned int) ;
 int FUNC_1 (int ,char*,struct pvr2_stream*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct pvr2_stream *VAR_2)
{
 struct pvr2_buffer *VAR_3;
 unsigned int VAR_4;

 if (VAR_2->buffer_total_count == VAR_2->buffer_target_count) return 0;

 FUNC_1(VAR_0,
     "/*---TRACE_FLOW---*/ poolCheck	stream=%p cur=%d tgt=%d",
     VAR_2, VAR_2->buffer_total_count, VAR_2->buffer_target_count);

 if (VAR_2->buffer_total_count < VAR_2->buffer_target_count) {
  return FUNC_0(VAR_2, VAR_2->buffer_target_count);
 }

 VAR_4 = 0;
 while ((VAR_2->buffer_total_count - VAR_4) > VAR_2->buffer_target_count) {
  VAR_3 = VAR_2->buffers[VAR_2->buffer_total_count - (VAR_4 + 1)];
  if (VAR_3->state != VAR_1) break;
  VAR_4++;
 }
 if (VAR_4) {
  FUNC_0(VAR_2, VAR_2->buffer_total_count - VAR_4);
 }

 return 0;
}
