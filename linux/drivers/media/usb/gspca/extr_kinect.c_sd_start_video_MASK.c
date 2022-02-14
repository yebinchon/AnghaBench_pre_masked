
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {size_t curr_mode; TYPE_2__ cam; } ;
struct TYPE_3__ {int priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_4)
{
 int VAR_5;
 uint8_t VAR_6, VAR_7;
 uint8_t VAR_8, VAR_9;
 uint8_t VAR_10, VAR_11;
 uint8_t VAR_12;

 VAR_5 = VAR_4->cam.cam_mode[VAR_4->curr_mode].priv;

 if (VAR_5 & VAR_1) {
  VAR_6 = 0x19;
  VAR_8 = 0x1a;
  VAR_10 = 0x1b;
  VAR_12 = 0x03;
 } else {
  VAR_6 = 0x0c;
  VAR_8 = 0x0d;
  VAR_10 = 0x0e;
  VAR_12 = 0x01;
 }


 if (VAR_5 & VAR_0)
  VAR_7 = 0x05;
 else
  VAR_7 = 0x00;

 if (VAR_5 & VAR_3)
  VAR_9 = 0x02;
 else
  VAR_9 = 0x01;

 if (VAR_5 & VAR_2)
  VAR_11 = 0x1e;
 else
  VAR_11 = 0x0f;



 FUNC_0(VAR_4, 0x105, 0x00);


 FUNC_0(VAR_4, 0x05, 0x00);
 if (VAR_5 & (VAR_1 | VAR_3)) {
  FUNC_0(VAR_4, 0x13, 0x01);
  FUNC_0(VAR_4, 0x14, 0x1e);
  FUNC_0(VAR_4, 0x06, 0x02);
  FUNC_0(VAR_4, 0x06, 0x00);
 }

 FUNC_0(VAR_4, VAR_6, VAR_7);
 FUNC_0(VAR_4, VAR_8, VAR_9);
 FUNC_0(VAR_4, VAR_10, VAR_11);


 FUNC_0(VAR_4, 0x05, VAR_12);


 FUNC_0(VAR_4, 0x47, 0x00);

 return 0;
}
