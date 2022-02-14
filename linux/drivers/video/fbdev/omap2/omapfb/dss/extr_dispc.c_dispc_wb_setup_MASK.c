
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct omap_video_timings {int x_res; int y_res; scalar_t__ vbp; scalar_t__ vsw; scalar_t__ vfp; } ;
struct omap_dss_writeback_info {int color_mode; int rotation_type; int pre_mult_alpha; int mirror; int rotation; int height; int width; int buf_width; int p_uv_addr; int paddr; } ;
typedef enum omap_plane { ____Placeholder_omap_plane } omap_plane ;
typedef enum omap_overlay_caps { ____Placeholder_omap_overlay_caps } omap_overlay_caps ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int ,int,int,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int,int,int ) ;
 int FUNC_5 (int,int,int ,int ,int ,int const,int const,int,int,int ,int ,int ,int ,int ,int const,int ,int const,int ,int const,struct omap_video_timings const*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (scalar_t__,int) ;

int FUNC_9(const struct omap_dss_writeback_info *VAR_3,
  bool VAR_4, const struct omap_video_timings *VAR_5)
{
 int VAR_6;
 u32 VAR_7;
 enum omap_plane VAR_8 = VAR_2;
 const int VAR_9 = 0, VAR_10 = 0;
 const u8 VAR_11 = 0, VAR_12 = 0;
 const bool VAR_13 = 0;
 bool VAR_14;
 int VAR_15 = VAR_5->x_res;
 int VAR_16 = VAR_5->y_res;
 enum omap_overlay_caps VAR_17 =
  VAR_1 | VAR_0;

 FUNC_2("dispc_wb_setup, pa %x, pa_uv %x, %d,%d -> %dx%d, cmode %x, "
  "rot %d, mir %d\n", VAR_3->paddr, VAR_3->p_uv_addr, VAR_15,
  VAR_16, VAR_3->width, VAR_3->height, VAR_3->color_mode, VAR_3->rotation,
  VAR_3->mirror);

 VAR_6 = FUNC_5(VAR_8, VAR_17, VAR_3->paddr, VAR_3->p_uv_addr,
  VAR_3->buf_width, VAR_9, VAR_10, VAR_15, VAR_16, VAR_3->width,
  VAR_3->height, VAR_3->color_mode, VAR_3->rotation, VAR_3->mirror, VAR_11,
  VAR_3->pre_mult_alpha, VAR_12, VAR_3->rotation_type,
  VAR_13, VAR_5, VAR_4);

 switch (VAR_3->color_mode) {
 case 132:
 case 131:
 case 135:
 case 130:
 case 133:
 case 134:
 case 128:
 case 129:
  VAR_14 = 1;
  break;
 default:
  VAR_14 = 0;
  break;
 }


 VAR_7 = FUNC_6(FUNC_0(VAR_8));
 VAR_7 = FUNC_3(VAR_7, VAR_14, 10, 10);
 VAR_7 = FUNC_3(VAR_7, VAR_4, 19, 19);
 if (VAR_4)
  VAR_7 = FUNC_3(VAR_7, 1, 26, 24);
 else
  VAR_7 = FUNC_3(VAR_7, 0, 26, 24);
 FUNC_7(FUNC_0(VAR_8), VAR_7);

 if (VAR_4) {

  FUNC_4(FUNC_1(VAR_8), 0, 7, 0);
 } else {
  int VAR_18;

  VAR_18 = FUNC_8(VAR_5->vfp + VAR_5->vsw +
   VAR_5->vbp, 255);


  FUNC_4(FUNC_1(VAR_8), VAR_18, 7, 0);
 }

 return VAR_6;
}
