
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc_data {scalar_t__ vc_mode; int vc_num; TYPE_1__* vc_sw; } ;
struct TYPE_4__ {struct vc_data* d; } ;
struct TYPE_3__ {int (* con_blank ) (struct vc_data*,int,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 size_t VAR_8 ;
 int FUNC_3 (struct vc_data*) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 () ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (struct vc_data*) ;
 int FUNC_7 (struct vc_data*) ;
 int FUNC_8 (struct vc_data*,int,int) ;
 int FUNC_9 (struct vc_data*,int,int) ;
 int FUNC_10 (struct vc_data*,int,int) ;
 TYPE_2__* VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_11 (int ,int ,int ) ;

void FUNC_12(int VAR_13)
{
 struct vc_data *VAR_14 = VAR_10[VAR_8].d;
 int VAR_15;

 FUNC_4();

 FUNC_0();

 if (VAR_6) {
  if (VAR_3 == VAR_5) {
   VAR_3 = VAR_2;
   VAR_14->vc_sw->con_blank(VAR_14, VAR_11 + 1, 0);
  }
  return;
 }


 if (VAR_13) {
  FUNC_3(VAR_14);
  FUNC_6(VAR_14);
  VAR_14->vc_sw->con_blank(VAR_14, -1, 1);
  VAR_6 = VAR_8 + 1;
  VAR_3 = VAR_2;
  FUNC_7(VAR_14);
  return;
 }

 VAR_3 = VAR_2;


 if (VAR_14->vc_mode != VAR_0) {
  VAR_6 = VAR_8 + 1;
  return;
 }

 FUNC_3(VAR_14);
 FUNC_2(&VAR_7);
 VAR_4 = 0;

 FUNC_6(VAR_14);

 VAR_15 = VAR_14->vc_sw->con_blank(VAR_14, VAR_12 ? 1 : (VAR_11 + 1), 0);
 VAR_6 = VAR_8 + 1;
 if (VAR_15)
  FUNC_7(VAR_14);

 if (&FUNC_1 && FUNC_1(1))
  return;

 if (VAR_12 && VAR_11) {
  VAR_3 = VAR_5;
  FUNC_5(&VAR_7, VAR_9 + VAR_12);
 }
 FUNC_11(VAR_1, VAR_14->vc_num, VAR_14->vc_num);
}
