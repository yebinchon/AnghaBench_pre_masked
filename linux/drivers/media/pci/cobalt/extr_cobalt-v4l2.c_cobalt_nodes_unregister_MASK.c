
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct cobalt_stream {int is_dummy; int is_audio; struct video_device vdev; } ;
struct cobalt {struct cobalt_stream* streams; } ;


 int VAR_0 ;
 int FUNC_0 (struct cobalt_stream*) ;
 int FUNC_1 (struct video_device*) ;

void FUNC_2(struct cobalt *VAR_1)
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct cobalt_stream *VAR_3 = VAR_1->streams + VAR_2;
  struct video_device *VAR_4 = &VAR_3->vdev;

  if (!VAR_3->is_audio)
   FUNC_1(VAR_4);
  else if (!VAR_3->is_dummy)
   FUNC_0(VAR_3);
 }
}
