
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vc_data {size_t vc_num; int vc_can_do_color; scalar_t__ vc_mode; int vc_screenbuf_size; int vc_origin; TYPE_1__* vc_sw; struct vc_data** vc_display_fg; } ;
struct TYPE_6__ {int kobj; } ;
struct TYPE_5__ {struct vc_data* d; } ;
struct TYPE_4__ {int (* con_switch ) (struct vc_data*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct vc_data*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct vc_data*) ;
 int FUNC_4 (struct vc_data*,int ,int) ;
 size_t VAR_1 ;
 int FUNC_5 (struct vc_data*) ;
 int FUNC_6 (struct vc_data*) ;
 int FUNC_7 (struct vc_data*) ;
 int FUNC_8 (struct vc_data*) ;
 int FUNC_9 () ;
 int FUNC_10 (struct vc_data*) ;
 int FUNC_11 (struct vc_data*) ;
 int FUNC_12 (struct vc_data*) ;
 int FUNC_13 (int *,int *,char*) ;
 TYPE_3__* VAR_2 ;
 int FUNC_14 (struct vc_data*) ;
 TYPE_2__* VAR_3 ;

void FUNC_15(struct vc_data *VAR_4, int VAR_5)
{
 int VAR_6 = 0;

 FUNC_0();

 if (!VAR_4) {


  return;
 }

 if (VAR_5) {
  struct vc_data *VAR_7 = VAR_3[VAR_1].d;
  if (VAR_7 == VAR_4)
   return;
  if (!FUNC_3(VAR_4))
   VAR_6 = 1;
  *VAR_4->vc_display_fg = VAR_4;
  VAR_1 = VAR_4->vc_num;
  FUNC_5(VAR_7);
  if (!FUNC_3(VAR_7)) {
   FUNC_7(VAR_7);
   FUNC_10(VAR_7);
  }
  if (VAR_2)
   FUNC_13(&VAR_2->kobj, ((void*)0), "active");
 } else {
  FUNC_5(VAR_4);
  VAR_6 = 1;
 }

 if (VAR_6) {
  int VAR_8;
  int VAR_9 = VAR_4->vc_can_do_color;

  FUNC_10(VAR_4);
  VAR_8 = VAR_4->vc_sw->con_switch(VAR_4);
  FUNC_11(VAR_4);






  if (VAR_9 != VAR_4->vc_can_do_color) {
   FUNC_14(VAR_4);
   FUNC_1(VAR_4);
  }

  if (VAR_8 && VAR_4->vc_mode != VAR_0)
   FUNC_4(VAR_4, VAR_4->vc_origin, VAR_4->vc_screenbuf_size / 2);
 }
 FUNC_8(VAR_4);
 if (VAR_5) {
  FUNC_9();
  FUNC_2();
  FUNC_6(VAR_4);
 }
}
