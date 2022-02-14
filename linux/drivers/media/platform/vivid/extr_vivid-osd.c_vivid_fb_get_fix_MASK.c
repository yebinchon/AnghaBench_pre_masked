
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {int display_byte_stride; int video_buffer_size; int video_pbase; } ;
struct fb_fix_screeninfo {int xpanstep; int ypanstep; int accel; int line_length; scalar_t__ ywrapstep; int visual; int type; int smem_len; int smem_start; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vivid_dev*,int,char*) ;
 int FUNC_1 (struct fb_fix_screeninfo*,int ,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct vivid_dev *VAR_3, struct fb_fix_screeninfo *VAR_4)
{
 FUNC_0(VAR_3, 1, "vivid_fb_get_fix\n");
 FUNC_1(VAR_4, 0, sizeof(struct fb_fix_screeninfo));
 FUNC_2(VAR_4->id, "vioverlay fb", sizeof(VAR_4->id));
 VAR_4->smem_start = VAR_3->video_pbase;
 VAR_4->smem_len = VAR_3->video_buffer_size;
 VAR_4->type = VAR_1;
 VAR_4->visual = VAR_2;
 VAR_4->xpanstep = 1;
 VAR_4->ypanstep = 1;
 VAR_4->ywrapstep = 0;
 VAR_4->line_length = VAR_3->display_byte_stride;
 VAR_4->accel = VAR_0;
 return 0;
}
