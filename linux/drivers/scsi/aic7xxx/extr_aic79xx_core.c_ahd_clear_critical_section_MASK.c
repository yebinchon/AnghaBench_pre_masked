
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct cs {scalar_t__ begin; scalar_t__ end; } ;
struct ahd_softc {scalar_t__ num_critical_sections; scalar_t__ unpause; int saved_dst_mode; int saved_src_mode; struct cs* critical_sections; } ;
typedef int ahd_mode_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ahd_softc*) ;
 scalar_t__ FUNC_2 (struct ahd_softc*,int ) ;
 scalar_t__ FUNC_3 (struct ahd_softc*,int ) ;
 int FUNC_4 (struct ahd_softc*) ;
 int FUNC_5 (struct ahd_softc*) ;
 int FUNC_6 (struct ahd_softc*,int ,scalar_t__) ;
 int FUNC_7 (struct ahd_softc*,int ) ;
 int FUNC_8 (struct ahd_softc*) ;
 int FUNC_9 (struct ahd_softc*,int ,int ) ;
 int FUNC_10 (struct ahd_softc*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,int ,scalar_t__,...) ;

__attribute__((used)) static void
FUNC_13(struct ahd_softc *VAR_23)
{
 ahd_mode_state VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27;
 u_int VAR_28;
 u_int VAR_29;
 u_int VAR_30;
 u_int VAR_31;
 u_int VAR_32;
 u_int VAR_33;
 u_int VAR_34;

 if (VAR_23->num_critical_sections == 0)
  return;

 VAR_25 = VAR_10;
 VAR_26 = 0;
 VAR_27 = 0;
 VAR_28 = 0;
 VAR_29 = 0;
 VAR_30 = 0;
 VAR_31 = 0;
 VAR_32 = 0;
 VAR_33 = 0;
 VAR_34 = 0;
 VAR_24 = FUNC_8(VAR_23);
 for (;;) {
  struct cs *VAR_35;
  u_int VAR_36;
  u_int VAR_37;

  FUNC_9(VAR_23, VAR_2, VAR_2);
  VAR_36 = FUNC_3(VAR_23, VAR_8);

  VAR_35 = VAR_23->critical_sections;
  for (VAR_37 = 0; VAR_37 < VAR_23->num_critical_sections; VAR_37++, VAR_35++) {

   if (VAR_35->begin < VAR_36 && VAR_35->end >= VAR_36)
    break;
  }

  if (VAR_37 == VAR_23->num_critical_sections)
   break;

  if (VAR_26 > VAR_0) {
   FUNC_12("%s: Infinite loop in critical section\n"
          "%s: First Instruction 0x%x now 0x%x\n",
          FUNC_5(VAR_23), FUNC_5(VAR_23), VAR_27,
          VAR_36);
   FUNC_1(VAR_23);
   FUNC_11("critical section loop");
  }

  VAR_26++;





  if (VAR_25 == VAR_10) {

   VAR_27 = VAR_36;
     FUNC_9(VAR_23, VAR_1, VAR_1);
     VAR_28 = FUNC_2(VAR_23, VAR_17);
   VAR_30 = FUNC_2(VAR_23, VAR_19);
   VAR_31 = FUNC_2(VAR_23, VAR_12);
   VAR_32 = FUNC_2(VAR_23, VAR_13);
   VAR_33 = FUNC_2(VAR_23, VAR_14);
   VAR_34 = FUNC_2(VAR_23, VAR_15);
   FUNC_6(VAR_23, VAR_17, 0);
   FUNC_6(VAR_23, VAR_19, 0);
   FUNC_6(VAR_23, VAR_12, 0);
   FUNC_6(VAR_23, VAR_13, 0);
   FUNC_6(VAR_23, VAR_14, 0);
   FUNC_6(VAR_23, VAR_15, 0);
   FUNC_9(VAR_23, VAR_2, VAR_2);
   VAR_29 = FUNC_2(VAR_23, VAR_18);






   FUNC_6(VAR_23, VAR_18, VAR_29 & VAR_9);
   FUNC_6(VAR_23, VAR_16, FUNC_2(VAR_23, VAR_16) | VAR_20);
   VAR_25 = VAR_21;
  }
  FUNC_6(VAR_23, VAR_7, VAR_4);
  FUNC_6(VAR_23, VAR_5, VAR_6);
  FUNC_9(VAR_23, VAR_23->saved_src_mode, VAR_23->saved_dst_mode);
  FUNC_6(VAR_23, VAR_11, VAR_23->unpause);
  while (!FUNC_4(VAR_23))
   FUNC_0(200);
  FUNC_10(VAR_23);
 }
 if (VAR_25) {
  FUNC_9(VAR_23, VAR_1, VAR_1);
  FUNC_6(VAR_23, VAR_17, VAR_28);
  FUNC_6(VAR_23, VAR_19, VAR_30);
  FUNC_6(VAR_23, VAR_12, VAR_31);
  FUNC_6(VAR_23, VAR_13, VAR_32);
  FUNC_6(VAR_23, VAR_14, VAR_33);
  FUNC_6(VAR_23, VAR_15, VAR_34);
  FUNC_9(VAR_23, VAR_2, VAR_2);
  FUNC_6(VAR_23, VAR_16, FUNC_2(VAR_23, VAR_16) & ~VAR_20);
    FUNC_6(VAR_23, VAR_18, VAR_29);






  FUNC_6(VAR_23, VAR_5, VAR_6);
 }
 FUNC_7(VAR_23, VAR_24);
}
