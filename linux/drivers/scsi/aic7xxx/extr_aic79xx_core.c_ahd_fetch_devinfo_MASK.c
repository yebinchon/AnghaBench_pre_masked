
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahd_softc {int dummy; } ;
struct ahd_devinfo {int dummy; } ;
typedef scalar_t__ role_t ;
typedef int ahd_mode_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ahd_softc*,int) ;
 int FUNC_1 (struct ahd_softc*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct ahd_devinfo*,int,int ,int,int ,scalar_t__) ;
 int FUNC_3 (struct ahd_softc*,int ) ;
 int FUNC_4 (struct ahd_softc*,int ) ;
 int FUNC_5 (struct ahd_softc*) ;
 int FUNC_6 (struct ahd_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct ahd_softc *VAR_13, struct ahd_devinfo *VAR_14)
{
 ahd_mode_state VAR_15;
 u_int VAR_16;
 role_t VAR_17;
 int VAR_18;

 VAR_15 = FUNC_5(VAR_13);
 FUNC_6(VAR_13, VAR_0, VAR_0);

 if (FUNC_3(VAR_13, VAR_9) & VAR_10)
  VAR_17 = VAR_5;
 else
  VAR_17 = VAR_4;

 if (VAR_17 == VAR_5
  && (FUNC_3(VAR_13, VAR_8) & VAR_1) != 0) {

  VAR_18 = FUNC_3(VAR_13, VAR_11) & VAR_3;
 } else if (VAR_17 == VAR_5)
  VAR_18 = FUNC_3(VAR_13, VAR_12);
 else
  VAR_18 = FUNC_3(VAR_13, VAR_2);

 VAR_16 = FUNC_3(VAR_13, VAR_7);
 FUNC_2(VAR_14,
       VAR_18,
       FUNC_1(VAR_13, VAR_16),
       FUNC_3(VAR_13, VAR_6),
       FUNC_0(VAR_13, VAR_16),
       VAR_17);
 FUNC_4(VAR_13, VAR_15);
}
