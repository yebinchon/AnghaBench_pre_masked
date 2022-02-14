
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv_stream {int caps; } ;
struct ivtv_open_id {size_t type; struct ivtv* itv; } ;
struct ivtv {int osd_video_pbase; struct ivtv_stream* streams; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ivtv_open_id* FUNC_0 (void*) ;
 int FUNC_1 (struct ivtv*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4, unsigned int VAR_5)
{
 struct ivtv_open_id *VAR_6 = FUNC_0(VAR_4);
 struct ivtv *VAR_7 = VAR_6->itv;
 struct ivtv_stream *VAR_8 = &VAR_7->streams[FUNC_0(VAR_4)->type];

 if (!(VAR_8->caps & VAR_2))
  return -VAR_1;
 if (!VAR_7->osd_video_pbase)
  return -VAR_1;

 FUNC_1(VAR_7, VAR_0, 1, VAR_5 != 0);

 return 0;
}
