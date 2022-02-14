
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sd {scalar_t__ subtype; } ;
struct TYPE_4__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {scalar_t__ curr_mode; TYPE_2__ cam; } ;
struct TYPE_3__ {int priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gspca_dev*,char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct gspca_dev*,int,int) ;
 int FUNC_3 (struct gspca_dev*,int,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct gspca_dev*,int ) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_7)
{
 struct sd *VAR_8 = (struct sd *) VAR_7;
 int VAR_9, VAR_10;
 static u8 VAR_11[][3] = {

  {0x00, 0x10, 0x10},
  {0x01, 0x1a, 0x1a},
  {0x02, 0x1c, 0x1d},
  {0x04, 0x34, 0x34},
  {0x05, 0x40, 0x40}
 };

 if (VAR_8->subtype == VAR_0)
  FUNC_4(VAR_7, VAR_6);
 else
  FUNC_4(VAR_7, VAR_5);
 VAR_9 = FUNC_2(VAR_7, 0x06, 0x16);

 if (VAR_9 < 0) {
  FUNC_0(VAR_7, "register read failed err: %d\n", VAR_9);
  return VAR_9;
 }
 if (VAR_9 != 0x0101) {
  FUNC_1("After vector read returns 0x%04x should be 0x0101\n",
         VAR_9);
 }

 VAR_9 = FUNC_3(VAR_7, 0x06, 0x16, 0x0a);
 if (VAR_9 < 0)
  return VAR_9;
 FUNC_3(VAR_7, 0x05, 0xc2, 0x12);




 FUNC_3(VAR_7, 0x02, 0x00, 0x00);

 VAR_10 = VAR_7->cam.cam_mode[(int) VAR_7->curr_mode].priv;
 FUNC_3(VAR_7, VAR_2, 0x00, VAR_11[VAR_10][0]);
 FUNC_3(VAR_7, VAR_2, 0x06, VAR_11[VAR_10][1]);
 FUNC_3(VAR_7, VAR_2, 0x07, VAR_11[VAR_10][2]);

 return FUNC_3(VAR_7, VAR_3,
    VAR_4,
    VAR_1);
}
