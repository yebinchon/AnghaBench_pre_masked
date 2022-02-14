
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int global_alpha; int chromakey; } ;
struct TYPE_5__ {TYPE_1__ win; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct ivtv_stream {int caps; } ;
struct ivtv {int osd_video_pbase; struct ivtv_stream* streams; } ;
struct file {int dummy; } ;
struct TYPE_6__ {size_t type; struct ivtv* itv; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (void*) ;
 int FUNC_1 (struct file*,void*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3, struct v4l2_format *VAR_4)
{
 struct ivtv *VAR_5 = FUNC_0(VAR_3)->itv;
 struct ivtv_stream *VAR_6 = &VAR_5->streams[FUNC_0(VAR_3)->type];
 u32 VAR_7 = VAR_4->fmt.win.chromakey;
 u8 VAR_8 = VAR_4->fmt.win.global_alpha;

 if (!(VAR_6->caps & VAR_1))
  return -VAR_0;
 if (!VAR_5->osd_video_pbase)
  return -VAR_0;
 FUNC_1(VAR_2, VAR_3, VAR_4);
 VAR_4->fmt.win.chromakey = VAR_7;
 VAR_4->fmt.win.global_alpha = VAR_8;
 return 0;
}
