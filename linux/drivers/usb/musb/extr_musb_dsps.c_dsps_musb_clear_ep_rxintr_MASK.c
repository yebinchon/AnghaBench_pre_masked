
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct musb {int ctrl_base; TYPE_1__* controller; } ;
struct dsps_musb_wrapper {int rxep_shift; int epintr_status; } ;
struct dsps_glue {struct dsps_musb_wrapper* wrp; } ;
struct TYPE_2__ {int parent; } ;


 struct dsps_glue* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct musb *VAR_0, int VAR_1)
{
 u32 VAR_2;
 struct dsps_glue *VAR_3 = FUNC_0(VAR_0->controller->parent);
 const struct dsps_musb_wrapper *VAR_4 = VAR_3->wrp;


 VAR_2 = (1 << VAR_1) << VAR_4->rxep_shift;
 FUNC_1(VAR_0->ctrl_base, VAR_4->epintr_status, VAR_2);
}
