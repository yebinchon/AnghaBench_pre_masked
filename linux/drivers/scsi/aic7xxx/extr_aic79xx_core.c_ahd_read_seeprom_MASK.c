
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ u_int ;
struct ahd_softc {int dummy; } ;


 int FUNC_0 (struct ahd_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_1 (struct ahd_softc*,scalar_t__) ;
 int FUNC_2 (struct ahd_softc*,scalar_t__) ;
 int FUNC_3 (struct ahd_softc*,int ,scalar_t__) ;
 int FUNC_4 (struct ahd_softc*) ;

int
FUNC_5(struct ahd_softc *VAR_7, uint16_t *VAR_8,
   u_int VAR_9, u_int VAR_10, int VAR_11)
{
 u_int VAR_12;
 u_int VAR_13;
 int VAR_14;





 VAR_14 = VAR_1;
 FUNC_0(VAR_7, VAR_0, VAR_0);
 VAR_13 = VAR_9 + VAR_10;
 for (VAR_12 = VAR_9; VAR_12 < VAR_13; VAR_12++) {

  FUNC_3(VAR_7, VAR_2, VAR_12);
  FUNC_3(VAR_7, VAR_3, VAR_5 | VAR_6);

  VAR_14 = FUNC_4(VAR_7);
  if (VAR_14)
   break;
  if (VAR_11 != 0) {
   uint8_t *VAR_15;

   VAR_15 = (uint8_t *)VAR_8;
   *VAR_15++ = FUNC_1(VAR_7, VAR_4);
   *VAR_15 = FUNC_1(VAR_7, VAR_4+1);
  } else {



   *VAR_8 = FUNC_2(VAR_7, VAR_4);
  }
  VAR_8++;
 }
 return (VAR_14);
}
