
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fsl_udc {scalar_t__ ep0_dir; int ep0_state; } ;
struct TYPE_2__ {int * endptctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct fsl_udc *VAR_4)
{
 u32 VAR_5;


 VAR_5 = FUNC_0(&VAR_3->endptctrl[0]);
 VAR_5 |= VAR_1 | VAR_0;
 FUNC_1(VAR_5, &VAR_3->endptctrl[0]);
 VAR_4->ep0_state = VAR_2;
 VAR_4->ep0_dir = 0;
}
