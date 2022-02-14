
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int usb_err; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int ,int ) ;
 int FUNC_1 (struct gspca_dev*,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct gspca_dev*) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_6, u8 VAR_7, u8 VAR_8)
{
 FUNC_0(VAR_6, VAR_0, "sccb write: %02x %02x\n", VAR_7, VAR_8);
 FUNC_1(VAR_6, VAR_4, VAR_7);
 FUNC_1(VAR_6, VAR_5, VAR_8);
 FUNC_1(VAR_6, VAR_3, VAR_2);

 if (!FUNC_3(VAR_6)) {
  FUNC_2("sccb_reg_write failed\n");
  VAR_6->usb_err = -VAR_1;
 }
}
