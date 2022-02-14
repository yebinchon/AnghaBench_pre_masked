
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {scalar_t__ vc_mode; int vc_cursor_type; TYPE_1__* vc_sw; scalar_t__ vc_deccm; } ;
struct TYPE_2__ {int (* con_cursor ) (struct vc_data*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct vc_data*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct vc_data*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct vc_data*) ;
 struct vc_data* VAR_3 ;
 int FUNC_4 (struct vc_data*,int ) ;

__attribute__((used)) static void FUNC_5(struct vc_data *VAR_4)
{
 if (!FUNC_2(VAR_4) || VAR_2 || VAR_4->vc_mode == VAR_1)
  return;
 if (VAR_4->vc_deccm) {
  if (VAR_4 == VAR_3)
   FUNC_1();
  FUNC_0(VAR_4);
  if ((VAR_4->vc_cursor_type & 0x0f) != 1)
   VAR_4->vc_sw->con_cursor(VAR_4, VAR_0);
 } else
  FUNC_3(VAR_4);
}
