
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int * v4l2_dev; } ;
struct cx18 {scalar_t__* stream_buffers; TYPE_1__* streams; } ;
struct TYPE_3__ {scalar_t__ buffers; int vbuf_q; struct video_device video_dev; int * dvb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct video_device*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct cx18 *VAR_4, int VAR_5)
{
 struct video_device *VAR_6;
 int VAR_7;


 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {


  if (VAR_7 == VAR_1) {
   if (VAR_4->streams[VAR_7].dvb != ((void*)0)) {
    if (VAR_5)
     FUNC_0(&VAR_4->streams[VAR_7]);
    FUNC_2(VAR_4->streams[VAR_7].dvb);
    VAR_4->streams[VAR_7].dvb = ((void*)0);
    FUNC_1(&VAR_4->streams[VAR_7]);
   }
   continue;
  }


  if (VAR_7 == VAR_0) {

   if (VAR_4->stream_buffers[VAR_7] != 0) {
    VAR_4->stream_buffers[VAR_7] = 0;






    if (VAR_4->streams[VAR_7].buffers != 0)
     FUNC_1(&VAR_4->streams[VAR_7]);
   }
   continue;
  }


  VAR_6 = &VAR_4->streams[VAR_7].video_dev;

  if (VAR_6->v4l2_dev == ((void*)0))
   continue;

  if (VAR_7 == VAR_2)
   FUNC_4(&VAR_4->streams[VAR_7].vbuf_q);

  FUNC_1(&VAR_4->streams[VAR_7]);

  FUNC_3(VAR_6);
 }
}
