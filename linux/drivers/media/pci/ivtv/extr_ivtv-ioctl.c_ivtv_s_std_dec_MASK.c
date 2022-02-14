
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct TYPE_2__ {int width; int height; scalar_t__ top; scalar_t__ left; } ;
struct yuv_playback_info {int osd_full_w; int osd_full_h; TYPE_1__ main_rect; } ;
struct ivtv {int std_out; int is_out_60hz; int is_out_50hz; int osd_info; TYPE_1__ main_rect; int serialize_lock; int vsync_waitq; struct yuv_playback_info yuv_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct ivtv*,int ,int ,int) ;
 int FUNC_4 (struct ivtv*,int ,int,int,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int ) ;
 int VAR_5 ;
 int FUNC_10 (int ) ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_11(struct ivtv *VAR_8, v4l2_std_id VAR_9)
{
 struct yuv_playback_info *VAR_10 = &VAR_8->yuv_info;
 FUNC_0(VAR_7);
 int VAR_11;


 VAR_8->std_out = VAR_9;
 VAR_8->is_out_60hz = (VAR_9 & VAR_4) ? 1 : 0;
 VAR_8->is_out_50hz = !VAR_8->is_out_60hz;
 FUNC_3(VAR_8, VAR_6, VAR_5, VAR_8->std_out);







 FUNC_7(&VAR_8->serialize_lock);
 for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
  FUNC_8(&VAR_8->vsync_waitq, &VAR_7,
    VAR_3);
  if ((FUNC_9(VAR_2) >> 16) < 100)
   break;
  FUNC_10(FUNC_5(25));
 }
 FUNC_2(&VAR_8->vsync_waitq, &VAR_7);
 FUNC_6(&VAR_8->serialize_lock);

 if (VAR_11 == 4)
  FUNC_1("Mode change failed to sync to decoder\n");

 FUNC_4(VAR_8, VAR_0, 1, VAR_8->is_out_50hz);
 VAR_8->main_rect.left = 0;
 VAR_8->main_rect.top = 0;
 VAR_8->main_rect.width = 720;
 VAR_8->main_rect.height = VAR_8->is_out_50hz ? 576 : 480;
 FUNC_4(VAR_8, VAR_1, 4,
  720, VAR_8->main_rect.height, 0, 0);
 VAR_10->main_rect = VAR_8->main_rect;
 if (!VAR_8->osd_info) {
  VAR_10->osd_full_w = 720;
  VAR_10->osd_full_h = VAR_8->is_out_50hz ? 576 : 480;
 }
}
