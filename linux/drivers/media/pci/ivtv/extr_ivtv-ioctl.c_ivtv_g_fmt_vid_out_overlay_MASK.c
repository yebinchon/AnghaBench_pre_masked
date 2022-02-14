
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int height; int width; scalar_t__ left; scalar_t__ top; } ;
struct v4l2_window {TYPE_2__ w; int * bitmap; scalar_t__ clipcount; int * clips; int field; int global_alpha; int chromakey; } ;
struct TYPE_5__ {struct v4l2_window win; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct ivtv_stream {int caps; } ;
struct TYPE_7__ {int height; int width; } ;
struct ivtv {TYPE_3__ osd_rect; int osd_global_alpha; int osd_chroma_key; int osd_video_pbase; struct ivtv_stream* streams; } ;
struct file {int dummy; } ;
struct TYPE_8__ {size_t type; struct ivtv* itv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (void*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4, struct v4l2_format *VAR_5)
{
 struct ivtv *VAR_6 = FUNC_0(VAR_4)->itv;
 struct ivtv_stream *VAR_7 = &VAR_6->streams[FUNC_0(VAR_4)->type];
 struct v4l2_window *VAR_8 = &VAR_5->fmt.win;

 if (!(VAR_7->caps & VAR_1))
  return -VAR_0;
 if (!VAR_6->osd_video_pbase)
  return -VAR_0;
 VAR_8->chromakey = VAR_6->osd_chroma_key;
 VAR_8->global_alpha = VAR_6->osd_global_alpha;
 VAR_8->field = VAR_2;
 VAR_8->clips = ((void*)0);
 VAR_8->clipcount = 0;
 VAR_8->bitmap = ((void*)0);
 VAR_8->w.top = VAR_8->w.left = 0;
 VAR_8->w.width = VAR_6->osd_rect.width;
 VAR_8->w.height = VAR_6->osd_rect.height;
 return 0;
}
