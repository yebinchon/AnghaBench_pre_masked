
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int queue; } ;
struct dvb_usb_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*,int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct video_device*) ;
 struct dvb_usb_device* FUNC_3 (struct video_device*) ;

__attribute__((used)) static void FUNC_4(struct video_device *VAR_1)
{
 struct dvb_usb_device *VAR_2 = FUNC_3(VAR_1);

 FUNC_0(VAR_2, VAR_0, "video device release\n");

 FUNC_1(VAR_1->queue);

 FUNC_2(VAR_1);
}
