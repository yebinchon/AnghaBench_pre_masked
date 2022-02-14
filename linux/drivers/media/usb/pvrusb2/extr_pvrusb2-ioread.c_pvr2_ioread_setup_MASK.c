
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_stream {int dummy; } ;
struct pvr2_ioread {int mutex; struct pvr2_stream* stream; int * buffer_storage; } ;
struct pvr2_buffer {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pvr2_buffer*,int ,int ) ;
 int FUNC_3 (struct pvr2_ioread*) ;
 struct pvr2_buffer* FUNC_4 (struct pvr2_stream*,unsigned int) ;
 scalar_t__ FUNC_5 (struct pvr2_stream*) ;
 int FUNC_6 (struct pvr2_stream*) ;
 int FUNC_7 (struct pvr2_stream*,unsigned int) ;
 int FUNC_8 (int ,char*,struct pvr2_ioread*) ;

int FUNC_9(struct pvr2_ioread *VAR_3,struct pvr2_stream *VAR_4)
{
 int VAR_5;
 unsigned int VAR_6;
 struct pvr2_buffer *VAR_7;

 FUNC_0(&VAR_3->mutex);
 do {
  if (VAR_3->stream) {
   FUNC_8(VAR_2,
       "/*---TRACE_READ---*/ pvr2_ioread_setup (tear-down) id=%p",
       VAR_3);
   FUNC_3(VAR_3);
   FUNC_6(VAR_3->stream);
   if (FUNC_5(VAR_3->stream)) {
    FUNC_7(VAR_3->stream,0);
   }
   VAR_3->stream = ((void*)0);
  }
  if (VAR_4) {
   FUNC_8(VAR_2,
       "/*---TRACE_READ---*/ pvr2_ioread_setup (setup) id=%p",
       VAR_3);
   FUNC_6(VAR_4);
   VAR_5 = FUNC_7(VAR_4,VAR_0);
   if (VAR_5 < 0) {
    FUNC_1(&VAR_3->mutex);
    return VAR_5;
   }
   for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
    VAR_7 = FUNC_4(VAR_4,VAR_6);
    FUNC_2(VAR_7,
             VAR_3->buffer_storage[VAR_6],
             VAR_1);
   }
   VAR_3->stream = VAR_4;
  }
 } while (0);
 FUNC_1(&VAR_3->mutex);

 return 0;
}
