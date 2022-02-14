
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ readpos; int bytesused; int buf; } ;
struct TYPE_3__ {int inserted_frame; TYPE_2__ sliced_mpeg_buf; int * sliced_mpeg_size; int * sliced_mpeg_data; } ;
struct ivtv {TYPE_1__ vbi; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ivtv *VAR_1)
{
 int VAR_2 = VAR_1->vbi.inserted_frame % VAR_0;

 VAR_1->vbi.sliced_mpeg_buf.buf = VAR_1->vbi.sliced_mpeg_data[VAR_2];
 VAR_1->vbi.sliced_mpeg_buf.bytesused = VAR_1->vbi.sliced_mpeg_size[VAR_2];
 VAR_1->vbi.sliced_mpeg_buf.readpos = 0;
}
