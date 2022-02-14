
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {scalar_t__ usb_err; int usb_buf; } ;
struct dtcs033_usb_requests {int bRequestType; int wLength; int wIndex; int wValue; int bRequest; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int,int,int ,char*) ;
 int FUNC_1 (struct gspca_dev*,char*,int,int) ;
 int FUNC_2 (struct gspca_dev*,int,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_2,
      const struct dtcs033_usb_requests *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 const struct dtcs033_usb_requests *VAR_6;

 while ((VAR_5 < VAR_4) && (VAR_2->usb_err >= 0)) {

  VAR_6 = &VAR_3[VAR_5];

  FUNC_2(VAR_2, VAR_6->bRequestType, VAR_6->bRequest,
   VAR_6->wValue, VAR_6->wIndex, VAR_6->wLength);

  if (VAR_2->usb_err < 0) {

   FUNC_1(VAR_2, "usb error request no: %d / %d\n",
      VAR_5, VAR_4);
  } else if (VAR_6->bRequestType & VAR_1) {

   FUNC_0(VAR_2, VAR_0,
      "USB IN (%d) returned[%d] %3ph %s",
      VAR_5,
      VAR_6->wLength,
      VAR_2->usb_buf,
      VAR_6->wLength > 3 ? "...\n" : "\n");
  }

  VAR_5++;
 }
 return VAR_2->usb_err;
}
