
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct usb_device {unsigned int devnum; scalar_t__ speed; } ;
struct fotg210_iso_stream {int usecs; int highspeed; long bandwidth; int bEndpointAddress; unsigned int interval; unsigned int maxp; struct usb_device* udev; void* buf2; void* buf1; void* buf0; } ;
struct fotg210_hcd {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_2 (struct fotg210_hcd*,unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;
 int FUNC_5 (scalar_t__,int,int,unsigned int) ;
 unsigned int FUNC_6 (struct usb_device*,int,int) ;
 unsigned int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct fotg210_hcd *VAR_2,
  struct fotg210_iso_stream *VAR_3, struct usb_device *VAR_4,
  int VAR_5, unsigned VAR_6)
{
 u32 VAR_7;
 unsigned VAR_8, VAR_9;
 int VAR_10;
 long VAR_11;
 unsigned VAR_12;





 VAR_8 = FUNC_7(VAR_5);
 VAR_10 = FUNC_8(VAR_5) ? VAR_0 : 0;
 VAR_9 = FUNC_6(VAR_4, VAR_5, !VAR_10);
 if (VAR_10)
  VAR_7 = (1 << 11);
 else
  VAR_7 = 0;

 VAR_9 = FUNC_4(VAR_9);
 VAR_12 = FUNC_3(VAR_9);
 VAR_7 |= VAR_9;
 VAR_9 *= VAR_12;

 VAR_3->buf0 = FUNC_2(VAR_2, (VAR_8 << 8) | VAR_4->devnum);
 VAR_3->buf1 = FUNC_2(VAR_2, VAR_7);
 VAR_3->buf2 = FUNC_2(VAR_2, VAR_12);




 if (VAR_4->speed == VAR_1) {
  VAR_6 <<= 3;
  VAR_3->usecs = FUNC_1(FUNC_5(VAR_4->speed,
    VAR_10, 1, VAR_9));
  VAR_3->usecs /= 8;
 } else {
  VAR_3->highspeed = 1;
  VAR_3->usecs = FUNC_0(VAR_9);
 }
 VAR_11 = VAR_3->usecs * 8;
 VAR_11 /= VAR_6;

 VAR_3->bandwidth = VAR_11;
 VAR_3->udev = VAR_4;
 VAR_3->bEndpointAddress = VAR_10 | VAR_8;
 VAR_3->interval = VAR_6;
 VAR_3->maxp = VAR_9;
}
