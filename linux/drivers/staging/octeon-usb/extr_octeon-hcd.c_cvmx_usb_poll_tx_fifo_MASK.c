
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ptxfspcavail; } ;
union cvmx_usbcx_hptxsts {TYPE_1__ s; void* u32; } ;
struct TYPE_5__ {int nptxfspcavail; } ;
union cvmx_usbcx_gnptxsts {TYPE_2__ s; void* u32; } ;
struct TYPE_6__ {scalar_t__ head; scalar_t__ tail; } ;
struct octeon_hcd {int index; TYPE_3__ nonperiodic; TYPE_3__ periodic; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 scalar_t__ FUNC_4 (struct octeon_hcd*,TYPE_3__*,int ) ;
 void* FUNC_5 (struct octeon_hcd*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(struct octeon_hcd *VAR_3)
{
 if (VAR_3->periodic.head != VAR_3->periodic.tail) {
  union cvmx_usbcx_hptxsts VAR_4;

  VAR_4.u32 = FUNC_5(VAR_3,
     FUNC_2(VAR_3->index));
  if (FUNC_4(VAR_3, &VAR_3->periodic,
     VAR_4.s.ptxfspcavail))
   FUNC_3(FUNC_0(VAR_3->index),
     VAR_0, VAR_2, 1);
  else
   FUNC_3(FUNC_0(VAR_3->index),
     VAR_0, VAR_2, 0);
 }

 if (VAR_3->nonperiodic.head != VAR_3->nonperiodic.tail) {
  union cvmx_usbcx_gnptxsts VAR_5;

  VAR_5.u32 = FUNC_5(VAR_3,
     FUNC_1(VAR_3->index));
  if (FUNC_4(VAR_3, &VAR_3->nonperiodic,
     VAR_5.s.nptxfspcavail))
   FUNC_3(FUNC_0(VAR_3->index),
     VAR_0, VAR_1, 1);
  else
   FUNC_3(FUNC_0(VAR_3->index),
     VAR_0, VAR_1, 0);
 }
}
