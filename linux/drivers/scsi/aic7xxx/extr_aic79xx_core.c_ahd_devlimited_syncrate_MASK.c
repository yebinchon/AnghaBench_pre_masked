
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahd_transinfo {int ppr_options; scalar_t__ width; scalar_t__ period; } ;
struct ahd_softc {int dummy; } ;
struct ahd_initiator_tinfo {struct ahd_transinfo goal; struct ahd_transinfo user; } ;
typedef scalar_t__ role_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct ahd_softc*,int*,int*,int) ;
 int FUNC_1 (struct ahd_softc*,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void
FUNC_3(struct ahd_softc *VAR_12,
   struct ahd_initiator_tinfo *VAR_13,
   u_int *VAR_14, u_int *VAR_15, role_t VAR_16)
{
 struct ahd_transinfo *VAR_17;
 u_int VAR_18;

 if ((FUNC_1(VAR_12, VAR_10) & VAR_3) != 0
  && (FUNC_1(VAR_12, VAR_11) & VAR_4) == 0) {
  VAR_18 = VAR_0;
 } else {
  VAR_18 = VAR_1;

  *VAR_15 &= VAR_7;
 }
 if (VAR_16 == VAR_9)
  VAR_17 = &VAR_13->user;
 else
  VAR_17 = &VAR_13->goal;
 *VAR_15 &= (VAR_17->ppr_options|VAR_6);
 if (VAR_17->width == VAR_8) {
  VAR_18 = FUNC_2(VAR_18, (u_int)VAR_2);
  *VAR_15 &= ~VAR_5;
 }
 if (VAR_17->period == 0) {
  *VAR_14 = 0;
  *VAR_15 = 0;
 } else {
  *VAR_14 = FUNC_2(*VAR_14, (u_int)VAR_17->period);
  FUNC_0(VAR_12, VAR_14, VAR_15, VAR_18);
 }
}
