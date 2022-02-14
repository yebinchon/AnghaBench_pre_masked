
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {int gain; int exposure; scalar_t__ do_ctrl; } ;
struct TYPE_2__ {scalar_t__ bulk_nurbs; } ;
struct gspca_dev {int * urb; TYPE_1__ cam; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct gspca_dev*,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;
 int VAR_3;

 if (!VAR_2->do_ctrl || VAR_1->cam.bulk_nurbs != 0)
  return;
 VAR_2->do_ctrl = 0;

 FUNC_2(VAR_1, FUNC_4(VAR_2->exposure),
   FUNC_4(VAR_2->gain));

 VAR_1->cam.bulk_nurbs = 1;
 VAR_3 = FUNC_3(VAR_1->urb[0], VAR_0);
 if (VAR_3 < 0)
  FUNC_1("sd_dq_callback() err %d\n", VAR_3);


 FUNC_0(100);
}
