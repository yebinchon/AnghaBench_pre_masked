
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sd {int subtype; } ;
struct TYPE_3__ {TYPE_2__* cam_mode; } ;
struct gspca_dev {scalar_t__ curr_mode; TYPE_1__ cam; } ;
struct TYPE_4__ {int priv; } ;




 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct gspca_dev*,int ,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct gspca_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_6;
 int VAR_8;

 switch (VAR_7->subtype) {
 case 128:

  FUNC_1(VAR_6, VAR_2);
  break;
 case 131:
 case 129:

  FUNC_1(VAR_6, VAR_4);
  break;
 case 130:

  FUNC_1(VAR_6, VAR_5);
  break;
 default:

  FUNC_1(VAR_6, VAR_3);
 }


 VAR_8 = VAR_6->cam.cam_mode[(int) VAR_6->curr_mode].priv;



 FUNC_0(VAR_6, VAR_1, 0x6, 0x94);
 switch (VAR_8) {
 case 0:
  FUNC_0(VAR_6, VAR_1, 0x07, 0x004a);
  break;
 case 1:
  FUNC_0(VAR_6, VAR_1, 0x07, 0x104a);
  break;
 default:

  FUNC_0(VAR_6, VAR_1, 0x07, 0x204a);
  break;
 }
 FUNC_0(VAR_6, VAR_0, 0x01, 0x02);

 return 0;
}
