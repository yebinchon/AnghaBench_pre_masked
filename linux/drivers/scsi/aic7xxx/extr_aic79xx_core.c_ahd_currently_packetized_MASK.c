
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahd_softc {int bugs; } ;
typedef int ahd_mode_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ahd_softc*,int ) ;
 int FUNC_1 (struct ahd_softc*,int ) ;
 int FUNC_2 (struct ahd_softc*) ;
 int FUNC_3 (struct ahd_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct ahd_softc *VAR_6)
{
 ahd_mode_state VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_6);
 if ((VAR_6->bugs & VAR_2) != 0) {





  FUNC_3(VAR_6, VAR_0, VAR_0);
  VAR_8 = FUNC_0(VAR_6, VAR_4) != 0;
 } else {
  FUNC_3(VAR_6, VAR_1, VAR_1);
  VAR_8 = FUNC_0(VAR_6, VAR_3) & VAR_5;
 }
 FUNC_1(VAR_6, VAR_7);
 return (VAR_8);
}
