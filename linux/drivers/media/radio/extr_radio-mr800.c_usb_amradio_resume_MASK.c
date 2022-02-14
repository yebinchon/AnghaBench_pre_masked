
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct amradio_device {int lock; int muted; int curfreq; int stereo; } ;


 int FUNC_0 (struct amradio_device*,int ) ;
 int FUNC_1 (struct amradio_device*,int) ;
 int FUNC_2 (struct amradio_device*,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct amradio_device* FUNC_6 (int ) ;
 int FUNC_7 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_8(struct usb_interface *VAR_0)
{
 struct amradio_device *VAR_1 = FUNC_6(FUNC_7(VAR_0));

 FUNC_4(&VAR_1->lock);
 FUNC_2(VAR_1, VAR_1->stereo);
 FUNC_0(VAR_1, VAR_1->curfreq);

 if (!VAR_1->muted)
  FUNC_1(VAR_1, 0);

 FUNC_5(&VAR_1->lock);

 FUNC_3(&VAR_0->dev, "coming out of suspend..\n");
 return 0;
}
