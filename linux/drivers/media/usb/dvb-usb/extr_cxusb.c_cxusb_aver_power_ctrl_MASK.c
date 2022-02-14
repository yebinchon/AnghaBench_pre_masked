
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {scalar_t__ state; int udev; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct dvb_usb_device*,int,int const*,int,int*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_device *VAR_5, int VAR_6)
{
 int VAR_7;

 if (!VAR_6)
  return FUNC_1(VAR_5, VAR_1, ((void*)0), 0, ((void*)0), 0);
 if (VAR_5->state == VAR_3 &&
     FUNC_4(VAR_5->udev, 0, 0) < 0)
  FUNC_2("set interface failed");
 do {

 } while (!(VAR_7 = FUNC_1(VAR_5, VAR_2, ((void*)0), 0, ((void*)0), 0)) &&
   !(VAR_7 = FUNC_1(VAR_5, 0x15, ((void*)0), 0, ((void*)0), 0)) &&
   !(VAR_7 = FUNC_1(VAR_5, 0x17, ((void*)0), 0, ((void*)0), 0)) && 0);

 if (!VAR_7) {




  int VAR_8;
  u8 VAR_9;
  static const u8 VAR_10[] = {
   0x0e, 0x2, 0x00, 0x7f,
   0x0e, 0x2, 0x02, 0xfe,
   0x0e, 0x2, 0x02, 0x01,
   0x0e, 0x2, 0x00, 0x03,
   0x0e, 0x2, 0x0d, 0x40,
   0x0e, 0x2, 0x0e, 0x87,
   0x0e, 0x2, 0x0f, 0x8e,
   0x0e, 0x2, 0x10, 0x01,
   0x0e, 0x2, 0x14, 0xd7,
   0x0e, 0x2, 0x47, 0x88,
  };
  FUNC_3(20);
  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_10); VAR_8 += 4 / sizeof(u8)) {
   VAR_7 = FUNC_1(VAR_5, VAR_0,
          VAR_10 + VAR_8, 4, &VAR_9, 1);
   if (VAR_7)
    break;
   if (VAR_9 != 0x8)
    return -VAR_4;
  }
 }
 return VAR_7;
}
