
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct vb2_buffer {int dummy; } ;
struct v4l2_h264_dpb_entry {int flags; int frame_num; int pic_num; } ;
struct hantro_dev {int dummy; } ;
struct TYPE_3__ {int * p; int * b1; int * b0; } ;
struct TYPE_4__ {TYPE_1__ reflists; struct v4l2_h264_dpb_entry* dpb; } ;
struct hantro_ctx {TYPE_2__ h264_dec; struct hantro_dev* dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int const) ;
 int FUNC_5 (int const) ;
 int FUNC_6 (int const) ;
 int FUNC_7 (int const) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int const) ;
 int FUNC_10 (int const) ;
 int FUNC_11 (int const) ;
 int FUNC_12 (int const) ;
 int FUNC_13 (int const) ;
 int FUNC_14 (int const) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int const) ;
 int FUNC_17 (int const) ;
 int FUNC_18 (int const) ;
 int FUNC_19 (int const) ;
 int FUNC_20 (int const) ;
 int FUNC_21 (int const) ;
 int VAR_1 ;
 int FUNC_22 (int) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct vb2_buffer* FUNC_25 (struct hantro_ctx*,int) ;
 int FUNC_26 (struct vb2_buffer*,int ) ;
 int FUNC_27 (struct hantro_dev*,int,int ) ;

__attribute__((used)) static void FUNC_28(struct hantro_ctx *VAR_6)
{
 struct v4l2_h264_dpb_entry *VAR_7 = VAR_6->h264_dec.dpb;
 const u8 *VAR_8, *VAR_9, *VAR_10;
 struct hantro_dev *VAR_11 = VAR_6->dev;
 u32 VAR_12 = 0;
 u32 VAR_13 = 0;
 int VAR_14;
 u32 VAR_15;
 int VAR_16;





 for (VAR_16 = 0; VAR_16 < VAR_3; ++VAR_16) {
  if (VAR_7[VAR_16].flags & VAR_4)
   VAR_13 |= FUNC_0(VAR_3 - 1 - VAR_16);

  if (VAR_7[VAR_16].flags & VAR_5)
   VAR_12 |= FUNC_0(VAR_3 - 1 - VAR_16);
 }
 FUNC_27(VAR_11, VAR_13 << 16, VAR_2);
 FUNC_27(VAR_11, VAR_12 << 16, VAR_1);







 for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16 += 2) {
  VAR_15 = 0;
  if (VAR_7[VAR_16].flags & VAR_5)
   VAR_15 |= FUNC_23(VAR_7[VAR_16].pic_num);
  else
   VAR_15 |= FUNC_23(VAR_7[VAR_16].frame_num);

  if (VAR_7[VAR_16 + 1].flags & VAR_5)
   VAR_15 |= FUNC_24(VAR_7[VAR_16 + 1].pic_num);
  else
   VAR_15 |= FUNC_24(VAR_7[VAR_16 + 1].frame_num);

  FUNC_27(VAR_11, VAR_15, FUNC_22(VAR_16 / 2));
 }

 VAR_8 = VAR_6->h264_dec.reflists.b0;
 VAR_9 = VAR_6->h264_dec.reflists.b1;
 VAR_10 = VAR_6->h264_dec.reflists.p;





 VAR_14 = 0;
 for (VAR_16 = 0; VAR_16 < 15; VAR_16 += 3) {
  VAR_15 = FUNC_12(VAR_8[VAR_16]) |
        FUNC_13(VAR_8[VAR_16 + 1]) |
        FUNC_14(VAR_8[VAR_16 + 2]) |
        FUNC_9(VAR_9[VAR_16]) |
        FUNC_10(VAR_9[VAR_16 + 1]) |
        FUNC_11(VAR_9[VAR_16 + 2]);
  FUNC_27(VAR_11, VAR_15, FUNC_8(VAR_14++));
 }






 VAR_15 = FUNC_3(VAR_8[15]) |
       FUNC_2(VAR_9[15]) |
       FUNC_4(VAR_10[0]) |
       FUNC_5(VAR_10[1]) |
       FUNC_6(VAR_10[2]) |
       FUNC_7(VAR_10[3]);
 FUNC_27(VAR_11, VAR_15, VAR_0);





 VAR_14 = 0;
 for (VAR_16 = 4; VAR_16 < VAR_3; VAR_16 += 6) {
  VAR_15 = FUNC_16(VAR_10[VAR_16]) |
        FUNC_17(VAR_10[VAR_16 + 1]) |
        FUNC_18(VAR_10[VAR_16 + 2]) |
        FUNC_19(VAR_10[VAR_16 + 3]) |
        FUNC_20(VAR_10[VAR_16 + 4]) |
        FUNC_21(VAR_10[VAR_16 + 5]);
  FUNC_27(VAR_11, VAR_15, FUNC_15(VAR_14++));
 }


 for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++) {
  struct vb2_buffer *VAR_17 = FUNC_25(VAR_6, VAR_16);

  FUNC_27(VAR_11, FUNC_26(VAR_17, 0),
       FUNC_1(VAR_16));
 }
}
