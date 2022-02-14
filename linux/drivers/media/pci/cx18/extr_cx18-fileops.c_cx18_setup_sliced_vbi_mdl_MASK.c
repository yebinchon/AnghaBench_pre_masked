
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cx18_mdl {scalar_t__ readpos; int bytesused; int * curr_buf; } ;
struct cx18_buffer {scalar_t__ readpos; int bytesused; int buf; } ;
struct TYPE_2__ {int inserted_frame; int * sliced_mpeg_size; int * sliced_mpeg_data; struct cx18_buffer sliced_mpeg_buf; struct cx18_mdl sliced_mpeg_mdl; } ;
struct cx18 {TYPE_1__ vbi; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct cx18 *VAR_1)
{
 struct cx18_mdl *VAR_2 = &VAR_1->vbi.sliced_mpeg_mdl;
 struct cx18_buffer *VAR_3 = &VAR_1->vbi.sliced_mpeg_buf;
 int VAR_4 = VAR_1->vbi.inserted_frame % VAR_0;

 VAR_3->buf = VAR_1->vbi.sliced_mpeg_data[VAR_4];
 VAR_3->bytesused = VAR_1->vbi.sliced_mpeg_size[VAR_4];
 VAR_3->readpos = 0;

 VAR_2->curr_buf = ((void*)0);
 VAR_2->bytesused = VAR_1->vbi.sliced_mpeg_size[VAR_4];
 VAR_2->readpos = 0;
}
