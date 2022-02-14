
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {TYPE_1__* vc_sw; } ;
struct TYPE_2__ {int (* con_switch ) (struct vc_data*) ;int (* con_flush_scrollback ) (struct vc_data*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (struct vc_data*) ;
 int FUNC_2 (struct vc_data*) ;
 int FUNC_3 (struct vc_data*) ;

__attribute__((used)) static void FUNC_4(struct vc_data *VAR_0)
{
 FUNC_0();

 FUNC_1(VAR_0);
 if (VAR_0->vc_sw->con_flush_scrollback)
  VAR_0->vc_sw->con_flush_scrollback(VAR_0);
 else
  VAR_0->vc_sw->con_switch(VAR_0);
}
