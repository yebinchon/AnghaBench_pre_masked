
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {int timeout; int bootstatus; } ;
struct sp5100_tco {int tco_reg_layout; int tcobase; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 char* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 char* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,int,int ,char const*) ;

 int FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,char*) ;


 int VAR_26 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct sp5100_tco*) ;
 int FUNC_13 (struct watchdog_device*,int ) ;
 int FUNC_14 (struct watchdog_device*) ;
 struct sp5100_tco* FUNC_15 (struct watchdog_device*) ;
 int FUNC_16 (int,int ) ;

__attribute__((used)) static int FUNC_17(struct device *VAR_27,
      struct watchdog_device *VAR_28)
{
 struct sp5100_tco *VAR_29 = FUNC_15(VAR_28);
 const char *VAR_30;
 u32 VAR_31 = 0, VAR_32;
 int VAR_33;


 if (!FUNC_9(VAR_17,
      VAR_18, "sp5100_tco")) {
  FUNC_2(VAR_27, "I/O address 0x%04x already in use\n",
   VAR_17);
  return -VAR_0;
 }




 switch (VAR_29->tco_reg_layout) {
 case 128:
  VAR_30 = VAR_16;
  VAR_31 = FUNC_10(VAR_19) &
        0xfffffff8;
  break;
 case 129:
  VAR_30 = VAR_12;
  VAR_31 = FUNC_10(VAR_14) &
        0xfffffff8;
  break;
 case 130:
  VAR_30 = VAR_12;
  VAR_32 = FUNC_11(VAR_3);
  if (VAR_32 & VAR_4)
   VAR_31 = VAR_7;
  break;
 default:
  return -VAR_8;
 }


 if (!VAR_31 ||
     !FUNC_5(VAR_27, VAR_31, VAR_24,
         VAR_30)) {
  if (VAR_31)
   FUNC_1(VAR_27, "MMIO address 0x%08x already in use\n",
    VAR_31);
  switch (VAR_29->tco_reg_layout) {
  case 128:





   FUNC_6(VAR_26,
           VAR_20,
           &VAR_31);
   if ((VAR_31 & (VAR_10 |
       VAR_11)) !=
        VAR_10) {
    VAR_33 = -VAR_8;
    goto unreg_region;
   }
   VAR_31 &= ~0xFFF;
   VAR_31 += VAR_15;
   break;
  case 129:

   VAR_31 =
    FUNC_10(VAR_13);
   if ((VAR_31 & (VAR_10 |
       VAR_11)) !=
        VAR_10) {
    VAR_33 = -VAR_8;
    goto unreg_region;
   }
   VAR_31 &= ~0xFFF;
   VAR_31 += VAR_15;
   break;
  case 130:
   VAR_32 = FUNC_11(VAR_5);
   if (!(VAR_32 & VAR_6)) {
    VAR_33 = -VAR_8;
    goto unreg_region;
   }
   VAR_31 = VAR_1 +
        VAR_2;
   break;
  }
  FUNC_1(VAR_27, "Got 0x%08x from SBResource_MMIO register\n",
   VAR_31);
  if (!FUNC_5(VAR_27, VAR_31,
          VAR_24,
          VAR_30)) {
   FUNC_1(VAR_27, "MMIO address 0x%08x already in use\n",
    VAR_31);
   VAR_33 = -VAR_0;
   goto unreg_region;
  }
 }

 VAR_29->tcobase = FUNC_4(VAR_27, VAR_31, VAR_24);
 if (!VAR_29->tcobase) {
  FUNC_2(VAR_27, "failed to get tcobase address\n");
  VAR_33 = -VAR_9;
  goto unreg_region;
 }

 FUNC_3(VAR_27, "Using 0x%08x for watchdog MMIO address\n", VAR_31);


 FUNC_12(VAR_29);

 VAR_32 = FUNC_7(FUNC_0(VAR_29->tcobase));
 if (VAR_32 & VAR_22) {
  FUNC_2(VAR_27, "Watchdog hardware is disabled\n");
  VAR_33 = -VAR_8;
  goto unreg_region;
 }





 if (VAR_32 & VAR_23)
  VAR_28->bootstatus = VAR_25;

 VAR_32 &= ~VAR_21;
 FUNC_16(VAR_32, FUNC_0(VAR_29->tcobase));


 FUNC_13(VAR_28, VAR_28->timeout);





 FUNC_14(VAR_28);

 FUNC_8(VAR_17, VAR_18);

 return 0;

unreg_region:
 FUNC_8(VAR_17, VAR_18);
 return VAR_33;
}
