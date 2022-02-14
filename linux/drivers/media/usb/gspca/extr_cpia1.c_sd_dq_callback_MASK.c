
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int expMode; } ;
struct TYPE_4__ {TYPE_1__ exposure; } ;
struct sd {scalar_t__ first_frame; TYPE_2__ params; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*) ;
 int FUNC_1 (struct gspca_dev*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (struct gspca_dev*) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;



 if (VAR_3->first_frame) {
  VAR_3->first_frame--;
  if (VAR_3->first_frame == 0)
   FUNC_0(VAR_2);
 }


 FUNC_3(VAR_2);



 if (VAR_3->params.exposure.expMode == 2)
  FUNC_2(VAR_2);


 FUNC_1(VAR_2, VAR_0, 0, 0, 0, 0);
 FUNC_1(VAR_2, VAR_1, 0, 0, 0, 0);
}
