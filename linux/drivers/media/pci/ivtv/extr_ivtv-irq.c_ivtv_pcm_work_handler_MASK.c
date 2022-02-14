
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ivtv_stream {int q_free; int q_full; int q_io; } ;
struct ivtv_buffer {scalar_t__ readpos; scalar_t__ bytesused; scalar_t__ buf; } ;
struct ivtv {int alsa; int (* pcm_announce_callback ) (int ,int *,size_t) ;struct ivtv_stream* streams; } ;


 size_t VAR_0 ;
 struct ivtv_buffer* FUNC_0 (struct ivtv_stream*,int *) ;
 int FUNC_1 (struct ivtv_stream*,struct ivtv_buffer*,int *) ;
 int FUNC_2 (int ,int *,size_t) ;

__attribute__((used)) static void FUNC_3(struct ivtv *VAR_1)
{
 struct ivtv_stream *VAR_2 = &VAR_1->streams[VAR_0];
 struct ivtv_buffer *VAR_3;



 while (1) {






  VAR_3 = FUNC_0(VAR_2, &VAR_2->q_io);
  if (VAR_3 == ((void*)0))
   VAR_3 = FUNC_0(VAR_2, &VAR_2->q_full);
  if (VAR_3 == ((void*)0))
   break;

  if (VAR_3->readpos < VAR_3->bytesused)
   VAR_1->pcm_announce_callback(VAR_1->alsa,
    (u8 *)(VAR_3->buf + VAR_3->readpos),
    (size_t)(VAR_3->bytesused - VAR_3->readpos));

  FUNC_1(VAR_2, VAR_3, &VAR_2->q_free);
 }
}
