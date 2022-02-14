
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahc_softc {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ahc_softc*,int ) ;

__attribute__((used)) static void
FUNC_1(struct ahc_softc *VAR_2)
{
 if ((VAR_2->features & VAR_0) != 0)
  (void)FUNC_0(VAR_2, VAR_1);
}
