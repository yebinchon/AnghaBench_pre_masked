
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahd_softc {int dummy; } ;


 int FUNC_0 (struct ahd_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ahd_softc*,int ) ;

__attribute__((used)) static int
FUNC_3(struct ahd_softc *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_4, VAR_0, VAR_0);
 VAR_5 = 1000000 * 2 / 5;
 while ((FUNC_2(VAR_4, VAR_1) & VAR_3) == 0 && --VAR_5)
  FUNC_1(5);

 if (VAR_5 == 0)
  return (VAR_2);
 return (0);
}
