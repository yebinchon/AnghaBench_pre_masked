
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_stream {scalar_t__ buffer_total_count; scalar_t__ buffer_target_count; int mutex; } ;
struct pvr2_buffer {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pvr2_buffer*) ;
 int FUNC_3 (struct pvr2_stream*) ;
 struct pvr2_buffer* FUNC_4 (struct pvr2_stream*) ;
 int FUNC_5 (struct pvr2_stream*) ;

void FUNC_6(struct pvr2_stream *VAR_0)
{
 struct pvr2_buffer *VAR_1;
 FUNC_0(&VAR_0->mutex);
 do {
  FUNC_5(VAR_0);
  while ((VAR_1 = FUNC_4(VAR_0)) != ((void*)0)) {
   FUNC_2(VAR_1);
  }
  if (VAR_0->buffer_total_count != VAR_0->buffer_target_count) {
   FUNC_3(VAR_0);
  }
 } while (0);
 FUNC_1(&VAR_0->mutex);
}
