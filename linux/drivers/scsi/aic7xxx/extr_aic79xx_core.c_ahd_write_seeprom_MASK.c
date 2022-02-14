
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
struct ahd_softc {int dummy; } ;


 int FUNC_0 (struct ahd_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct ahd_softc*,int ,int) ;
 int FUNC_2 (struct ahd_softc*,int ,int ) ;
 int FUNC_3 (struct ahd_softc*) ;

int
FUNC_4(struct ahd_softc *VAR_12, uint16_t *VAR_13,
    u_int VAR_14, u_int VAR_15)
{
 u_int VAR_16;
 u_int VAR_17;
 int VAR_18;
 int VAR_19;

 FUNC_0(VAR_12, VAR_0, VAR_0);
 VAR_18 = VAR_2;


 FUNC_1(VAR_12, VAR_3, VAR_9);
 FUNC_1(VAR_12, VAR_4, VAR_8 | VAR_11);
 VAR_18 = FUNC_3(VAR_12);
 if (VAR_18)
  return (VAR_18);





 VAR_19 = VAR_1;
 VAR_17 = VAR_14 + VAR_15;
 for (VAR_16 = VAR_14; VAR_16 < VAR_17; VAR_16++) {
  FUNC_2(VAR_12, VAR_5, *VAR_13++);
  FUNC_1(VAR_12, VAR_3, VAR_16);
  FUNC_1(VAR_12, VAR_4, VAR_10 | VAR_11);

  VAR_19 = FUNC_3(VAR_12);
  if (VAR_19)
   break;
 }




 FUNC_1(VAR_12, VAR_3, VAR_7);
 FUNC_1(VAR_12, VAR_4, VAR_6 | VAR_11);
 VAR_18 = FUNC_3(VAR_12);
 if (VAR_18)
  return (VAR_18);
 return (VAR_19);
}
