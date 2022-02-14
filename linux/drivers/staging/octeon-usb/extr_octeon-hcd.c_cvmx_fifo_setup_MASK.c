
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ptxfsize; int ptxfstaddr; } ;
union cvmx_usbcx_hptxfsiz {void* u32; TYPE_2__ s; } ;
struct TYPE_4__ {int nptxfdep; int nptxfstaddr; } ;
union cvmx_usbcx_gnptxfsiz {void* u32; TYPE_1__ s; } ;
struct TYPE_6__ {int dfifodepth; } ;
union cvmx_usbcx_ghwcfg3 {TYPE_3__ s; void* u32; } ;
struct octeon_hcd {int index; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int) ;
 void* FUNC_6 (struct octeon_hcd*,int ) ;
 int FUNC_7 (struct octeon_hcd*,int ,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (struct octeon_hcd*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_9(struct octeon_hcd *VAR_6)
{
 union cvmx_usbcx_ghwcfg3 VAR_7;
 union cvmx_usbcx_gnptxfsiz VAR_8;
 union cvmx_usbcx_hptxfsiz VAR_9;

 VAR_7 = FUNC_6(VAR_6,
      FUNC_0(VAR_6->index));





 FUNC_5(FUNC_3(VAR_6->index), VAR_1,
   VAR_2, VAR_7 / 4);






 VAR_8.u32 = FUNC_6(VAR_6, FUNC_1(VAR_6->index));
 VAR_8.s.nptxfdep = VAR_7 / 2;
 VAR_8.s.nptxfstaddr = VAR_7 / 4;
 FUNC_7(VAR_6, FUNC_1(VAR_6->index), VAR_8.u32);






 VAR_9.u32 = FUNC_6(VAR_6, FUNC_4(VAR_6->index));
 VAR_9.s.ptxfsize = VAR_7 / 4;
 VAR_9.s.ptxfstaddr = 3 * VAR_7 / 4;
 FUNC_7(VAR_6, FUNC_4(VAR_6->index), VAR_9.u32);


 FUNC_5(FUNC_2(VAR_6->index),
   VAR_0, VAR_5, 0x10);
 FUNC_5(FUNC_2(VAR_6->index),
   VAR_0, VAR_4, 1);
 FUNC_8(VAR_6, 0);
 FUNC_5(FUNC_2(VAR_6->index),
   VAR_0, VAR_3, 1);
 FUNC_8(VAR_6, 1);
}
