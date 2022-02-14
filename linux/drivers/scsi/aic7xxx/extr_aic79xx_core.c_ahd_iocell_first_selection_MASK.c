
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahd_softc {int flags; } ;
typedef int ahd_mode_state ;


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
 int VAR_13 ;
 int FUNC_0 (struct ahd_softc*,int ) ;
 int FUNC_1 (struct ahd_softc*) ;
 int FUNC_2 (struct ahd_softc*,int ,int) ;
 int FUNC_3 (struct ahd_softc*,int ) ;
 int FUNC_4 (struct ahd_softc*) ;
 int FUNC_5 (struct ahd_softc*,int ,int ) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static void
FUNC_7(struct ahd_softc *VAR_14)
{
 ahd_mode_state VAR_15;
 u_int VAR_16;

 if ((VAR_14->flags & VAR_0) != 0)
  return;
 VAR_15 = FUNC_4(VAR_14);
 FUNC_5(VAR_14, VAR_2, VAR_2);
 VAR_16 = FUNC_0(VAR_14, VAR_11);
 FUNC_5(VAR_14, VAR_1, VAR_1);




 if ((VAR_16 & VAR_8) != 0) {
  FUNC_2(VAR_14, VAR_7,
    FUNC_0(VAR_14, VAR_7) & ~VAR_4);




 }
 FUNC_2(VAR_14, VAR_12, FUNC_0(VAR_14, VAR_12) & ~(VAR_10|VAR_9));
 FUNC_2(VAR_14, VAR_5, VAR_6);
 FUNC_3(VAR_14, VAR_15);
 VAR_14->flags |= VAR_0;
}
