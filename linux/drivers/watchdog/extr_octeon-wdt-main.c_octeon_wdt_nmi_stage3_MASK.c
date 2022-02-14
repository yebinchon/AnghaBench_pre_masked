
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cnt; } ;
union cvmx_ciu_wdogx {void* u64; TYPE_1__ s; } ;
typedef int u64 ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 () ;
 unsigned int FUNC_11 () ;
 unsigned int FUNC_12 () ;
 unsigned int FUNC_13 () ;
 int FUNC_14 (int ) ;
 void* FUNC_15 (unsigned int,int ) ;
 int FUNC_16 (int ,int ,int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int,int) ;
 int FUNC_19 (char*) ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 char** VAR_4 ;
 int FUNC_24 (int) ;

void FUNC_25(u64 VAR_5[32])
{
 u64 VAR_6;

 unsigned int VAR_7 = FUNC_11();




 u64 VAR_8 = FUNC_20();
 u64 VAR_9 = FUNC_23();
 u64 VAR_10 = FUNC_22();
 u64 VAR_11 = FUNC_21();


 FUNC_24(85000 * VAR_7);

 FUNC_19("\r\n*** NMI Watchdog interrupt on Core 0x");
 FUNC_18(VAR_7, 2);
 FUNC_19(" ***\r\n");
 for (VAR_6 = 0; VAR_6 < 32; VAR_6++) {
  FUNC_19("\t");
  FUNC_19(VAR_4[VAR_6]);
  FUNC_19("\t0x");
  FUNC_18(VAR_5[VAR_6], 16);
  if (VAR_6 & 1)
   FUNC_19("\r\n");
 }
 FUNC_19("\terr_epc\t0x");
 FUNC_18(VAR_10, 16);

 FUNC_19("\tepc\t0x");
 FUNC_18(VAR_11, 16);
 FUNC_19("\r\n");

 FUNC_19("\tstatus\t0x");
 FUNC_18(VAR_9, 16);
 FUNC_19("\tcause\t0x");
 FUNC_18(VAR_8, 16);
 FUNC_19("\r\n");


 if (FUNC_9(VAR_1)) {
  FUNC_19("\tsrc_wd\t0x");
  FUNC_18(FUNC_14(FUNC_3(VAR_7)), 16);
  FUNC_19("\ten_wd\t0x");
  FUNC_18(FUNC_14(FUNC_1(VAR_7)), 16);
  FUNC_19("\r\n");
  FUNC_19("\tsrc_rml\t0x");
  FUNC_18(FUNC_14(FUNC_2(VAR_7)), 16);
  FUNC_19("\ten_rml\t0x");
  FUNC_18(FUNC_14(FUNC_0(VAR_7)), 16);
  FUNC_19("\r\n");
  FUNC_19("\tsum\t0x");
  FUNC_18(FUNC_14(FUNC_4(VAR_7)), 16);
  FUNC_19("\r\n");
 } else if (!FUNC_17(VAR_3)) {
  FUNC_19("\tsum0\t0x");
  FUNC_18(FUNC_14(FUNC_6(VAR_7 * 2)), 16);
  FUNC_19("\ten0\t0x");
  FUNC_18(FUNC_14(FUNC_5(VAR_7 * 2)), 16);
  FUNC_19("\r\n");
 }

 FUNC_19("*** Chip soft reset soon ***\r\n");





 if (FUNC_10() && !FUNC_9(VAR_2)) {
  u64 VAR_12;
  unsigned int VAR_13 = FUNC_13();
  unsigned int VAR_14 = FUNC_12();
  union cvmx_ciu_wdogx VAR_15;






  do {
   VAR_15.u64 = FUNC_15(VAR_13, FUNC_7(VAR_14));
  } while (VAR_15.s.cnt > 0x10000);

  VAR_12 = FUNC_15(0, FUNC_8(0));
  VAR_12 |= 1 << 11;
  FUNC_16(0, FUNC_8(0), VAR_12);
  FUNC_16(0, VAR_0, 1);
 }
}
