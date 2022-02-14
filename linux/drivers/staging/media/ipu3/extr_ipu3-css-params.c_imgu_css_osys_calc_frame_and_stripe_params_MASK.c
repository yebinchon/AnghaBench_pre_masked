
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct imgu_css_stripe_params {int input_width; int input_height; int* output_width; int* output_height; int* output_offset; unsigned int processing_mode; int phase_step; int phase_init_left_y; int phase_init_left_uv; int phase_init_top_y; int phase_init_top_uv; int pad_left_y; int pad_left_uv; int pad_right_y; int pad_right_uv; int pad_top_y; int pad_top_uv; int pad_bottom_y; int pad_bottom_uv; int crop_left_y; int crop_left_uv; int start_column_y; int start_column_uv; int chunk_width; int chunk_height; int block_width; int block_height; int crop_top_uv; int crop_top_y; int exp_shift; } ;
struct imgu_css_scaler_info {int phase_init; int pad_left; int pad_right; int crop_left; int phase_step; int crop_top; int exp_shift; } ;
struct imgu_css_reso {int input_width; int input_height; scalar_t__* pin_width; scalar_t__* pin_height; int chunk_width; int block_width; int chunk_height; int block_height; int * pin_stride; int * pin_format; int input_format; } ;
struct imgu_css_pipe {TYPE_5__* queue; TYPE_1__* rect; } ;
struct imgu_css_frame_params {int width; int height; int enable; unsigned int format; unsigned int tiling; int scaled; void* crop_top; void* crop_left; int stride; scalar_t__ reduce_range; scalar_t__ mirror; scalar_t__ flip; } ;
struct imgu_css {int dev; struct imgu_css_pipe* pipes; } ;
struct imgu_abi_osys_config {int dummy; } ;
struct TYPE_8__ {int width; int height; } ;
struct TYPE_9__ {TYPE_3__ mpix; } ;
struct TYPE_10__ {TYPE_4__ fmt; TYPE_2__* css_fmt; int width_pad; } ;
struct TYPE_7__ {int frame_format; } ;
struct TYPE_6__ {int width; int height; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ,char*,unsigned int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int,int,int,int,int,int,int) ;
 int FUNC_5 (int,int,int,int,int) ;
 int FUNC_6 (int,int,int,int,int) ;
 int FUNC_7 (int,int,int,int,int,int,int,int) ;
 int FUNC_8 (int ,unsigned int*,unsigned int*) ;
 int FUNC_9 (int,int,int,int,struct imgu_abi_osys_config*,struct imgu_css_scaler_info*,struct imgu_css_scaler_info*,int*,int*,unsigned int*) ;
 int FUNC_10 (int ,int) ;
 void* FUNC_11 (int,int ) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (int,int) ;

__attribute__((used)) static int FUNC_14(
  struct imgu_css *VAR_17, unsigned int VAR_18,
  struct imgu_abi_osys_config *VAR_19,
  struct imgu_css_scaler_info *VAR_20,
  struct imgu_css_scaler_info *VAR_21,
  struct imgu_css_frame_params VAR_22[],
  struct imgu_css_stripe_params VAR_23[],
  unsigned int VAR_24)
{
 struct imgu_css_reso VAR_25;
 unsigned int VAR_26, VAR_27, VAR_28;
 u32 VAR_29, VAR_30, VAR_31, VAR_32;
 unsigned int VAR_33 = 0;
 struct imgu_css_pipe *VAR_34 = &VAR_17->pipes[VAR_24];

 VAR_29 = VAR_34->rect[VAR_15].width;
 VAR_30 = VAR_34->rect[VAR_15].height;
 VAR_31 = VAR_34->queue[VAR_14].fmt.mpix.width;
 VAR_32 = VAR_34->queue[VAR_14].fmt.mpix.height;




 VAR_25.input_width = VAR_34->rect[VAR_15].width;


 VAR_25.input_height = VAR_34->rect[VAR_15].height;

 VAR_25.input_format =
  VAR_34->queue[VAR_13].css_fmt->frame_format;

 VAR_25.pin_width[VAR_2] =
  VAR_34->queue[VAR_13].fmt.mpix.width;
 VAR_25.pin_height[VAR_2] =
  VAR_34->queue[VAR_13].fmt.mpix.height;
 VAR_25.pin_stride[VAR_2] =
  VAR_34->queue[VAR_13].width_pad;
 VAR_25.pin_format[VAR_2] =
  VAR_34->queue[VAR_13].css_fmt->frame_format;

 VAR_25.pin_width[VAR_3] =
  VAR_34->queue[VAR_14].fmt.mpix.width;
 VAR_25.pin_height[VAR_3] =
  VAR_34->queue[VAR_14].fmt.mpix.height;
 VAR_25.pin_stride[VAR_3] =
  VAR_34->queue[VAR_14].width_pad;
 VAR_25.pin_format[VAR_3] =
  VAR_34->queue[VAR_14].css_fmt->frame_format;



 VAR_22[VAR_2].width =
  VAR_34->queue[VAR_13].fmt.mpix.width;
 VAR_22[VAR_2].height =
  VAR_34->queue[VAR_13].fmt.mpix.height;
 VAR_22[VAR_3].width =
  VAR_34->queue[VAR_14].fmt.mpix.width;
 VAR_22[VAR_3].height =
  VAR_34->queue[VAR_14].fmt.mpix.height;
 VAR_22[VAR_3].crop_top = 0;
 VAR_22[VAR_3].crop_left = 0;

 for (VAR_27 = 0; VAR_27 < VAR_1; VAR_27++) {
  int VAR_35 = 0;
  int VAR_36 = 0;
  unsigned int VAR_37 = 0;
  unsigned int VAR_38 = 0;

  VAR_22[VAR_27].flip = 0;
  VAR_22[VAR_27].mirror = 0;
  VAR_22[VAR_27].reduce_range = 0;
  if (VAR_25.pin_width[VAR_27] != 0 && VAR_25.pin_height[VAR_27] != 0) {
   VAR_35 = 1;
   if (VAR_27 == VAR_2) {
    if (VAR_25.input_width < VAR_25.pin_width[VAR_27] ||
        VAR_25.input_height < VAR_25.pin_height[VAR_27])
     return -VAR_0;






    VAR_22[VAR_27].crop_left = FUNC_11(
      (VAR_25.input_width -
       VAR_25.pin_width[VAR_27]) / 2,
       VAR_9);
    VAR_22[VAR_27].crop_top = FUNC_11(
      (VAR_25.input_height -
       VAR_25.pin_height[VAR_27]) / 2,
       VAR_8);
   } else {
    if (VAR_25.pin_width[VAR_27] != VAR_25.input_width ||
        VAR_25.pin_height[VAR_27] != VAR_25.input_height) {
     VAR_36 = 1;
    }
   }
   FUNC_8(VAR_25.pin_format[VAR_27], &VAR_37,
       &VAR_38);
  } else {
   VAR_35 = 0;
  }
  VAR_22[VAR_27].enable = VAR_35;
  VAR_22[VAR_27].format = VAR_37;
  VAR_22[VAR_27].tiling = VAR_38;
  VAR_22[VAR_27].stride = VAR_25.pin_stride[VAR_27];
  VAR_22[VAR_27].scaled = VAR_36;
 }

 FUNC_9(VAR_29, VAR_30, VAR_31,
        VAR_32, VAR_19, VAR_20, VAR_21,
        &VAR_25.pin_width[VAR_3],
        &VAR_25.pin_height[VAR_3], &VAR_33);
 FUNC_2(VAR_17->dev, "osys scaler procmode is %u", VAR_33);
 VAR_26 = VAR_25.pin_width[VAR_3];

 if (VAR_26 < VAR_25.input_width / 2) {

  VAR_25.chunk_width = VAR_7;
  VAR_25.block_width = VAR_7;
 } else {
  VAR_25.chunk_width = VAR_7 / 2;
  VAR_25.block_width = VAR_7;
 }

 if (VAR_26 <= VAR_25.input_width * 7 / 8) {

  VAR_25.chunk_height = VAR_6;
  VAR_25.block_height = VAR_6;
 } else {
  VAR_25.chunk_height = VAR_6 / 2;
  VAR_25.block_height = VAR_6;
 }






 if (VAR_22[VAR_3].enable) {





  u32 VAR_39 = VAR_25.pin_width[VAR_3] -
   VAR_22[VAR_3].width;
  u32 VAR_40 = VAR_25.pin_height[VAR_3] -
   VAR_22[VAR_3].height;

  VAR_22[VAR_3].crop_left =
   FUNC_11(VAR_39 / 2, VAR_9);
  VAR_22[VAR_3].crop_top =
   FUNC_11(VAR_40 / 2, VAR_8);

  if (VAR_25.input_height % 4 || VAR_25.input_width % 8) {
   FUNC_3(VAR_17->dev, "OSYS input width is not multiple of 8 or\n");
   FUNC_3(VAR_17->dev, "height is not multiple of 4\n");
   return -VAR_0;
  }
 }



 if (VAR_22[VAR_3].enable) {
  VAR_26 = VAR_25.pin_width[VAR_3];
 } else {
  VAR_26 = VAR_25.input_width;
 }

 for (VAR_28 = 0; VAR_28 < VAR_18; VAR_28++) {
  int VAR_41 = 0;
  int VAR_42 = 0;
  int VAR_43 = 0;
  int VAR_44 = 0;
  int VAR_45 = VAR_20->phase_init;
  int VAR_46 = VAR_21->phase_init;
  int VAR_47 = 0;
  int VAR_48 = 0;
  int VAR_49 = 0;
  int VAR_50 = 0;
  int VAR_51 = VAR_20->pad_left;
  int VAR_52 = VAR_21->pad_left;
  int VAR_53 = VAR_20->pad_right;
  int VAR_54 = VAR_21->pad_right;
  int VAR_55 = VAR_20->crop_left;
  int VAR_56 = VAR_21->crop_left;
  int VAR_57 = VAR_25.input_width;
  int VAR_58 = 0;
  int VAR_59 = VAR_26;
  int VAR_60 = 0;
  int VAR_61 = 0;
  int VAR_62 = 0;
  int VAR_63 = 0;

  if (VAR_18 > 1) {
   if (VAR_28 > 0) {

    VAR_43 =
     VAR_26 * VAR_28 / VAR_18;
    VAR_43 =
     FUNC_12(VAR_43,
        VAR_16);
    VAR_44 = VAR_43 /
      VAR_5;
    VAR_41 =
     FUNC_5(
      VAR_43,
      VAR_10,
      VAR_20->phase_init,
      VAR_20->phase_step,
      VAR_20->pad_left);
    VAR_42 =
     FUNC_5(
      VAR_44,
      VAR_10,
      VAR_21->phase_init,
      VAR_21->phase_step,
      VAR_21->pad_left);


    VAR_45 =
     FUNC_6(
      VAR_43,
      VAR_10,
      VAR_20->phase_init,
      VAR_20->phase_step,
      VAR_20->pad_left);
    VAR_46 =
     FUNC_6(
      VAR_44,
      VAR_10,
      VAR_21->phase_init,
      VAR_21->phase_step,
      VAR_21->pad_left);





    VAR_61 = FUNC_12(VAR_41,
         VAR_25.chunk_width);
    VAR_62 =
     FUNC_12(VAR_42,
        VAR_25.chunk_width /
        VAR_5);

    if (VAR_61 != VAR_62 *
        VAR_5) {





     VAR_42 -= 1;
     VAR_56 += 1;
     VAR_46 -=
      VAR_20->phase_step;
     if (VAR_46 < 0)
      VAR_46 =
       VAR_46 +
       VAR_10;
    }







    VAR_63 =
     FUNC_13(VAR_42,
      VAR_25.chunk_width /
      VAR_5);

    if (VAR_42 ==
        VAR_63 - VAR_11) {




     VAR_42 -= 1;
     VAR_46 -=
      VAR_20->phase_step;
     if (VAR_46 < 0) {
      VAR_46 +=
       VAR_10;
      VAR_56 += 1;
     }
    }





    VAR_47 =
     FUNC_12(VAR_41,
        VAR_4);
    VAR_48 =
     FUNC_12(VAR_42,
        VAR_4 /
        VAR_5);
    VAR_49 = VAR_41 -
       VAR_47;
    VAR_50 = VAR_42 -
       VAR_48;


    VAR_51 = 0;
    VAR_52 = 0;
   }


   if (VAR_28 < VAR_18 - 1) {
    int VAR_64;

    VAR_53 = 0;
    VAR_54 = 0;

    VAR_64 = VAR_26 * (VAR_28 + 1) / VAR_18;
    VAR_64 = FUNC_12(VAR_64, 64);
    VAR_59 = VAR_64 -
       VAR_43;
   } else {
    VAR_59 = VAR_26 -
       VAR_43;
   }


   VAR_60 = VAR_59 /
      VAR_5;

   VAR_57 = VAR_49 +
    FUNC_4(
      VAR_59,
      VAR_10,
      VAR_45,
      VAR_20->phase_step,
      VAR_12,
      VAR_51,
      VAR_53);

   VAR_58 = VAR_50 +
    FUNC_4(
      VAR_60,
      VAR_10,
      VAR_46,
      VAR_21->phase_step,
      VAR_11,
      VAR_52,
      VAR_54);

   VAR_58 = FUNC_10(FUNC_1(
          VAR_57,
          VAR_5),
          VAR_58);

   VAR_57 = VAR_58 *
      VAR_5;

   if (VAR_28 >= VAR_18 - 1) {
    VAR_57 = VAR_25.input_width -
     VAR_47;




   }
   VAR_57 = FUNC_0(VAR_57, 8);
   VAR_59 =
    FUNC_7(
      VAR_57,
      VAR_10,
      VAR_45,
      VAR_20->phase_step,
      VAR_12,
      VAR_51,
      VAR_53,
      VAR_49);

   VAR_59 =
     FUNC_12(VAR_59,
        VAR_5);
  }




  {
   unsigned int VAR_65;
   int VAR_66 = 0;


   VAR_23[VAR_28].input_width = VAR_57;
   VAR_23[VAR_28].input_height = VAR_25.input_height;

   for (VAR_65 = 0; VAR_65 < VAR_1; VAR_65++) {
    if (VAR_22[VAR_65].scaled) {






     VAR_23[VAR_28].output_width[VAR_65] =
      VAR_59;
     VAR_23[VAR_28].output_height[VAR_65] =
      VAR_25.pin_height[VAR_65];
     VAR_23[VAR_28].output_offset[VAR_65] =
      VAR_43;

     VAR_66 += VAR_22[VAR_65].scaled;
    } else {

     VAR_23[VAR_28].output_width[VAR_65] =
      VAR_23[VAR_28].input_width;
     VAR_23[VAR_28].output_height[VAR_65] =
      VAR_23[VAR_28].input_height;
     VAR_23[VAR_28].output_offset[VAR_65] =
      VAR_47;
    }
   }


   VAR_23[VAR_28].processing_mode = VAR_33;
   VAR_23[VAR_28].phase_step = VAR_20->phase_step;
   VAR_23[VAR_28].exp_shift = VAR_20->exp_shift;
   VAR_23[VAR_28].phase_init_left_y =
    VAR_45;
   VAR_23[VAR_28].phase_init_left_uv =
    VAR_46;
   VAR_23[VAR_28].phase_init_top_y =
    VAR_20->phase_init;
   VAR_23[VAR_28].phase_init_top_uv =
    VAR_21->phase_init;
   VAR_23[VAR_28].pad_left_y = VAR_51;
   VAR_23[VAR_28].pad_left_uv = VAR_52;
   VAR_23[VAR_28].pad_right_y = VAR_53;
   VAR_23[VAR_28].pad_right_uv = VAR_54;
   VAR_23[VAR_28].pad_top_y = VAR_20->pad_left;
   VAR_23[VAR_28].pad_top_uv = VAR_21->pad_left;
   VAR_23[VAR_28].pad_bottom_y = VAR_20->pad_right;
   VAR_23[VAR_28].pad_bottom_uv =
    VAR_21->pad_right;
   VAR_23[VAR_28].crop_left_y = VAR_55;
   VAR_23[VAR_28].crop_top_y = VAR_20->crop_top;
   VAR_23[VAR_28].crop_left_uv = VAR_56;
   VAR_23[VAR_28].crop_top_uv = VAR_21->crop_top;
   VAR_23[VAR_28].start_column_y = VAR_49;
   VAR_23[VAR_28].start_column_uv = VAR_50;
   VAR_23[VAR_28].chunk_width = VAR_25.chunk_width;
   VAR_23[VAR_28].chunk_height = VAR_25.chunk_height;
   VAR_23[VAR_28].block_width = VAR_25.block_width;
   VAR_23[VAR_28].block_height = VAR_25.block_height;
  }
 }

 return 0;
}
