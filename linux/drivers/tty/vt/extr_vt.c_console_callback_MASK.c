
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct vc_data {scalar_t__ vc_mode; TYPE_1__* vc_sw; } ;
struct TYPE_4__ {struct vc_data* d; } ;
struct TYPE_3__ {int (* con_scrolldelta ) (struct vc_data*,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct vc_data*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_5 (struct vc_data*) ;
 int FUNC_6 (struct vc_data*) ;
 int FUNC_7 () ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (struct vc_data*,scalar_t__) ;
 TYPE_2__* VAR_5 ;
 scalar_t__ FUNC_9 (size_t) ;
 size_t VAR_6 ;

__attribute__((used)) static void FUNC_10(struct work_struct *VAR_7)
{
 FUNC_2();

 if (VAR_6 >= 0) {
  if (VAR_6 != VAR_3 &&
      FUNC_9(VAR_6)) {
   FUNC_5(VAR_5[VAR_3].d);
   FUNC_0(VAR_5[VAR_6].d);



  }
  VAR_6 = -1;
 }
 if (VAR_2) {
  VAR_2 = 0;
  FUNC_7();
 }
 if (VAR_4) {
  struct vc_data *VAR_8 = VAR_5[VAR_3].d;
  FUNC_1();
  if (VAR_8->vc_mode == VAR_0 && VAR_8->vc_sw->con_scrolldelta)
   VAR_8->vc_sw->con_scrolldelta(VAR_8, VAR_4);
  VAR_4 = 0;
 }
 if (VAR_1) {
  FUNC_4(0);
  VAR_1 = 0;
 }
 FUNC_6(VAR_5[VAR_3].d);

 FUNC_3();
}
