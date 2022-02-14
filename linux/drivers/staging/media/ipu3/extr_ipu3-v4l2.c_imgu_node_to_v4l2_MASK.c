
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct video_device {int device_caps; int * ioctl_ops; } ;
struct TYPE_4__ {int dataformat; } ;
struct TYPE_3__ {TYPE_2__ meta; } ;
struct v4l2_format {int type; TYPE_1__ fmt; } ;



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
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_2(u32 VAR_14, struct video_device *VAR_15,
         struct v4l2_format *VAR_16)
{
 u32 VAR_17;


 FUNC_0(VAR_14 >= VAR_0);

 switch (VAR_14) {
 case 130:
  VAR_17 = VAR_9;
  VAR_16->type = VAR_4;
  VAR_15->ioctl_ops = &VAR_12;
  break;
 case 129:
  VAR_17 = VAR_6;
  VAR_16->type = VAR_2;
  VAR_16->fmt.meta.dataformat = VAR_10;
  VAR_15->ioctl_ops = &VAR_13;
  FUNC_1(&VAR_16->fmt.meta);
  break;
 case 128:
  VAR_17 = VAR_5;
  VAR_16->type = VAR_1;
  VAR_16->fmt.meta.dataformat = VAR_11;
  VAR_15->ioctl_ops = &VAR_13;
  FUNC_1(&VAR_16->fmt.meta);
  break;
 default:
  VAR_17 = VAR_8;
  VAR_16->type = VAR_3;
  VAR_15->ioctl_ops = &VAR_12;
 }

 VAR_15->device_caps = VAR_7 | VAR_17;
}
