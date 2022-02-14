
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {scalar_t__ vc_mode; TYPE_1__* vc_sw; } ;
struct TYPE_2__ {int (* con_set_palette ) (struct vc_data*,int ) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (struct vc_data*,int ) ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_2)
{
 FUNC_0();

 if (VAR_2->vc_mode != VAR_0 && VAR_2->vc_sw->con_set_palette)
  VAR_2->vc_sw->con_set_palette(VAR_2, VAR_1);
}
