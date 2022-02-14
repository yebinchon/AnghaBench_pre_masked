
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvc_streaming {scalar_t__ type; int queue; int vdev; TYPE_1__* chain; } ;
struct uvc_device {int dummy; } ;
struct TYPE_2__ {int caps; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct uvc_streaming*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct uvc_device*,struct uvc_streaming*,int *,int *,scalar_t__,int *,int *) ;
 int FUNC_3 (struct uvc_streaming*) ;

__attribute__((used)) static int FUNC_4(struct uvc_device *VAR_7,
  struct uvc_streaming *VAR_8)
{
 int VAR_9;


 VAR_9 = FUNC_3(VAR_8);
 if (VAR_9 < 0) {
  FUNC_1(VAR_0, "Failed to initialize the device (%d).\n",
      VAR_9);
  return VAR_9;
 }

 if (VAR_8->type == VAR_1)
  VAR_8->chain->caps |= VAR_3
   | VAR_2;
 else
  VAR_8->chain->caps |= VAR_4;

 FUNC_0(VAR_8);


 return FUNC_2(VAR_7, VAR_8, &VAR_8->vdev,
      &VAR_8->queue, VAR_8->type,
      &VAR_5, &VAR_6);
}
