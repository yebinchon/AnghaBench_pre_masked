
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct video_device {int dummy; } ;
typedef void v4l2_subdev_selection ;
typedef void v4l2_subdev_mbus_code_enum ;
typedef void v4l2_subdev_frame_size_enum ;
typedef void v4l2_subdev_frame_interval_enum ;
struct v4l2_subdev_frame_interval {void* reserved; } ;
typedef void v4l2_subdev_format ;
struct v4l2_subdev_fh {unsigned int pad; } ;
struct v4l2_subdev_edid {int dummy; } ;
struct v4l2_subdev_crop {void* reserved; int rect; int pad; int which; } ;
struct v4l2_subdev {int flags; int name; TYPE_4__* ops; TYPE_1__* v4l2_dev; } ;
struct v4l2_standard {int dummy; } ;
struct v4l2_fh {int ctrl_handler; } ;
struct v4l2_enum_dv_timings {int dummy; } ;
struct v4l2_dv_timings_cap {int dummy; } ;
struct v4l2_dbg_register {int dummy; } ;
struct TYPE_7__ {int addr; int type; } ;
struct v4l2_dbg_chip_info {int name; int flags; TYPE_2__ match; } ;
struct file {int f_flags; struct v4l2_fh* private_data; } ;
typedef int sel ;
struct TYPE_10__ {void* reserved; } ;
struct TYPE_9__ {TYPE_3__* core; } ;
struct TYPE_8__ {int g_register; int s_register; } ;
struct TYPE_6__ {int mdev; } ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
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
 int FUNC_1 (void*,int ,int) ;
 int VAR_27 ;
 int FUNC_2 (char*,int ) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_37 ;
 struct v4l2_subdev_fh* FUNC_4 (struct v4l2_fh*) ;
 int VAR_38 ;
 long FUNC_5 (struct v4l2_fh*,void*,int) ;
 long FUNC_6 (int ,void*) ;
 long FUNC_7 (int ,struct video_device*,int ,void*) ;
 long FUNC_8 (int ,void*) ;
 long FUNC_9 (int ,void*) ;
 long FUNC_10 (int ,void*) ;
 long FUNC_11 (struct v4l2_fh*,int ,void*) ;
 long FUNC_12 (struct v4l2_fh*,int ,struct video_device*,int ,void*) ;
 long FUNC_13 (struct v4l2_subdev*,int ,int ,...) ;
 long FUNC_14 (int ,struct video_device*,int ,void*) ;
 long FUNC_15 (struct v4l2_standard*,int ) ;
 struct v4l2_subdev* FUNC_16 (struct video_device*) ;
 int VAR_39 ;
 struct video_device* FUNC_17 (struct file*) ;

__attribute__((used)) static long FUNC_18(struct file *VAR_40, unsigned int VAR_41, void *VAR_42)
{
 struct video_device *VAR_43 = FUNC_17(VAR_40);
 struct v4l2_subdev *VAR_44 = FUNC_16(VAR_43);
 struct v4l2_fh *VAR_45 = VAR_40->private_data;





 switch (VAR_41) {
 case 156:
  if (!VAR_45->ctrl_handler)
   return -VAR_3;
  return FUNC_9(VAR_45->ctrl_handler, VAR_42);

 case 154:
  if (!VAR_45->ctrl_handler)
   return -VAR_3;
  return FUNC_8(VAR_45->ctrl_handler, VAR_42);

 case 155:
  if (!VAR_45->ctrl_handler)
   return -VAR_3;
  return FUNC_10(VAR_45->ctrl_handler, VAR_42);

 case 160:
  if (!VAR_45->ctrl_handler)
   return -VAR_3;
  return FUNC_6(VAR_45->ctrl_handler, VAR_42);

 case 132:
  if (!VAR_45->ctrl_handler)
   return -VAR_3;
  return FUNC_11(VAR_45, VAR_45->ctrl_handler, VAR_42);

 case 158:
  if (!VAR_45->ctrl_handler)
   return -VAR_3;
  return FUNC_7(VAR_45->ctrl_handler,
     VAR_43, VAR_44->v4l2_dev->mdev, VAR_42);

 case 130:
  if (!VAR_45->ctrl_handler)
   return -VAR_3;
  return FUNC_12(VAR_45, VAR_45->ctrl_handler,
     VAR_43, VAR_44->v4l2_dev->mdev, VAR_42);

 case 129:
  if (!VAR_45->ctrl_handler)
   return -VAR_3;
  return FUNC_14(VAR_45->ctrl_handler,
       VAR_43, VAR_44->v4l2_dev->mdev, VAR_42);

 case 161:
  if (!(VAR_44->flags & VAR_10))
   return -VAR_2;

  return FUNC_5(VAR_45, VAR_42, VAR_40->f_flags & VAR_5);

 case 133:
  return FUNC_13(VAR_44, VAR_11, VAR_37, VAR_45, VAR_42);

 case 128:
  return FUNC_13(VAR_44, VAR_11, VAR_38, VAR_45, VAR_42);
 case 157: {
  int VAR_46;

  FUNC_2("%s: =================  START STATUS  =================\n",
   VAR_44->name);
  VAR_46 = FUNC_13(VAR_44, VAR_11, VAR_26);
  FUNC_2("%s: ==================  END STATUS  ==================\n",
   VAR_44->name);
  return VAR_46;
 }
 default:
  return FUNC_13(VAR_44, VAR_11, VAR_25, VAR_41, VAR_42);
 }

 return 0;
}
