
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct TYPE_3__ {int release; } ;
struct camera_data {int wq_stream; int v4l2_lock; TYPE_1__ v4l2_dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct camera_data*) ;
 struct camera_data* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char*) ;

struct camera_data *FUNC_7(struct usb_interface *VAR_2)
{
 struct camera_data *VAR_3;

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);

 if (!VAR_3) {
  FUNC_0("couldn't kmalloc cpia2 struct\n");
  return ((void*)0);
 }

 VAR_3->v4l2_dev.release = VAR_1;
 if (FUNC_5(&VAR_2->dev, &VAR_3->v4l2_dev) < 0) {
  FUNC_6(&VAR_3->v4l2_dev, "couldn't register v4l2_device\n");
  FUNC_2(VAR_3);
  return ((void*)0);
 }

 FUNC_4(&VAR_3->v4l2_lock);
 FUNC_1(&VAR_3->wq_stream);

 return VAR_3;
}
