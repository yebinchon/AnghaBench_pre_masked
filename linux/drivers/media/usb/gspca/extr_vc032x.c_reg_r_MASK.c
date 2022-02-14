
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gspca_dev {scalar_t__ usb_err; int * usb_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int,int,int,...) ;
 int FUNC_1 (struct gspca_dev*,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_1,
    u16 VAR_2,
    u16 VAR_3,
    u16 VAR_4)
{
 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_1->usb_err < 0)
  return;
 if (VAR_4 == 1)
  FUNC_0(VAR_1, VAR_0, "GET %02x 0001 %04x %02x\n",
     VAR_2, VAR_3,
     VAR_1->usb_buf[0]);
 else
  FUNC_0(VAR_1, VAR_0, "GET %02x 0001 %04x %*ph\n",
     VAR_2, VAR_3, 3, VAR_1->usb_buf);
}
