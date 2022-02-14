
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_13__ {int code; } ;
struct v4l2_subdev_format {TYPE_4__ format; int which; int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {int left; int width; int top; int height; } ;
struct v4l2_mbus_framefmt {int code; int height; scalar_t__ field; } ;
struct media_pad {int index; int entity; } ;
struct isp_parallel_cfg {int bt656; } ;
struct isp_format_info {unsigned int width; scalar_t__ code; } ;
struct isp_device {int dummy; } ;
struct TYPE_10__ {int req_lock; TYPE_8__* request; int table_work; int free_queue; TYPE_8__* active; } ;
struct TYPE_14__ {int bpl_value; } ;
struct TYPE_11__ {int entity; } ;
struct isp_ccdc_device {int bt656; scalar_t__ input; int output; TYPE_1__ lsc; struct v4l2_mbus_framefmt* formats; TYPE_5__ video_out; struct v4l2_rect crop; TYPE_2__ subdev; int * pads; scalar_t__ fields; } ;
struct TYPE_17__ {int list; } ;
struct TYPE_16__ {struct v4l2_subdev* external; } ;
struct TYPE_12__ {struct isp_parallel_cfg parallel; } ;
struct TYPE_15__ {TYPE_3__ bus; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
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
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;






 scalar_t__ VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 int FUNC_0 (TYPE_8__*) ;
 scalar_t__ FUNC_1 (struct isp_ccdc_device*,TYPE_8__*) ;
 int FUNC_2 (struct isp_ccdc_device*) ;
 int FUNC_3 (struct isp_ccdc_device*,int) ;
 int FUNC_4 (struct isp_ccdc_device*,int ,scalar_t__) ;
 int FUNC_5 (struct isp_ccdc_device*,struct isp_parallel_cfg*,unsigned int) ;
 int FUNC_6 (struct isp_ccdc_device*) ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_7 (struct isp_device*,int ,int ,int ) ;
 int FUNC_8 (struct isp_device*,int ,int ) ;
 int FUNC_9 (struct isp_device*,int ,int ,int ) ;
 int FUNC_10 (struct isp_device*,int,int ,int ) ;
 int FUNC_11 (int *,int *) ;
 struct media_pad* FUNC_12 (int *) ;
 struct v4l2_subdev* FUNC_13 (int ) ;
 int FUNC_14 (struct isp_device*,scalar_t__,struct isp_parallel_cfg*,unsigned int,unsigned int) ;
 struct isp_format_info* FUNC_15 (int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (int *,unsigned long) ;
 struct isp_device* FUNC_19 (struct isp_ccdc_device*) ;
 TYPE_7__* FUNC_20 (int *) ;
 int FUNC_21 (struct v4l2_subdev*,struct media_pad*,int ,int *,struct v4l2_subdev_format*) ;
 TYPE_6__* FUNC_22 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_23(struct isp_ccdc_device *VAR_40)
{
 struct isp_device *VAR_41 = FUNC_19(VAR_40);
 struct isp_parallel_cfg *VAR_42 = ((void*)0);
 struct v4l2_subdev *VAR_43;
 struct v4l2_mbus_framefmt *VAR_44;
 const struct v4l2_rect *VAR_45;
 const struct isp_format_info *VAR_46;
 struct v4l2_subdev_format VAR_47;
 unsigned int VAR_48;
 unsigned int VAR_49 = 0;
 struct media_pad *VAR_50;
 unsigned long VAR_51;
 unsigned int VAR_52;
 unsigned int VAR_53;
 unsigned int VAR_54;
 unsigned int VAR_55;
 u32 VAR_56;
 u32 VAR_57;

 VAR_40->bt656 = 0;
 VAR_40->fields = 0;

 VAR_50 = FUNC_12(&VAR_40->pads[VAR_3]);
 VAR_43 = FUNC_13(VAR_50->entity);
 if (VAR_40->input == VAR_0) {
  struct v4l2_subdev *VAR_58 =
   FUNC_20(&VAR_40->subdev.entity)->external;

  VAR_42 = &FUNC_22(VAR_58)->bus.parallel;
  VAR_40->bt656 = VAR_42->bt656;
 }


 VAR_44 = &VAR_40->formats[VAR_3];




 VAR_47.pad = VAR_50->index;
 VAR_47.which = VAR_34;
 if (!FUNC_21(VAR_43, VAR_50, VAR_39, ((void*)0), &VAR_47)) {
  VAR_46 = FUNC_15(VAR_47.format.code);
  VAR_49 = VAR_46->width;
 }

 VAR_46 = FUNC_15(VAR_44->code);
 VAR_48 = VAR_46->width;
 VAR_53 = VAR_49 - VAR_48;

 if (VAR_40->bt656)
  VAR_52 = VAR_25;
 else if (VAR_46->code == VAR_29)
  VAR_52 = VAR_26;
 else if (VAR_46->code == VAR_27)
  VAR_52 = VAR_24;
 else
  VAR_52 = VAR_25;

 FUNC_14(VAR_41, VAR_40->input, VAR_42, VAR_53, VAR_52);


 FUNC_5(VAR_40, VAR_42, VAR_48);

 VAR_56 = FUNC_8(VAR_41, VAR_30, VAR_10);




 VAR_56 &= ~VAR_14;

 if (VAR_40->output & VAR_1)
  VAR_56 |= VAR_15;
 else
  VAR_56 &= ~VAR_15;

 if (VAR_40->output & VAR_2)
  VAR_56 |= VAR_13;
 else
  VAR_56 &= ~VAR_13;


 switch (VAR_44->code) {
 case 129:
 case 128:
  VAR_57 = VAR_38;
  break;
 case 133:
 case 132:
  VAR_57 = VAR_35;
  break;
 case 131:
 case 130:
  VAR_57 = VAR_36;
  break;
 default:

  VAR_57 = VAR_37;
  break;
 }
 FUNC_3(VAR_40, VAR_57);




 FUNC_10(VAR_41, ((VAR_44->height - 2) << VAR_17) |
         ((VAR_44->height * 2 / 3) << VAR_18),
         VAR_30, VAR_16);


 VAR_44 = &VAR_40->formats[VAR_4];
 VAR_45 = &VAR_40->crop;






 if (VAR_40->bt656) {
  VAR_55 = VAR_45->left * 2;
  VAR_54 = VAR_45->width * 2 - 1;
 } else {
  VAR_55 = VAR_45->left;
  VAR_54 = VAR_45->width - 1;
 }

 FUNC_10(VAR_41, (VAR_55 << VAR_9) |
         (VAR_54 << VAR_8),
         VAR_30, VAR_7);
 FUNC_10(VAR_41, (VAR_45->top << VAR_22) |
         (VAR_45->top << VAR_23),
         VAR_30, VAR_21);
 FUNC_10(VAR_41, (VAR_45->height - 1)
   << VAR_20,
         VAR_30, VAR_19);

 FUNC_4(VAR_40, VAR_40->video_out.bpl_value,
      VAR_44->field);





 if (VAR_40->formats[VAR_3].field == VAR_31 &&
     (VAR_44->field == VAR_33 ||
      VAR_44->field == VAR_32))
  VAR_56 |= VAR_11;




 if (VAR_44->code == VAR_28)
  FUNC_9(VAR_41, VAR_30, VAR_5,
       VAR_6);
 else
  FUNC_7(VAR_41, VAR_30, VAR_5,
       VAR_6);





 if (FUNC_15(VAR_44->code)->width <= 8 || VAR_40->bt656)
  VAR_56 |= VAR_12;
 else
  VAR_56 &= ~VAR_12;

 FUNC_10(VAR_41, VAR_56, VAR_30, VAR_10);


 FUNC_6(VAR_40);


 FUNC_17(&VAR_40->lsc.req_lock, VAR_51);
 if (VAR_40->lsc.request == ((void*)0))
  goto unlock;

 FUNC_0(VAR_40->lsc.active);




 if (VAR_40->lsc.active == ((void*)0) &&
     FUNC_1(VAR_40, VAR_40->lsc.request) == 0) {
  VAR_40->lsc.active = VAR_40->lsc.request;
 } else {
  FUNC_11(&VAR_40->lsc.request->list, &VAR_40->lsc.free_queue);
  FUNC_16(&VAR_40->lsc.table_work);
 }

 VAR_40->lsc.request = ((void*)0);

unlock:
 FUNC_18(&VAR_40->lsc.req_lock, VAR_51);

 FUNC_2(VAR_40);
}
