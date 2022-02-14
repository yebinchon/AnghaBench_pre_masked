
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahd_softc {int dummy; } ;


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
 int VAR_12 ;
 int FUNC_0 (struct ahd_softc*) ;
 int FUNC_1 (struct ahd_softc*,int ) ;
 int FUNC_2 (struct ahd_softc*,int ,int) ;
 int FUNC_3 (struct ahd_softc*,char,int ) ;
 int FUNC_4 (struct ahd_softc*) ;
 int FUNC_5 (struct ahd_softc*,int ,int ) ;
 int FUNC_6 (struct ahd_softc*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9(struct ahd_softc *VAR_13, u_int VAR_14)
{



 FUNC_5(VAR_13, VAR_0, VAR_0);
 FUNC_2(VAR_13, VAR_3, VAR_14);
 FUNC_4(VAR_13);
 if ((FUNC_1(VAR_13, VAR_11) & VAR_1) != 0
  && (FUNC_1(VAR_13, VAR_10) & VAR_5) != 0) {
  if ((VAR_14 & VAR_7) != 0) {
   FUNC_8("LQIRETRY for LQIPHASE_LQ\n");
   FUNC_2(VAR_13, VAR_6, VAR_9);
  } else if ((VAR_14 & VAR_8) != 0) {
   FUNC_8("LQIRETRY for LQIPHASE_NLQ\n");
   FUNC_2(VAR_13, VAR_6, VAR_9);
  } else
   FUNC_7("ahd_handle_lqiphase_error: No phase errors\n");
  FUNC_0(VAR_13);
  FUNC_2(VAR_13, VAR_2, VAR_4);
  FUNC_6(VAR_13);
 } else {
  FUNC_8("Resetting Channel for LQI Phase error\n");
  FUNC_0(VAR_13);
  FUNC_3(VAR_13, 'A', VAR_12);
 }
}
