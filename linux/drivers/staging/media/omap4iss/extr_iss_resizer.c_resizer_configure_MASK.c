
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_mbus_framefmt {int height; int width; scalar_t__ code; } ;
struct TYPE_2__ {int bpl_value; } ;
struct iss_resizer_device {scalar_t__ input; TYPE_1__ video_out; struct v4l2_mbus_framefmt* formats; } ;
struct iss_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
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
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (struct iss_device*,int ,int ,int ) ;
 int FUNC_1 (struct iss_device*,int ,int ,int ,int ) ;
 int FUNC_2 (struct iss_device*,int ,int ,int) ;
 struct iss_device* FUNC_3 (struct iss_resizer_device*) ;

__attribute__((used)) static void FUNC_4(struct iss_resizer_device *VAR_33)
{
 struct iss_device *VAR_34 = FUNC_3(VAR_33);
 struct v4l2_mbus_framefmt *VAR_35, *VAR_36;

 VAR_35 = &VAR_33->formats[VAR_4];
 VAR_36 = &VAR_33->formats[VAR_5];




 FUNC_0(VAR_34, VAR_2, VAR_8,
      VAR_9);


 FUNC_1(VAR_34, VAR_2, VAR_8,
         VAR_10,
         VAR_33->input == VAR_3 ?
         VAR_10 : 0);


 FUNC_0(VAR_34, VAR_2, VAR_13,
      VAR_15);


 FUNC_0(VAR_34, VAR_2, VAR_13,
      VAR_14);


 FUNC_0(VAR_34, VAR_2, VAR_22,
      VAR_23);


 FUNC_2(VAR_34, VAR_2, VAR_16, 0);
 FUNC_2(VAR_34, VAR_2, VAR_11, 0);
 FUNC_2(VAR_34, VAR_2, VAR_17,
        VAR_35->height - 2);
 FUNC_2(VAR_34, VAR_2, VAR_12,
        VAR_35->width - 1);

 FUNC_2(VAR_34, VAR_2, VAR_21, 0);
 FUNC_2(VAR_34, VAR_2, VAR_20, 0);

 FUNC_2(VAR_34, VAR_2, VAR_25,
        VAR_36->height - 2);
 FUNC_2(VAR_34, VAR_2, VAR_24,
        VAR_36->width - 1);

 FUNC_2(VAR_34, VAR_2, VAR_32, 0x100);
 FUNC_2(VAR_34, VAR_2, VAR_19, 0x100);


 FUNC_2(VAR_34, VAR_2, VAR_31, 0);
 FUNC_2(VAR_34, VAR_2, VAR_30,
        VAR_36->height - 1);

 FUNC_2(VAR_34, VAR_2, VAR_29,
        VAR_33->video_out.bpl_value);


 if ((VAR_35->code == VAR_0) &&
     (VAR_36->code == VAR_1)) {
  FUNC_2(VAR_34, VAR_2, VAR_18,
         VAR_6 | VAR_7);


  FUNC_2(VAR_34, VAR_2, VAR_28,
         0);
  FUNC_2(VAR_34, VAR_2, VAR_27,
         VAR_36->height - 1);

  FUNC_2(VAR_34, VAR_2, VAR_26,
         VAR_33->video_out.bpl_value);
 } else {
  FUNC_2(VAR_34, VAR_2, VAR_18, 0);
 }
}
