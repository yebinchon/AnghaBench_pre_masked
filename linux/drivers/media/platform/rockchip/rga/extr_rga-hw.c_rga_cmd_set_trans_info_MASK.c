
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_22__ {void* up_scale_factor; void* down_scale_factor; } ;
union rga_src_y_factor {void* val; TYPE_5__ data; } ;
struct TYPE_21__ {void* up_scale_factor; void* down_scale_factor; } ;
union rga_src_x_factor {void* val; TYPE_4__ data; } ;
struct TYPE_23__ {int vir_stride; int vir_width; } ;
union rga_src_vir_info {void* val; TYPE_6__ data; } ;
struct TYPE_14__ {scalar_t__ format; scalar_t__ rot_mode; int mir_mode; int vscl_mode; int hscl_mode; void* csc_mode; int swap; } ;
union rga_src_info {void* val; TYPE_10__ data; } ;
struct TYPE_24__ {unsigned int act_height; unsigned int act_width; } ;
union rga_src_act_info {void* val; TYPE_7__ data; } ;
struct TYPE_25__ {int vir_stride; } ;
union rga_dst_vir_info {void* val; TYPE_8__ data; } ;
struct TYPE_19__ {scalar_t__ format; void* csc_mode; int swap; } ;
union rga_dst_info {void* val; TYPE_2__ data; } ;
struct TYPE_26__ {unsigned int act_height; unsigned int act_width; } ;
union rga_dst_act_info {void* val; TYPE_9__ data; } ;
typedef void* u32 ;
struct TYPE_20__ {scalar_t__ major; scalar_t__ minor; } ;
struct rockchip_rga {void** cmdbuf_virt; TYPE_3__ version; } ;
struct TYPE_16__ {unsigned int height; unsigned int width; unsigned int left; unsigned int top; } ;
struct TYPE_17__ {int colorspace; int stride; TYPE_1__* fmt; TYPE_12__ crop; } ;
struct rga_ctx {int rotate; TYPE_13__ out; TYPE_13__ in; scalar_t__ hflip; scalar_t__ vflip; struct rockchip_rga* rga; } ;
struct TYPE_15__ {void* v_off; void* u_off; void* y_off; } ;
struct rga_corners_addr_offset {TYPE_11__ left_top; } ;
struct rga_addr_offset {void* v_off; void* u_off; void* y_off; } ;
struct TYPE_18__ {scalar_t__ hw_format; int color_swap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;

 int FUNC_0 (unsigned int) ;
 struct rga_corners_addr_offset FUNC_1 (TYPE_13__*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 void* FUNC_2 (unsigned int,unsigned int) ;
 struct rga_addr_offset* FUNC_3 (struct rga_corners_addr_offset*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(struct rga_ctx *VAR_31)
{
 struct rockchip_rga *VAR_32 = VAR_31->rga;
 u32 *VAR_33 = VAR_32->cmdbuf_virt;
 unsigned int VAR_34, VAR_35;
 unsigned int VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41, VAR_42, VAR_43;
 union rga_src_info VAR_44;
 union rga_dst_info VAR_45;
 union rga_src_x_factor VAR_46;
 union rga_src_y_factor VAR_47;
 union rga_src_vir_info VAR_48;
 union rga_src_act_info VAR_49;
 union rga_dst_vir_info VAR_50;
 union rga_dst_act_info VAR_51;

 struct rga_addr_offset *VAR_52;
 struct rga_corners_addr_offset VAR_53;
 struct rga_corners_addr_offset VAR_54;

 VAR_36 = VAR_31->in.crop.height;
 VAR_37 = VAR_31->in.crop.width;
 VAR_38 = VAR_31->in.crop.left;
 VAR_39 = VAR_31->in.crop.top;
 VAR_40 = VAR_31->out.crop.height;
 VAR_41 = VAR_31->out.crop.width;
 VAR_42 = VAR_31->out.crop.left;
 VAR_43 = VAR_31->out.crop.top;

 VAR_44.val = VAR_33[(VAR_17 - VAR_8) >> 2];
 VAR_45.val = VAR_33[(VAR_5 - VAR_8) >> 2];
 VAR_46.val = VAR_33[(VAR_28 - VAR_8) >> 2];
 VAR_47.val = VAR_33[(VAR_29 - VAR_8) >> 2];
 VAR_48.val = VAR_33[(VAR_24 - VAR_8) >> 2];
 VAR_49.val = VAR_33[(VAR_9 - VAR_8) >> 2];
 VAR_50.val = VAR_33[(VAR_6 - VAR_8) >> 2];
 VAR_51.val = VAR_33[(VAR_1 - VAR_8) >> 2];

 VAR_44.data.format = VAR_31->in.fmt->hw_format;
 VAR_44.data.swap = VAR_31->in.fmt->color_swap;
 VAR_45.data.format = VAR_31->out.fmt->hw_format;
 VAR_45.data.swap = VAR_31->out.fmt->color_swap;

 if (VAR_31->in.fmt->hw_format >= VAR_0) {
  if (VAR_31->out.fmt->hw_format < VAR_0) {
   switch (VAR_31->in.colorspace) {
   case 128:
    VAR_44.data.csc_mode =
     VAR_13;
    break;
   default:
    VAR_44.data.csc_mode =
     VAR_12;
    break;
   }
  }
 }

 if (VAR_31->out.fmt->hw_format >= VAR_0) {
  switch (VAR_31->out.colorspace) {
  case 128:
   VAR_45.data.csc_mode = VAR_13;
   break;
  default:
   VAR_45.data.csc_mode = VAR_4;
   break;
  }
 }

 if (VAR_31->vflip)
  VAR_44.data.mir_mode |= VAR_18;

 if (VAR_31->hflip)
  VAR_44.data.mir_mode |= VAR_19;

 switch (VAR_31->rotate) {
 case 90:
  VAR_44.data.rot_mode = VAR_23;
  break;
 case 180:
  VAR_44.data.rot_mode = VAR_21;
  break;
 case 270:
  VAR_44.data.rot_mode = VAR_22;
  break;
 default:
  VAR_44.data.rot_mode = VAR_20;
  break;
 }







 if (VAR_44.data.rot_mode == VAR_23 ||
     VAR_44.data.rot_mode == VAR_22) {
  if (VAR_32->version.major == 0 || VAR_32->version.minor == 0) {
   if (VAR_41 == VAR_36)
    VAR_36 -= 8;
   if (FUNC_0(VAR_37 - VAR_40) < 16)
    VAR_37 -= 16;
  }

  VAR_35 = VAR_41;
  VAR_34 = VAR_40;
 } else {
  VAR_34 = VAR_41;
  VAR_35 = VAR_40;
 }

 if (VAR_37 == VAR_34) {
  VAR_44.data.hscl_mode = VAR_15;
  VAR_46.val = 0;
 } else if (VAR_37 > VAR_34) {
  VAR_44.data.hscl_mode = VAR_14;
  VAR_46.data.down_scale_factor =
   FUNC_2(VAR_37, VAR_34) + 1;
 } else {
  VAR_44.data.hscl_mode = VAR_16;
  VAR_46.data.up_scale_factor =
   FUNC_2(VAR_37 - 1, VAR_34 - 1);
 }

 if (VAR_36 == VAR_35) {
  VAR_44.data.vscl_mode = VAR_26;
  VAR_47.val = 0;
 } else if (VAR_36 > VAR_35) {
  VAR_44.data.vscl_mode = VAR_25;
  VAR_47.data.down_scale_factor =
   FUNC_2(VAR_36, VAR_35) + 1;
 } else {
  VAR_44.data.vscl_mode = VAR_27;
  VAR_47.data.up_scale_factor =
   FUNC_2(VAR_36 - 1, VAR_35 - 1);
 }





 VAR_48.data.vir_stride = VAR_31->in.stride >> 2;
 VAR_48.data.vir_width = VAR_31->in.stride >> 2;

 VAR_49.data.act_height = VAR_36 - 1;
 VAR_49.data.act_width = VAR_37 - 1;

 VAR_50.data.vir_stride = VAR_31->out.stride >> 2;
 VAR_51.data.act_height = VAR_40 - 1;
 VAR_51.data.act_width = VAR_41 - 1;




 VAR_54 = FUNC_1(&VAR_31->in, VAR_38, VAR_39,
       VAR_37, VAR_36);




 VAR_53 = FUNC_1(&VAR_31->out, VAR_42, VAR_43, VAR_41, VAR_40);
 VAR_52 = FUNC_3(&VAR_53, VAR_44.data.rot_mode,
      VAR_44.data.mir_mode);

 VAR_33[(VAR_30 - VAR_8) >> 2] =
  VAR_54.left_top.y_off;
 VAR_33[(VAR_10 - VAR_8) >> 2] =
  VAR_54.left_top.u_off;
 VAR_33[(VAR_11 - VAR_8) >> 2] =
  VAR_54.left_top.v_off;

 VAR_33[(VAR_28 - VAR_8) >> 2] = VAR_46.val;
 VAR_33[(VAR_29 - VAR_8) >> 2] = VAR_47.val;
 VAR_33[(VAR_24 - VAR_8) >> 2] = VAR_48.val;
 VAR_33[(VAR_9 - VAR_8) >> 2] = VAR_49.val;

 VAR_33[(VAR_17 - VAR_8) >> 2] = VAR_44.val;

 VAR_33[(VAR_7 - VAR_8) >> 2] =
  VAR_52->y_off;
 VAR_33[(VAR_2 - VAR_8) >> 2] =
  VAR_52->u_off;
 VAR_33[(VAR_3 - VAR_8) >> 2] =
  VAR_52->v_off;

 VAR_33[(VAR_6 - VAR_8) >> 2] = VAR_50.val;
 VAR_33[(VAR_1 - VAR_8) >> 2] = VAR_51.val;

 VAR_33[(VAR_5 - VAR_8) >> 2] = VAR_45.val;
}
