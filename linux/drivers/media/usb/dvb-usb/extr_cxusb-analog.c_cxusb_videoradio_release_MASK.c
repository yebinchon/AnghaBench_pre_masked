
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {scalar_t__ vfl_type; } ;
struct file {int dummy; } ;
struct dvb_usb_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dvb_usb_device*) ;
 int FUNC_1 (struct dvb_usb_device*,int ,char*) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*) ;
 struct video_device* FUNC_4 (struct file*) ;
 struct dvb_usb_device* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_2)
{
 struct video_device *VAR_3 = FUNC_4(VAR_2);
 struct dvb_usb_device *VAR_4 = FUNC_5(VAR_2);
 int VAR_5;

 FUNC_1(VAR_4, VAR_0, "got release\n");

 if (VAR_3->vfl_type == VAR_1)
  VAR_5 = FUNC_3(VAR_2);
 else
  VAR_5 = FUNC_2(VAR_2);

 FUNC_0(VAR_4);

 return VAR_5;
}
