
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ txfflsh; scalar_t__ rxfflsh; } ;
union cvmx_usbcx_grstctl {TYPE_1__ s; int u32; } ;
typedef int u64 ;
struct octeon_hcd {int index; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct octeon_hcd*,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_4(struct octeon_hcd *VAR_1, int VAR_2)
{
 int VAR_3;
 u64 VAR_4 = FUNC_0(VAR_1->index);
 u64 VAR_5 = FUNC_2() + 100 *
     (u64)VAR_0 / 1000000;
 union cvmx_usbcx_grstctl VAR_6;

 while (1) {
  VAR_6.u32 = FUNC_3(VAR_1, VAR_4);
  if (VAR_2 == 0 && VAR_6.s.txfflsh == 0) {
   VAR_3 = 0;
   break;
  } else if (VAR_2 == 1 && VAR_6.s.rxfflsh == 0) {
   VAR_3 = 0;
   break;
  } else if (FUNC_2() > VAR_5) {
   VAR_3 = -1;
   break;
  }

  FUNC_1(100);
 }
 return VAR_3;
}
