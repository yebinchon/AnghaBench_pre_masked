
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahc_softc {int dummy; } ;


 int FUNC_0 (struct ahc_softc*) ;
 int FUNC_1 (struct ahc_softc*) ;

__attribute__((used)) static int
FUNC_2(struct ahc_softc *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 == 0)
  VAR_1 = FUNC_0(VAR_0);
 return (VAR_1);
}
