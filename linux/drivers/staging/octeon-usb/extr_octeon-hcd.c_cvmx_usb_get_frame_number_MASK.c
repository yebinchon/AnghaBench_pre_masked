
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int frnum; } ;
union cvmx_usbcx_hfnum {TYPE_1__ s; int u32; } ;
struct octeon_hcd {int index; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct octeon_hcd*,int ) ;

__attribute__((used)) static int FUNC_2(struct octeon_hcd *VAR_0)
{
 union cvmx_usbcx_hfnum VAR_1;

 VAR_1.u32 = FUNC_1(VAR_0, FUNC_0(VAR_0->index));

 return VAR_1.s.frnum;
}
