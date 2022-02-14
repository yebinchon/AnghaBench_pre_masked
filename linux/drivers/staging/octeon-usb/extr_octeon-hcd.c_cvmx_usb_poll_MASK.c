
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ prtena; } ;
union cvmx_usbcx_hprt {void* u32; TYPE_2__ s; } ;
struct TYPE_4__ {int frnum; } ;
union cvmx_usbcx_hfnum {TYPE_1__ s; void* u32; } ;
union cvmx_usbcx_haint {int u32; } ;
struct TYPE_6__ {int sof; scalar_t__ hchint; scalar_t__ prtint; scalar_t__ disconnint; scalar_t__ nptxfemp; scalar_t__ ptxfemp; scalar_t__ rxflvl; } ;
union cvmx_usbcx_gintsts {TYPE_3__ s; void* u32; } ;
struct octeon_hcd {int frame_number; int init_flags; int index; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct octeon_hcd*,int) ;
 int FUNC_6 (struct octeon_hcd*) ;
 int FUNC_7 (struct octeon_hcd*) ;
 void* FUNC_8 (struct octeon_hcd*,int ) ;
 int FUNC_9 (struct octeon_hcd*,int ) ;
 int FUNC_10 (struct octeon_hcd*,int ,void*) ;
 int FUNC_11 (struct octeon_hcd*) ;
 int FUNC_12 (struct octeon_hcd*,int) ;

__attribute__((used)) static int FUNC_13(struct octeon_hcd *VAR_1)
{
 union cvmx_usbcx_hfnum VAR_2;
 union cvmx_usbcx_gintsts VAR_3;

 FUNC_12(VAR_1, sizeof(*VAR_1));


 VAR_2.u32 = FUNC_8(VAR_1, FUNC_2(VAR_1->index));
 if ((VAR_1->frame_number & 0x3fff) > VAR_2.s.frnum)
  VAR_1->frame_number += 0x4000;
 VAR_1->frame_number &= ~0x3fffull;
 VAR_1->frame_number |= VAR_2.s.frnum;


 VAR_3.u32 = FUNC_8(VAR_1,
            FUNC_0(VAR_1->index));


 FUNC_10(VAR_1, FUNC_0(VAR_1->index),
        VAR_3.u32);

 if (VAR_3.s.rxflvl) {







  if (VAR_1->init_flags & VAR_0)
   FUNC_6(VAR_1);
 }
 if (VAR_3.s.ptxfemp || VAR_3.s.nptxfemp) {

  if (VAR_1->init_flags & VAR_0)
   FUNC_7(VAR_1);
 }
 if (VAR_3.s.disconnint || VAR_3.s.prtint) {
  union cvmx_usbcx_hprt VAR_4;
  FUNC_11(VAR_1);

  VAR_4.u32 =
   FUNC_8(VAR_1, FUNC_3(VAR_1->index));
  VAR_4.s.prtena = 0;
  FUNC_10(VAR_1, FUNC_3(VAR_1->index),
         VAR_4.u32);
 }
 if (VAR_3.s.hchint) {
  union cvmx_usbcx_haint VAR_5;

  VAR_5.u32 = FUNC_8(VAR_1,
     FUNC_1(VAR_1->index));
  while (VAR_5.u32) {
   int VAR_6;

   VAR_6 = FUNC_4(VAR_5.u32);
   FUNC_5(VAR_1, VAR_6);
   VAR_5.u32 ^= 1 << VAR_6;
  }
 }

 FUNC_9(VAR_1, VAR_3.s.sof);

 return 0;
}
