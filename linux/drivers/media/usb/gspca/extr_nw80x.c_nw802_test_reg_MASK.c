
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct gspca_dev {scalar_t__* usb_buf; } ;


 int FUNC_0 (struct gspca_dev*,int ,int) ;
 int FUNC_1 (struct gspca_dev*,int ,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_0,
   u16 VAR_1,
   u8 VAR_2)
{

 FUNC_1(VAR_0, VAR_1, &VAR_2, 1);


 FUNC_0(VAR_0, VAR_1, 1);

 return VAR_0->usb_buf[0] == VAR_2;
}
