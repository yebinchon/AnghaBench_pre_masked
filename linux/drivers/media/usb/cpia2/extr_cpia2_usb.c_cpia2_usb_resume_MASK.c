
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct TYPE_4__ {int stream_mode; } ;
struct TYPE_3__ {TYPE_2__ camera_state; } ;
struct camera_data {int v4l2_lock; TYPE_1__ params; scalar_t__ streaming; int hdl; } ;


 int FUNC_0 (struct camera_data*,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct camera_data* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct usb_interface *VAR_0)
{
 struct camera_data *VAR_1 = FUNC_4(VAR_0);

 FUNC_2(&VAR_1->v4l2_lock);
 FUNC_5(&VAR_1->hdl);
 if (VAR_1->streaming) {
  VAR_1->streaming = 0;
  FUNC_0(VAR_1,
    VAR_1->params.camera_state.stream_mode);
 }
 FUNC_3(&VAR_1->v4l2_lock);

 FUNC_1(&VAR_0->dev, "coming out of suspend..\n");
 return 0;
}
