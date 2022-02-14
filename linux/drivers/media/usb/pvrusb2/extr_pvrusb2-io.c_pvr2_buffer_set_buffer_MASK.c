
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_stream {unsigned int i_bcount; int mutex; int list_lock; int i_count; } ;
struct pvr2_buffer {scalar_t__ state; unsigned int max_count; struct pvr2_stream* stream; void* ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,char*,int ,unsigned int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct pvr2_buffer *VAR_4, void *VAR_5, unsigned int VAR_6)
{
 int VAR_7 = 0;
 unsigned long VAR_8;
 struct pvr2_stream *VAR_9;
 if (!VAR_4) return -VAR_0;
 VAR_9 = VAR_4->stream;
 FUNC_0(&VAR_9->mutex);
 do {
  FUNC_4(&VAR_9->list_lock, VAR_8);
  if (VAR_4->state != VAR_3) {
   VAR_7 = -VAR_1;
  } else {
   VAR_4->ptr = VAR_5;
   VAR_4->stream->i_bcount -= VAR_4->max_count;
   VAR_4->max_count = VAR_6;
   VAR_4->stream->i_bcount += VAR_4->max_count;
   FUNC_3(VAR_2,
       "/*---TRACE_FLOW---*/ bufferPool	%8s cap cap=%07d cnt=%02d",
       FUNC_2(
        VAR_3),
       VAR_4->stream->i_bcount, VAR_4->stream->i_count);
  }
  FUNC_5(&VAR_9->list_lock, VAR_8);
 } while (0);
 FUNC_1(&VAR_9->mutex);
 return VAR_7;
}
