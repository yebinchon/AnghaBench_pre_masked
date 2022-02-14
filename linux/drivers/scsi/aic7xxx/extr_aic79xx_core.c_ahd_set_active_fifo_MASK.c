
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahd_softc {int dummy; } ;


 int FUNC_0 (struct ahd_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ahd_softc*,int ) ;
 int FUNC_2 (struct ahd_softc*,int,int) ;

__attribute__((used)) static inline int
FUNC_3(struct ahd_softc *VAR_3)
{
 u_int VAR_4;

 FUNC_0(VAR_3, VAR_0, VAR_0);
 VAR_4 = FUNC_1(VAR_3, VAR_2) & VAR_1;
 switch (VAR_4) {
 case 0:
 case 1:
  FUNC_2(VAR_3, VAR_4, VAR_4);
  return (1);
 default:
  return (0);
 }
}
