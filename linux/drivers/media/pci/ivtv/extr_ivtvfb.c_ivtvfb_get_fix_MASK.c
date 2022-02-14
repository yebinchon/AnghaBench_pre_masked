
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd_info {int bits_per_pixel; int display_byte_stride; int video_buffer_size; int video_pbase; } ;
struct ivtv {struct osd_info* osd_info; } ;
struct fb_fix_screeninfo {int xpanstep; int ypanstep; int accel; int line_length; scalar_t__ ywrapstep; int visual; int type; int smem_len; int smem_start; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct fb_fix_screeninfo*,int ,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct ivtv *VAR_4, struct fb_fix_screeninfo *VAR_5)
{
 struct osd_info *VAR_6 = VAR_4->osd_info;

 FUNC_0("ivtvfb_get_fix\n");
 FUNC_1(VAR_5, 0, sizeof(struct fb_fix_screeninfo));
 FUNC_2(VAR_5->id, "cx23415 TV out", sizeof(VAR_5->id));
 VAR_5->smem_start = VAR_6->video_pbase;
 VAR_5->smem_len = VAR_6->video_buffer_size;
 VAR_5->type = VAR_1;
 VAR_5->visual = (VAR_6->bits_per_pixel == 8) ? VAR_2 : VAR_3;
 VAR_5->xpanstep = 1;
 VAR_5->ypanstep = 1;
 VAR_5->ywrapstep = 0;
 VAR_5->line_length = VAR_6->display_byte_stride;
 VAR_5->accel = VAR_0;
 return 0;
}
