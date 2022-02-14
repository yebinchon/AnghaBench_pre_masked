
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc_data {scalar_t__ vc_mode; int vc_num; TYPE_1__* vc_sw; } ;
struct TYPE_4__ {struct vc_data* d; } ;
struct TYPE_3__ {scalar_t__ (* con_blank ) (struct vc_data*,int ,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 () ;
 int FUNC_3 (int *,scalar_t__) ;
 int VAR_11 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct vc_data*) ;
 int FUNC_6 (struct vc_data*) ;
 scalar_t__ FUNC_7 (struct vc_data*,int ,int) ;
 int FUNC_8 (struct vc_data*) ;
 TYPE_2__* VAR_12 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int ,int ) ;

void FUNC_11(int VAR_13)
{
 struct vc_data *VAR_14;





 if (!VAR_11)
  FUNC_2();

 FUNC_0();

 VAR_9 = 0;
 if (!VAR_6)
  return;
 if (!FUNC_9(VAR_8)) {

  FUNC_4("unblank_screen: tty %d not allocated ??\n",
   VAR_8 + 1);
  return;
 }
 VAR_14 = VAR_12[VAR_8].d;
 if (VAR_14->vc_mode != VAR_1)
  return;

 if (VAR_5) {
  FUNC_3(&VAR_7, VAR_10 + (VAR_5 * VAR_0));
  VAR_4 = VAR_3;
 }

 VAR_6 = 0;
 if (VAR_14->vc_sw->con_blank(VAR_14, 0, VAR_13))

  FUNC_8(VAR_14);
 if (&FUNC_1)
  FUNC_1(0);
 FUNC_6(VAR_14);
 FUNC_5(VAR_14);
 FUNC_10(VAR_2, VAR_14->vc_num, VAR_14->vc_num);
}
