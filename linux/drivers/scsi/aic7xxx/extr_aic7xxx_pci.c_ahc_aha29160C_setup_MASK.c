
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahc_softc {int features; } ;


 int VAR_0 ;
 int FUNC_0 (struct ahc_softc*) ;

__attribute__((used)) static int
FUNC_1(struct ahc_softc *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 != 0)
  return (VAR_2);
 VAR_1->features |= VAR_0;
 return (0);
}
