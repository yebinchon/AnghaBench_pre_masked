
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* u32; } ;
struct octeon_hcd {int index; TYPE_1__ usbcx_hprt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 void* FUNC_2 (struct octeon_hcd*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct octeon_hcd *VAR_2)
{
 VAR_2->usbcx_hprt.u32 = FUNC_2(VAR_2,
        FUNC_0(VAR_2->index));


 FUNC_1(FUNC_0(VAR_2->index), VAR_0,
   VAR_1, 1);





 FUNC_3(50);


 FUNC_1(FUNC_0(VAR_2->index), VAR_0,
   VAR_1, 0);





 VAR_2->usbcx_hprt.u32 = FUNC_2(VAR_2,
        FUNC_0(VAR_2->index));
}
