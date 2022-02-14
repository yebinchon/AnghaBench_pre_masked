
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahc_softc {int unpause; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ahc_softc*,int ) ;
 int FUNC_1 (struct ahc_softc*,int ,int ) ;

void
FUNC_2(struct ahc_softc *VAR_5)
{
 if ((FUNC_0(VAR_5, VAR_2) & (VAR_3 | VAR_4 | VAR_0)) == 0)
  FUNC_1(VAR_5, VAR_1, VAR_5->unpause);
}
