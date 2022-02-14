
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_mbus_config {unsigned long flags; int type; } ;
struct pxa_camera_dev {int channels; int platform_flags; TYPE_2__* current_fmt; } ;
struct TYPE_4__ {TYPE_1__* host_fmt; } ;
struct TYPE_3__ {int bits_per_sample; int fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 int FUNC_0 (int ,char*,unsigned long,int) ;
 int FUNC_1 (int ,char*,unsigned long,unsigned long) ;
 int VAR_12 ;
 int FUNC_2 (struct pxa_camera_dev*) ;
 int FUNC_3 (struct pxa_camera_dev*,unsigned long,int ) ;
 unsigned long FUNC_4 (struct v4l2_mbus_config*,unsigned long) ;
 int VAR_13 ;
 int FUNC_5 (struct pxa_camera_dev*,int ,int ,struct v4l2_mbus_config*) ;
 int FUNC_6 (struct pxa_camera_dev*,int ,unsigned long*) ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_7(struct pxa_camera_dev *VAR_15)
{
 struct v4l2_mbus_config VAR_16 = {.type = VAR_7,};
 u32 VAR_17 = VAR_15->current_fmt->host_fmt->fourcc;
 unsigned long VAR_18, VAR_19;
 int VAR_20;

 VAR_20 = FUNC_6(VAR_15,
      VAR_15->current_fmt->host_fmt->bits_per_sample,
      &VAR_18);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_5(VAR_15, VAR_14, VAR_12, &VAR_16);
 if (!VAR_20) {
  VAR_19 = FUNC_4(&VAR_16,
         VAR_18);
  if (!VAR_19) {
   FUNC_1(FUNC_2(VAR_15),
     "Flags incompatible: camera 0x%x, host 0x%lx\n",
     VAR_16.flags, VAR_18);
   return -VAR_0;
  }
 } else if (VAR_20 != -VAR_1) {
  return VAR_20;
 } else {
  VAR_19 = VAR_18;
 }

 VAR_15->channels = 1;


 if ((VAR_19 & VAR_5) &&
     (VAR_19 & VAR_6)) {
  if (VAR_15->platform_flags & VAR_2)
   VAR_19 &= ~VAR_5;
  else
   VAR_19 &= ~VAR_6;
 }

 if ((VAR_19 & VAR_10) &&
     (VAR_19 & VAR_11)) {
  if (VAR_15->platform_flags & VAR_4)
   VAR_19 &= ~VAR_10;
  else
   VAR_19 &= ~VAR_11;
 }

 if ((VAR_19 & VAR_9) &&
     (VAR_19 & VAR_8)) {
  if (VAR_15->platform_flags & VAR_3)
   VAR_19 &= ~VAR_9;
  else
   VAR_19 &= ~VAR_8;
 }

 VAR_16.flags = VAR_19;
 VAR_20 = FUNC_5(VAR_15, VAR_14, VAR_13, &VAR_16);
 if (VAR_20 < 0 && VAR_20 != -VAR_1) {
  FUNC_0(FUNC_2(VAR_15),
   "camera s_mbus_config(0x%lx) returned %d\n",
   VAR_19, VAR_20);
  return VAR_20;
 }

 FUNC_3(VAR_15, VAR_19, VAR_17);

 return 0;
}
