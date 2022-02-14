
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int ate_reset; scalar_t__ hst_mode; } ;
union cvmx_usbnx_usbp_ctl_status {void* u64; TYPE_5__ s; } ;
struct TYPE_13__ {int por; int hrst; int prst; int hclk_rst; int enable; int p_rtype; int p_c_sel; int divide; scalar_t__ divide2; } ;
union cvmx_usbnx_clk_ctl {void* u64; TYPE_6__ s; } ;
struct TYPE_10__ {scalar_t__ fslspclksel; scalar_t__ fslssupp; } ;
union cvmx_usbcx_hcfg {void* u32; TYPE_3__ s; } ;
struct TYPE_8__ {int usbtrdtim; scalar_t__ phylpwrclksel; scalar_t__ ddrsel; scalar_t__ toutcal; } ;
union cvmx_usbcx_gusbcfg {void* u32; TYPE_1__ s; } ;
struct TYPE_11__ {int prtint; int disconnint; } ;
union cvmx_usbcx_gintsts {void* u32; TYPE_4__ s; } ;
struct TYPE_9__ {int otgintmsk; int modemismsk; int hchintmsk; int rxflvlmsk; scalar_t__ sofmsk; } ;
union cvmx_usbcx_gintmsk {void* u32; TYPE_2__ s; } ;
struct TYPE_14__ {int dmaen; int nptxfemplvl; int ptxfemplvl; int glblintrmsk; scalar_t__ hbstlen; } ;
union cvmx_usbcx_gahbcfg {void* u32; TYPE_7__ s; } ;
struct octeon_hcd {int init_flags; int index; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct octeon_hcd*) ;
 void* FUNC_13 (int ) ;
 void* FUNC_14 (struct octeon_hcd*,int ) ;
 int FUNC_15 (struct octeon_hcd*) ;
 int FUNC_16 (struct octeon_hcd*,int ,void*) ;
 int VAR_7 ;
 int FUNC_17 (int ,void*) ;
 int FUNC_18 (struct device*,char*,int) ;
 int FUNC_19 (struct device*,char*,int) ;
 int VAR_8 ;
 int FUNC_20 (int) ;
 int FUNC_21 (int) ;
 int FUNC_22 () ;
 int VAR_9 ;
 int FUNC_23 (int) ;

__attribute__((used)) static int FUNC_24(struct device *VAR_10,
          struct octeon_hcd *VAR_11)
{
 int VAR_12;
 int VAR_13;
 int VAR_14 = 0;
 union cvmx_usbcx_hcfg VAR_15;
 union cvmx_usbnx_clk_ctl VAR_16;
 union cvmx_usbcx_gintsts VAR_17;
 union cvmx_usbcx_gahbcfg VAR_18;
 union cvmx_usbcx_gintmsk VAR_19;
 union cvmx_usbcx_gusbcfg VAR_20;
 union cvmx_usbnx_usbp_ctl_status VAR_21;

retry:
 VAR_16.u64 = FUNC_13(FUNC_6(VAR_11->index));
 VAR_16.s.por = 1;
 VAR_16.s.hrst = 0;
 VAR_16.s.prst = 0;
 VAR_16.s.hclk_rst = 0;
 VAR_16.s.enable = 0;




 if (VAR_11->init_flags & VAR_1) {





  if (FUNC_9(VAR_4) ||
      FUNC_9(VAR_6) ||
      FUNC_9(VAR_5))

   VAR_16.s.p_rtype = 2;
  else

   VAR_16.s.p_rtype = 1;

  switch (VAR_11->init_flags &
   VAR_0) {
  case 130:
   VAR_16.s.p_c_sel = 0;
   break;
  case 129:
   VAR_16.s.p_c_sel = 1;
   break;
  case 128:
   VAR_16.s.p_c_sel = 2;
   break;
  }
 } else {




  if (FUNC_9(VAR_4))

   VAR_16.s.p_rtype = 3;
  else

   VAR_16.s.p_rtype = 0;

  VAR_16.s.p_c_sel = 0;
 }





 VAR_13 = FUNC_8(FUNC_22(), 125000000);

 if (VAR_13 < 4)
  VAR_13 = 4;
 VAR_16.s.divide = VAR_13;
 VAR_16.s.divide2 = 0;
 FUNC_17(FUNC_6(VAR_11->index), VAR_16.u64);


 VAR_16.s.hclk_rst = 1;
 FUNC_17(FUNC_6(VAR_11->index), VAR_16.u64);

 FUNC_11(64);





 VAR_16.s.por = 0;
 FUNC_17(FUNC_6(VAR_11->index), VAR_16.u64);

 FUNC_20(1);





 VAR_21.u64 =
  FUNC_13(FUNC_7(VAR_11->index));
 VAR_21.s.ate_reset = 1;
 FUNC_17(FUNC_7(VAR_11->index),
       VAR_21.u64);

 FUNC_11(10);




 VAR_21.s.ate_reset = 0;
 FUNC_17(FUNC_7(VAR_11->index),
       VAR_21.u64);




 VAR_16.s.prst = 1;
 FUNC_17(FUNC_6(VAR_11->index), VAR_16.u64);





 VAR_21.s.hst_mode = 0;
 FUNC_17(FUNC_7(VAR_11->index),
       VAR_21.u64);

 FUNC_23(1);




 VAR_16.s.hrst = 1;
 FUNC_17(FUNC_6(VAR_11->index), VAR_16.u64);

 VAR_16.s.enable = 1;
 FUNC_17(FUNC_6(VAR_11->index), VAR_16.u64);
 FUNC_23(1);
 VAR_18.u32 = 0;
 VAR_18.s.dmaen = !(VAR_11->init_flags &
      VAR_2);
 VAR_18.s.hbstlen = 0;
 VAR_18.s.nptxfemplvl = 1;
 VAR_18.s.ptxfemplvl = 1;
 VAR_18.s.glblintrmsk = 1;
 FUNC_16(VAR_11, FUNC_0(VAR_11->index),
        VAR_18.u32);
 VAR_20.u32 = FUNC_14(VAR_11,
      FUNC_3(VAR_11->index));
 VAR_20.s.toutcal = 0;
 VAR_20.s.ddrsel = 0;
 VAR_20.s.usbtrdtim = 0x5;
 VAR_20.s.phylpwrclksel = 0;
 FUNC_16(VAR_11, FUNC_3(VAR_11->index),
        VAR_20.u32);







 VAR_19.u32 = FUNC_14(VAR_11,
      FUNC_1(VAR_11->index));
 VAR_19.s.otgintmsk = 1;
 VAR_19.s.modemismsk = 1;
 VAR_19.s.hchintmsk = 1;
 VAR_19.s.sofmsk = 0;

 if (VAR_11->init_flags & VAR_2)
  VAR_19.s.rxflvlmsk = 1;
 FUNC_16(VAR_11, FUNC_1(VAR_11->index),
        VAR_19.u32);




 for (VAR_12 = 0; VAR_12 < 8; VAR_12++)
  FUNC_16(VAR_11,
         FUNC_5(VAR_12, VAR_11->index),
         0);







 FUNC_10(FUNC_1(VAR_11->index),
   VAR_7, VAR_9, 1);
 FUNC_10(FUNC_1(VAR_11->index),
   VAR_7, VAR_8, 1);





 VAR_15.u32 = FUNC_14(VAR_11, FUNC_4(VAR_11->index));
 VAR_15.s.fslssupp = 0;
 VAR_15.s.fslspclksel = 0;
 FUNC_16(VAR_11, FUNC_4(VAR_11->index), VAR_15.u32);

 FUNC_12(VAR_11);






 VAR_17.u32 = FUNC_14(VAR_11,
            FUNC_2(VAR_11->index));
 FUNC_16(VAR_11, FUNC_2(VAR_11->index),
        VAR_17.u32);
 FUNC_18(VAR_10, "gintsts after reset: 0x%x\n", (int)VAR_17.u32);
 if (!VAR_17.s.disconnint && !VAR_17.s.prtint)
  return 0;
 if (VAR_14++ >= 5)
  return -VAR_3;
 FUNC_19(VAR_10, "controller reset failed (gintsts=0x%x) - retrying\n",
   (int)VAR_17.u32);
 FUNC_21(50);
 FUNC_15(VAR_11);
 FUNC_21(50);
 goto retry;
}
