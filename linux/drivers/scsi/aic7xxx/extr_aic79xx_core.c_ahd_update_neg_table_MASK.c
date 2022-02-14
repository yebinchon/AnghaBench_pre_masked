
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
struct ahd_transinfo {int period; int offset; int ppr_options; scalar_t__ width; } ;
struct ahd_softc {int bugs; int features; int iocell_opts; } ;
struct ahd_devinfo {int target; } ;
typedef int ahd_mode_state ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
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
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_0 (struct ahd_softc*,int ) ;
 int FUNC_1 (struct ahd_softc*,int ,int) ;
 int FUNC_2 (struct ahd_softc*,int ) ;
 int FUNC_3 (struct ahd_softc*) ;
 int FUNC_4 (struct ahd_softc*,int ,int ) ;
 int FUNC_5 (int*,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct ahd_softc *VAR_30, struct ahd_devinfo *VAR_31,
       struct ahd_transinfo *VAR_32)
{
 ahd_mode_state VAR_33;
 u_int VAR_34;
 u_int VAR_35;
 u_int VAR_36;
 u_int VAR_37;
 u_int VAR_38;
 uint8_t VAR_39[sizeof(VAR_30->iocell_opts)];

 VAR_33 = FUNC_3(VAR_30);
 FUNC_4(VAR_30, VAR_4, VAR_4);

 VAR_38 = FUNC_0(VAR_30, VAR_24);
 FUNC_1(VAR_30, VAR_24, VAR_31->target);
 VAR_34 = VAR_32->period;
 VAR_37 = VAR_32->offset;
 FUNC_5(VAR_39, VAR_30->iocell_opts, sizeof(VAR_30->iocell_opts));
 VAR_35 = VAR_32->ppr_options & (VAR_20|VAR_17
     |VAR_18|VAR_21);
 VAR_36 = 0;
 if (VAR_34 == 0)
  VAR_34 = VAR_11;
 if (VAR_34 == VAR_10) {

  if ((VAR_30->bugs & VAR_6) != 0) {
   VAR_35 |= VAR_28;
   VAR_37 *= 2;







   VAR_34 = VAR_12;
  }
  if ((VAR_32->ppr_options & VAR_19) == 0)
   VAR_39[VAR_8] &=
       ~VAR_7;
 } else {



  VAR_39[VAR_8] &= ~VAR_7;

  if ((VAR_30->features & VAR_5) != 0
   && (VAR_35 & VAR_17) != 0
   && (VAR_35 & VAR_18) == 0) {






   VAR_36 |= VAR_16;
  }

  if ((VAR_30->bugs & VAR_6) != 0) {




   VAR_39[VAR_8] &=
       ~VAR_9;
  }
 }

 FUNC_1(VAR_30, VAR_13, VAR_3);
 FUNC_1(VAR_30, VAR_14, VAR_39[VAR_8]);
 FUNC_1(VAR_30, VAR_13, VAR_2);
 FUNC_1(VAR_30, VAR_14, VAR_39[VAR_1]);

 FUNC_1(VAR_30, VAR_26, VAR_34);
 FUNC_1(VAR_30, VAR_27, VAR_35);
 FUNC_1(VAR_30, VAR_25, VAR_37);

 if (VAR_32->width == VAR_22)
  VAR_36 |= VAR_29;






 if (VAR_30->features & VAR_0) {
  VAR_36 |= VAR_16;
 }






 if ((VAR_32->ppr_options & VAR_18) == 0)
  VAR_36 |= VAR_15;
 FUNC_1(VAR_30, VAR_23, VAR_36);
 FUNC_1(VAR_30, VAR_24, VAR_38);
 FUNC_2(VAR_30, VAR_33);
}
