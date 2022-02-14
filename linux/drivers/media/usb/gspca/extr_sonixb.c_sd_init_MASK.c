
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int usb_err; } ;
typedef int __u8 ;


 int FUNC_0 (struct gspca_dev*,int,int const*,int) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_0)
{
 const __u8 VAR_1 = 0x09;

 FUNC_0(VAR_0, 0x01, &VAR_1, 1);

 return VAR_0->usb_err;
}
