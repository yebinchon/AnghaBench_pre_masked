
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_8__ {int denominator; int numerator; } ;
struct TYPE_9__ {TYPE_1__ time_per_frame; } ;
struct TYPE_10__ {int error; } ;
struct hva_ctx {TYPE_2__ ctrls; TYPE_3__ ctrl_handler; int name; } ;
struct device {int dummy; } ;
typedef enum v4l2_mpeg_video_h264_sei_fp_arrangement_type { ____Placeholder_v4l2_mpeg_video_h264_sei_fp_arrangement_type } v4l2_mpeg_video_h264_sei_fp_arrangement_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 struct device* FUNC_0 (struct hva_ctx*) ;
 int FUNC_1 (struct device*,char*,int ,int) ;
 int VAR_29 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int *,int ,int,int,int,int) ;
 int FUNC_6 (TYPE_3__*,int *,int ,int,int,int) ;

__attribute__((used)) static int FUNC_7(struct hva_ctx *VAR_30)
{
 struct device *VAR_31 = FUNC_0(VAR_30);
 u64 VAR_32;
 enum v4l2_mpeg_video_h264_sei_fp_arrangement_type VAR_33 =
  VAR_27;

 FUNC_3(&VAR_30->ctrl_handler, 15);

 FUNC_6(&VAR_30->ctrl_handler, &VAR_29,
          VAR_4,
          VAR_18,
          0,
          VAR_18);

 FUNC_5(&VAR_30->ctrl_handler, &VAR_29,
     VAR_5,
     1, 60, 1, 16);

 FUNC_5(&VAR_30->ctrl_handler, &VAR_29,
     VAR_3,
     1000, 60000000, 1000, 20000000);

 VAR_32 = ~(1 << VAR_17);
 FUNC_6(&VAR_30->ctrl_handler, &VAR_29,
          VAR_2,
          VAR_17,
          VAR_32,
          VAR_17);

 VAR_32 = ~((1 << VAR_23) |
   (1 << VAR_25) |
   (1 << VAR_24) |
   (1 << VAR_26));
 FUNC_6(&VAR_30->ctrl_handler, &VAR_29,
          VAR_12,
          VAR_26,
          VAR_32,
          VAR_24);

 FUNC_6(&VAR_30->ctrl_handler, &VAR_29,
          VAR_9,
          VAR_22,
          0,
          VAR_21);

 FUNC_6(&VAR_30->ctrl_handler, &VAR_29,
          VAR_8,
          VAR_19,
          0,
          VAR_20);

 FUNC_5(&VAR_30->ctrl_handler, &VAR_29,
     VAR_7,
     1, 10000, 1, 3000);

 FUNC_5(&VAR_30->ctrl_handler, &VAR_29,
     VAR_6,
     0, 1, 1, 0);

 FUNC_5(&VAR_30->ctrl_handler, &VAR_29,
     VAR_11,
     0, 51, 1, 5);

 FUNC_5(&VAR_30->ctrl_handler, &VAR_29,
     VAR_10,
     0, 51, 1, 51);

 FUNC_5(&VAR_30->ctrl_handler, &VAR_29,
     VAR_15,
     0, 1, 1, 1);

 VAR_32 = ~(1 << VAR_28);
 FUNC_6(&VAR_30->ctrl_handler, &VAR_29,
          VAR_16,
          VAR_28,
          VAR_32,
          VAR_28);

 FUNC_5(&VAR_30->ctrl_handler, &VAR_29,
     VAR_14,
     0, 1, 1, 0);

 VAR_32 = ~(1 << VAR_33);
 FUNC_6(&VAR_30->ctrl_handler, &VAR_29,
          VAR_13,
          VAR_33,
          VAR_32,
          VAR_33);

 if (VAR_30->ctrl_handler.error) {
  int VAR_34 = VAR_30->ctrl_handler.error;

  FUNC_1(VAR_31, "%s controls setup failed (%d)\n",
   VAR_30->name, VAR_34);
  FUNC_2(&VAR_30->ctrl_handler);
  return VAR_34;
 }

 FUNC_4(&VAR_30->ctrl_handler);


 VAR_30->ctrls.time_per_frame.numerator = VAR_1;
 VAR_30->ctrls.time_per_frame.denominator = VAR_0;

 return 0;
}
