
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_device {int dummy; } ;
struct usb_interface {int dummy; } ;
struct TYPE_2__ {int mutex; } ;
struct shark_device {int v4l2_dev; TYPE_1__ tea; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct shark_device*) ;
 int FUNC_3 (TYPE_1__*) ;
 struct v4l2_device* FUNC_4 (struct usb_interface*) ;
 struct shark_device* FUNC_5 (struct v4l2_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_0)
{
 struct v4l2_device *VAR_1 = FUNC_4(VAR_0);
 struct shark_device *VAR_2 = FUNC_5(VAR_1);

 FUNC_0(&VAR_2->tea.mutex);
 FUNC_6(&VAR_2->v4l2_dev);
 FUNC_3(&VAR_2->tea);
 FUNC_1(&VAR_2->tea.mutex);

 FUNC_2(VAR_2);

 FUNC_7(&VAR_2->v4l2_dev);
}
