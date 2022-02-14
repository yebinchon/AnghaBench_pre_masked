
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ispstat_buffer {scalar_t__ frame_number; scalar_t__ empty; } ;
struct ispstat {struct ispstat_buffer* active_buf; struct ispstat_buffer* locked_buf; struct ispstat_buffer* buf; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;

__attribute__((used)) static struct ispstat_buffer *
FUNC_0(struct ispstat *VAR_1, int VAR_2)
{
 struct ispstat_buffer *VAR_3 = ((void*)0);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct ispstat_buffer *VAR_5 = &VAR_1->buf[VAR_4];





  if (VAR_5 == VAR_1->locked_buf || VAR_5 == VAR_1->active_buf)
   continue;


  if (!VAR_2 && VAR_5->empty)
   continue;


  if (VAR_5->empty) {
   VAR_3 = VAR_5;
   break;
  }


  if (!VAR_3 ||
      (s32)VAR_5->frame_number - (s32)VAR_3->frame_number < 0)
   VAR_3 = VAR_5;
 }

 return VAR_3;
}
