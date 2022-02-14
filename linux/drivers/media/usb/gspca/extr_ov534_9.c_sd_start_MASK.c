
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ sensor; } ;
struct gspca_dev {int usb_err; int curr_mode; } ;


 int FUNC_0 (int ) ;

 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;



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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct gspca_dev*,int,int) ;
 int FUNC_2 (struct gspca_dev*,int ,int ) ;
 int FUNC_3 (struct gspca_dev*,int ,int ) ;
 int FUNC_4 (struct gspca_dev*) ;
 int FUNC_5 (struct gspca_dev*,int) ;

__attribute__((used)) static int FUNC_6(struct gspca_dev *VAR_16)
{
 struct sd *VAR_17 = (struct sd *) VAR_16;

 if (VAR_17->sensor == VAR_2)
  return VAR_16->usb_err;
 if (VAR_17->sensor == VAR_1)
  return VAR_16->usb_err;
 if (VAR_17->sensor == VAR_0)
  return FUNC_4(VAR_16);

 switch (VAR_16->curr_mode) {
 case 131:
  FUNC_3(VAR_16, VAR_10,
    FUNC_0(VAR_10));
  FUNC_2(VAR_16, VAR_3,
    FUNC_0(VAR_3));
  FUNC_3(VAR_16, VAR_12,
    FUNC_0(VAR_12));
  break;
 case 129:
  FUNC_3(VAR_16, VAR_10,
    FUNC_0(VAR_10));
  FUNC_2(VAR_16, VAR_6,
    FUNC_0(VAR_6));
  FUNC_3(VAR_16, VAR_15,
    FUNC_0(VAR_15));
  break;
 case 130:
  FUNC_3(VAR_16, VAR_8,
    FUNC_0(VAR_8));
  FUNC_2(VAR_16, VAR_4,
    FUNC_0(VAR_4));
  FUNC_3(VAR_16, VAR_13,
    FUNC_0(VAR_13));
  break;
 case 128:
  FUNC_3(VAR_16, VAR_11,
    FUNC_0(VAR_11));
  FUNC_2(VAR_16, VAR_7,
    FUNC_0(VAR_7));
  FUNC_3(VAR_16, VAR_13,
    FUNC_0(VAR_13));
  break;
 default:

  FUNC_3(VAR_16, VAR_9,
    FUNC_0(VAR_9));
  FUNC_2(VAR_16, VAR_5,
    FUNC_0(VAR_5));
  FUNC_3(VAR_16, VAR_14,
    FUNC_0(VAR_14));
  break;
 }

 FUNC_1(VAR_16, 0xe0, 0x00);
 FUNC_1(VAR_16, 0xe0, 0x00);
 FUNC_5(VAR_16, 1);
 return VAR_16->usb_err;
}
