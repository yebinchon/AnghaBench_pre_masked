
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int curr_mode; int usb_err; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct gspca_dev*,int,int) ;
 int FUNC_3 (struct gspca_dev*,int ,int ) ;
 int FUNC_4 (struct gspca_dev*,int ,int ) ;
 int FUNC_5 (struct gspca_dev*,int,int) ;

__attribute__((used)) static int FUNC_6(struct gspca_dev *VAR_13)
{
 FUNC_5(VAR_13, 0x12, 0x80);
 FUNC_1(20);
 switch (VAR_13->curr_mode % (VAR_6)) {
 case 130:
  FUNC_3(VAR_13, VAR_3,
       FUNC_0(VAR_3));
  FUNC_4(VAR_13, VAR_10,
        FUNC_0(VAR_10));
  break;
 case 131:
  FUNC_3(VAR_13, VAR_2,
       FUNC_0(VAR_2));
  FUNC_4(VAR_13, VAR_9,
        FUNC_0(VAR_9));
  break;
 case 133:
  FUNC_3(VAR_13, VAR_0,
       FUNC_0(VAR_0));
  FUNC_4(VAR_13, VAR_7,
        FUNC_0(VAR_7));
  break;
 case 128:
  FUNC_3(VAR_13, VAR_5,
       FUNC_0(VAR_5));
  FUNC_4(VAR_13, VAR_12,
        FUNC_0(VAR_12));
  break;
 case 129:
  FUNC_3(VAR_13, VAR_4,
       FUNC_0(VAR_4));
  FUNC_4(VAR_13, VAR_11,
        FUNC_0(VAR_11));
  break;
 case 132:
  FUNC_3(VAR_13, VAR_1,
       FUNC_0(VAR_1));
  FUNC_4(VAR_13, VAR_8,
        FUNC_0(VAR_8));
  break;
 }
 FUNC_2(VAR_13, 0xe0, 0x00);

 return VAR_13->usb_err;
}
