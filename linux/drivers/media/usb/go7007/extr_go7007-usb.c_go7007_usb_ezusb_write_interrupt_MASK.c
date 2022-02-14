
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct go7007_usb {int usbdev; } ;
struct go7007 {int dev; int * usb_buf; struct go7007_usb* hpi_context; } ;
typedef int status_reg ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (int ,int ,int,int,int,int ,int *,int,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct go7007 *VAR_6,
      int VAR_7, int VAR_8)
{
 struct go7007_usb *VAR_9 = VAR_6->hpi_context;
 int VAR_10, VAR_11;
 u16 VAR_12 = 0;
 int VAR_13 = 500;

 FUNC_3("WriteInterrupt: %04x %04x\n", VAR_7, VAR_8);

 for (VAR_10 = 0; VAR_10 < 100; ++VAR_10) {
  VAR_11 = FUNC_4(VAR_9->usbdev,
    FUNC_5(VAR_9->usbdev, 0), 0x14,
    VAR_5 | VAR_4 | VAR_3,
    0, VAR_0, VAR_6->usb_buf,
    sizeof(VAR_12), VAR_13);
  if (VAR_11 < 0)
   break;
  VAR_12 = FUNC_1(*((__le16 *)VAR_6->usb_buf));
  if (!(VAR_12 & 0x0010))
   break;
  FUNC_2(10);
 }
 if (VAR_11 < 0)
  goto write_int_error;
 if (VAR_10 == 100) {
  FUNC_0(VAR_6->dev, "device is hung, status reg = 0x%04x\n", VAR_12);
  return -1;
 }
 VAR_11 = FUNC_4(VAR_9->usbdev, FUNC_6(VAR_9->usbdev, 0), 0x12,
   VAR_5 | VAR_4, VAR_8,
   VAR_2, ((void*)0), 0, VAR_13);
 if (VAR_11 < 0)
  goto write_int_error;
 VAR_11 = FUNC_4(VAR_9->usbdev, FUNC_6(VAR_9->usbdev, 0),
   0x12, VAR_5 | VAR_4, VAR_7,
   VAR_1, ((void*)0), 0, VAR_13);
 if (VAR_11 < 0)
  goto write_int_error;
 return 0;

write_int_error:
 FUNC_0(VAR_6->dev, "error in WriteInterrupt: %d\n", VAR_11);
 return VAR_11;
}
