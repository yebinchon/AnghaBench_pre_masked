
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {scalar_t__ sensor; int jpegqual; int gamma; } ;
struct TYPE_2__ {int width; } ;
struct gspca_dev {TYPE_1__ pixfmt; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct gspca_dev*,int,int ,int ) ;
 int * VAR_10 ;
 int FUNC_2 (struct gspca_dev*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct gspca_dev*,int ,int) ;
 int FUNC_5 (struct gspca_dev*,int ) ;
 int FUNC_6 (struct gspca_dev*,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct gspca_dev *VAR_11)
{
 struct sd *VAR_12 = (struct sd *) VAR_11;

 FUNC_4(VAR_11, VAR_6, 0x00);
 if (VAR_11->pixfmt.width == 320) {
  FUNC_4(VAR_11, VAR_7, 0x06);
  FUNC_3(100);
  FUNC_2(VAR_11, VAR_0, 0x01);
  FUNC_3(100);
  FUNC_4(VAR_11, VAR_6, 0x03);
  FUNC_4(VAR_11, VAR_9, 0x01);
  FUNC_4(VAR_11, VAR_8, 0x0d);
  FUNC_2(VAR_11, VAR_2, 0x37);
  FUNC_2(VAR_11, VAR_1, 0x01);
 } else {
  FUNC_4(VAR_11, VAR_7, 0x05);
  FUNC_3(100);
  FUNC_2(VAR_11, VAR_0, 0x01);
  FUNC_3(100);
  FUNC_4(VAR_11, VAR_6, 0x03);
  FUNC_4(VAR_11, VAR_9, 0x00);
  FUNC_4(VAR_11, VAR_8, 0x09);
  FUNC_2(VAR_11, VAR_2, 0xcf);
  FUNC_2(VAR_11, VAR_1, 0x00);
 }
 FUNC_2(VAR_11, VAR_3, 0x01);
 FUNC_1(VAR_11, 0x03, VAR_10[VAR_4],
    FUNC_0(VAR_10[0]));
 FUNC_5(VAR_11, FUNC_7(VAR_12->gamma));
 if (VAR_12->sensor == VAR_5)
  FUNC_6(VAR_11, FUNC_7(VAR_12->jpegqual));
}
