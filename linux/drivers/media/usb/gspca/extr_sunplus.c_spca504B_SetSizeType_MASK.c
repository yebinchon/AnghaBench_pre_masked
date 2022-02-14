
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sd {int bridge; int subtype; } ;
struct TYPE_4__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {size_t curr_mode; TYPE_2__ cam; } ;
struct TYPE_3__ {int priv; } ;


 int VAR_0 ;



 int FUNC_0 (struct gspca_dev*,int,int,int) ;
 int FUNC_1 (struct gspca_dev*,int,int ,int,int) ;
 int FUNC_2 (struct gspca_dev*,int,int,int) ;
 int FUNC_3 (struct gspca_dev*,int,int,int ,int,int) ;
 int FUNC_4 (struct gspca_dev*) ;
 int FUNC_5 (struct gspca_dev*) ;
 int FUNC_6 (struct gspca_dev*,int,int,int ) ;
 int FUNC_7 (struct gspca_dev*) ;

__attribute__((used)) static void FUNC_8(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;
 u8 VAR_3;

 VAR_3 = VAR_1->cam.cam_mode[VAR_1->curr_mode].priv;
 switch (VAR_2->bridge) {
 case 128:
  FUNC_2(VAR_1, 0x31, 0, 0);
  FUNC_5(VAR_1);
  FUNC_4(VAR_1);
  FUNC_7(VAR_1);

  FUNC_1(VAR_1, 0x24, 0, 8, 2);
  FUNC_0(VAR_1, 0x24, 8, 1);

  FUNC_1(VAR_1, 0x25, 0, 4, VAR_3);
  FUNC_0(VAR_1, 0x25, 4, 1);
  FUNC_4(VAR_1);


  FUNC_2(VAR_1, 0x31, 0x0004, 0x00);
  FUNC_5(VAR_1);
  FUNC_4(VAR_1);
  break;
 default:


  FUNC_1(VAR_1, 0x25, 0, 4, VAR_3);
  FUNC_0(VAR_1, 0x25, 4, 1);
  FUNC_1(VAR_1, 0x27, 0, 0, 6);
  FUNC_0(VAR_1, 0x27, 0, 1);
  FUNC_4(VAR_1);
  break;
 case 130:
  VAR_3 += 3;
  if (VAR_2->subtype == VAR_0) {

   FUNC_3(VAR_1,
      0x08, VAR_3, 0,
      0x80 | (VAR_3 & 0x0f), 1);
   FUNC_3(VAR_1,
       1, 3, 0, 0x9f, 0);
  } else {
   FUNC_6(VAR_1, 0x08, VAR_3, 0);
  }
  break;
 case 129:

  FUNC_2(VAR_1, 0xa0, (0x0500 | (VAR_3 & 0x0f)), 0x00);
  FUNC_2(VAR_1, 0x20, 0x01, 0x0500 | (VAR_3 & 0x0f));
  break;
 }
}
