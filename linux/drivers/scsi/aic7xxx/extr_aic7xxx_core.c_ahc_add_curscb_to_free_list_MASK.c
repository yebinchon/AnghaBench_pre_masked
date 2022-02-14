
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahc_softc {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ahc_softc*,int ) ;
 int FUNC_1 (struct ahc_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct ahc_softc *VAR_6)
{




 FUNC_1(VAR_6, VAR_5, VAR_3);

 if ((VAR_6->flags & VAR_0) != 0) {
  FUNC_1(VAR_6, VAR_4, FUNC_0(VAR_6, VAR_1));
  FUNC_1(VAR_6, VAR_1, FUNC_0(VAR_6, VAR_2));
 }
}
